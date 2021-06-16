#include <qtcalendar.h>

/*****************************************************************************\
 *                                                                           *
 *                               Buddist Calendar                            *
 *                                                                           *
 *****************************************************************************/

#ifdef WIN32
#pragma message("Buddist calendar are required to do a check on year correction")
#else
#warning        "Buddist calendar are required to do a check on year correction"
#endif

N::BuddhistCalendar:: BuddhistCalendar (void)
                    : DateTime         (    )
{
  LocalTime = 11 * 1800 ;
}

N::BuddhistCalendar::~BuddhistCalendar (void)
{
}

QString N::BuddhistCalendar::toString(QString format)
{
  DateTime TY                                              ;
  QString  S = format                                      ;
  QString  R                                               ;
  TY.setYMD(-543,1,1)                                      ;
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
  if (format.contains("yyyy"))                             {
    R = QString("%1").arg(year(),3,10,QChar('0'))          ;
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
  return  S                                                ;
}

int N::BuddhistCalendar::year(void)
{
  return gmtyear + 543;
}

void N::BuddhistCalendar::setYMD(int year,int month,int day)
{
  DateTime::setYMD(year-543,month,day);
}
