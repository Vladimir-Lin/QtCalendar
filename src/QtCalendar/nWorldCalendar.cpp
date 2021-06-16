#include <qtcalendar.h>

/*****************************************************************************\
 *                                                                           *
 *                             World Calendar                                *
 *                    http://www.theworldcalendar.org                        *
 *                                                                           *
\*****************************************************************************/

#define SECSADAY            86400LL
#define GMT_HOLO   16436250000000LL
#define GMT_1      ( GMT_HOLO + 3652423LL )
#define GMT_1582   ( GMT_HOLO + 4229871LL )
#define GMT_START  ( GMT_HOLO + 4230148LL )
#define GMT_1583   ( GMT_HOLO + 4230226LL )
#define GMT_1900   ( GMT_HOLO + 4346008LL )
#define GMT_1970   ( GMT_HOLO + 4371575LL )
#define GMT_EPOCH  ( GMT_HOLO + 4371575LL )
#define GMT_JULIAN 1420092166837320000LL

#define WEEK_0 5LL

N::WorldCalendar:: WorldCalendar    (void)
                 : AbstractCalendar (    )
{
}

N::WorldCalendar::~WorldCalendar(void)
{
}

QString N::WorldCalendar::toString(QString format)
{
  QString S = format                                       ;
  QString R                                                ;
  if (format.contains("/nn/"))                             {
    R = QObject::tr("TWC")                                 ;
    S = S.replace("/nn/",R)                                ;
  }                                                        ;
  if (format.contains("/nl/"))                             {
    R = QObject::tr("The World Calendar")                  ;
    S = S.replace("/nl/",R)                                ;
  }                                                        ;
  if (format.contains("yyyy"))                             {
    R = QString("%1").arg(year(),4,10,QChar('0'))          ;
    S = S.replace("yyyy",R)                                ;
  }                                                        ;
  if (format.contains("MM"  ))                             {
    R = QString("%1").arg(month(),2,10,QChar('0'))         ;
    S = S.replace("MM",R)                                  ;
  }                                                        ;
  if (format.contains("dd"  ))                             {
    R = QString("%1").arg(mday(),2,10,QChar('0'))          ;
    S = S.replace("dd",R)                                  ;
  }                                                        ;
  if (format.contains("hh"  ))                             {
    R = QString("%1").arg(hours(),2,10,QChar('0'))         ;
    S = S.replace("hh",R)                                  ;
  }                                                        ;
  if (format.contains("mm"  ))                             {
    R = QString("%1").arg(minutes(),2,10,QChar('0'))       ;
    S = S.replace("mm",R)                                  ;
  }                                                        ;
  if (format.contains("ss"  ))                             {
    R = QString("%1").arg(seconds(),2,10,QChar('0'))       ;
    S = S.replace("ss",R)                                  ;
  }                                                        ;
  if (format.contains("zzz"  ))                            {
    R = QString("%1").arg(mseconds()%1000,3,10,QChar('0')) ;
    S = S.replace("zzz",R)                                 ;
  }                                                        ;
  return S                                                 ;
}

void N::WorldCalendar::update(void)
{
  Time::update ()                     ;
  locate ()                           ;
  TUID ssd = StarDate::day() - WEEK_0 ;
  gmtweek = (int)( ssd % 7 )          ;
}

void N::WorldCalendar::locate(void)
{
  int  mm[]={0,31,30,30,31,30,30,31,30,30,31,30,31};
  int  gy              ;
  int  mn              ;
  int  md              ;
  TUID ydays           ;
  TUID ssx             ;
  TUID ssd = day()     ;
  bool leap  = false   ;
  bool m4000           ;
  bool m400            ;
  bool m100            ;
  bool m4              ;
  if (ssd>=GMT_1583)   {
    gy  = 1583         ;
    ssx = GMT_1583     ;
    do {
      leap  = false ;
      m4000 = (gy % 4000) == 0 ;
      m400  = (gy %  400) == 0 ;
      m100  = (gy %  100) == 0 ;
      m4    = (gy %    4) == 0 ;
      if (m4000) leap = false ; else
      if (m400 ) leap = true  ; else
      if (m100 ) leap = false ; else
      if (m4   ) leap = true  ;
      ydays = leap ? 366 : 365 ;
      if (leap ) mm[6] = 31   ; else mm[6] = 30 ;
      if ((ssd - ssx)>=ydays) {
        ssx += ydays ;
        gy  ++       ;
        mn   = 1     ;
        md   = 1     ;
      } else {
        mn   = 1     ;
        md   = 1     ;
        while (ssd>ssx) {
          ydays = ssd - ssx  ;
          if (mm[mn]<=ydays) {
            ssx += mm[mn]    ;
            mn  ++           ;
            md   = 1         ;
          } else             {
            md   = ydays + 1 ;
            ssx  = ssd       ;
          };
        };
      };
    } while (ssd>ssx);
    wyear  = gy ;
    wmonth = mn ;
    wdays  = md ;
  } else { // B.C.
    ssx = GMT_1583 ;
    gy  = 1582     ;
    while (ssx>ssd) {
      leap  = false ;
      m4000 = (gy % 4000) == 0 ;
      m400  = (gy %  400) == 0 ;
      m100  = (gy %  100) == 0 ;
      m4    = (gy %    4) == 0 ;
      if (gy==0) leap = true  ; else
      if (m4000) leap = false ; else
      if (m400 ) leap = true  ; else
      if (m100 ) leap = false ; else
      if (m4   ) leap = true  ;
      ydays = leap ? 366 : 365 ;
      if (leap ) mm[6] = 31   ; else mm[6] = 30 ;
      ssx -= ydays ;
      if ((ssx>=ssd)) {
        if (gy==1  ) gy = -1; else
        if (ssx>ssd) gy -- ;
        mn  = 1 ;
        md  = 1 ;
      } else {
        mn   = 1     ;
        md   = 1     ;
        while (ssd>ssx) {
          ydays = ssd - ssx  ;
          if (mm[mn]<=ydays) {
            ssx += mm[mn]    ;
            mn  ++           ;
            md   = 1         ;
          } else             {
            ssx += ydays     ;
            md   = ydays + 1 ;
          };
        };
        ssx = ssd ;
      };
    };
    wyear  = gy ;
    wmonth = mn ;
    wdays  = md ;
  };
  if (wmonth==1 || wmonth==4 || wmonth==7 || wmonth==10) {
    int wd = wdays - 1 ;
    dweek = wd % 7;
  } else
  if (wmonth==2 || wmonth==5 || wmonth==8 || wmonth==11) {
    int wd = wdays + 2 ;
    dweek = wd % 7;
  } else {
    int wd = wdays + 4 ;
    dweek = wd % 7;
    if (wdays==31 && (wmonth==6 || wmonth==12)) dweek = 6;
  };
}

int N::WorldCalendar::year(void)
{
  return wyear;
}

int N::WorldCalendar::month(void)
{
  return wmonth;
}

int N::WorldCalendar::mday(void)
{
  return wdays;
}

int N::WorldCalendar::weekday(void)
{
  return dweek;
}
