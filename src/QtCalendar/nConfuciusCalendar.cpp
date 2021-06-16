#include <qtcalendar.h>

/***********************************************
              Confucius Calendar
 ***********************************************/

N::ConfuciusCalendar:: ConfuciusCalendar (void)
                     : AbstractCalendar  (    )
{
  LocalTime = 8 * 3600 ;
}

N::ConfuciusCalendar::~ConfuciusCalendar(void)
{
}

QString N::ConfuciusCalendar::toString(QString format)
{
  DateTime TY                                              ;
  QString  S = format                                      ;
  QString  R                                               ;
  TY.setYMD(-552,1,1)                                      ;
  if (format.contains("/nn/"))                             {
    if (TY.Stardate>StarDate::Stardate)                    {
      R = QObject::tr("BCE")                               ;
    } else                                                 {
      R = QObject::tr("Confucius")                         ;
    }                                                      ;
    S = S.replace("/nn/",R)                                ;
  }                                                        ;
  if (format.contains("/nl/"))                             {
    if (TY.Stardate>StarDate::Stardate)                    {
      R = QObject::tr("Before Confucius")                  ;
    } else                                                 {
      R = QObject::tr("Confucius")                         ;
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

int N::ConfuciusCalendar::year(void)
{
  return gmtyear + 551 ;
}

int N::ConfuciusCalendar::month(void)
{
  return gmtmonth ;
}

int N::ConfuciusCalendar::mday(void)
{
  return gmtdays ;
}
