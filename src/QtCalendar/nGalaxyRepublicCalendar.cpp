#include <qtcalendar.h>

/***********************************************
               Galaxy Republic Calendar
 ***********************************************/

N::GalaxyRepublicCalendar:: GalaxyRepublicCalendar (void)
                          : AbstractCalendar       (    )
{
}

N::GalaxyRepublicCalendar::~GalaxyRepublicCalendar (void)
{
}

QString N::GalaxyRepublicCalendar::toString(QString format)
{
  DateTime TY                                              ;
  QString  S = format                                      ;
  QString  R                                               ;
  TY.setYMD(2801,1,1)                                      ;
  if (format.contains("/nn/"))                             {
    if (TY.Stardate>StarDate::Stardate)                    {
      R = QObject::tr("BUR")                               ;
    } else                                                 {
      R = QObject::tr("Universe Republic")                 ;
    }                                                      ;
    S = S.replace("/nn/",R)                                ;
  }                                                        ;
  if (format.contains("/nl/"))                             {
    if (TY.Stardate>StarDate::Stardate)                    {
      R = QObject::tr("Before Universe Republic")          ;
    } else                                                 {
      R = QObject::tr("Universe Republic Calendar")        ;
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

int N::GalaxyRepublicCalendar::year(void)
{
  return gmtyear - 2801 ;
}

int N::GalaxyRepublicCalendar::month(void)
{
  return gmtmonth ;
}

int N::GalaxyRepublicCalendar::mday(void)
{
  return gmtdays ;
}
