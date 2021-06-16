#include <qtcalendar.h>

/*****************************************************************************\
 *                                                                           *
 *                             Taiwan Calendar                               *
 *                                                                           *
 *****************************************************************************/

#ifdef WIN32
#pragma message("Taiwan calendar are required to do a check on year correction")
#else
#warning        "Taiwan calendar are required to do a check on year correction"
#endif

N::TaiwanCalendar:: TaiwanCalendar (void)
                  : DateTime       (    )
{
  LocalTime = 3600 * 8 ;
}

N::TaiwanCalendar::~TaiwanCalendar (void)
{
}

QString N::TaiwanCalendar::toString(QString format)
{
  DateTime TY                                              ;
  QString  S = format                                      ;
  QString  R                                               ;
  TY.setYMD(1911,1,1)                                      ;
  if (format.contains("/nn/"))                             {
    if (TY.Stardate>StarDate::Stardate)                    {
      R = QObject::tr("BMG")                               ;
    } else                                                 {
      R = QObject::tr("Minguo")                            ;
    }                                                      ;
    S = S.replace("/nn/",R)                                ;
  }                                                        ;
  if (format.contains("/nl/"))                             {
    if (TY.Stardate>StarDate::Stardate)                    {
      R = QObject::tr("Before republic")                   ;
    } else                                                 {
      R = QObject::tr("Republic")                          ;
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

int N::TaiwanCalendar::year(void)
{
  return gmtyear - 1911 ;
}

void N::TaiwanCalendar::setYMD(int year,int month,int day)
{
  DateTime :: setYMD ( year + 1911 , month , day ) ;
}
