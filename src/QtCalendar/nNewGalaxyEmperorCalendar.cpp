#include <qtcalendar.h>

/***********************************************
            New Galaxy Emperor Calendar
 ***********************************************/

N::NewGalaxyEmperorCalendar:: NewGalaxyEmperorCalendar (void)
                            : AbstractCalendar         (    )
{
}

N::NewGalaxyEmperorCalendar::~NewGalaxyEmperorCalendar (void)
{
}

QString N::NewGalaxyEmperorCalendar::toString(QString format)
{
  DateTime TY                                              ;
  QString  S = format                                      ;
  QString  R                                               ;
  TY.setYMD(3601,1,1)                                      ;
  if (format.contains("/nn/"))                             {
    if (TY.Stardate>StarDate::Stardate)                    {
      R = QObject::tr("BNUE")                              ;
    } else                                                 {
      R = QObject::tr("New Universe Emperor")              ;
    }                                                      ;
    S = S.replace("/nn/",R)                                ;
  }                                                        ;
  if (format.contains("/nl/"))                             {
    if (TY.Stardate>StarDate::Stardate)                    {
      R = QObject::tr("Before New Universe Emperor")       ;
    } else                                                 {
      R = QObject::tr("New Universe Emperor Calendar")     ;
    }                                                      ;
    S = S.replace("/nl/",R)                                ;
  }                                                        ;
  if (format.contains("yyy"))                              {
    R = QString("%1").arg(year(),3,10,QChar('0'))          ;
    S = S.replace("yyy",R)                                 ;
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
  return  S                                                ;
}

int N::NewGalaxyEmperorCalendar::year(void)
{
  return gmtyear - 3601 ;
}

int N::NewGalaxyEmperorCalendar::month(void)
{
  return gmtmonth ;
}

int N::NewGalaxyEmperorCalendar::mday(void)
{
  return gmtdays ;
}
