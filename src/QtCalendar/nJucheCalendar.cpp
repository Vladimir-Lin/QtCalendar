#include <qtcalendar.h>

/*****************************************************************************\
 *                                                                           *
 *                        North Korean Juche Calendar                        *
 *                                                                           *
\*****************************************************************************/

N::JucheCalendar:: JucheCalendar (void)
                 : DateTime      (    )
{
  LocalTime = 9 * 3600 ;
}

N::JucheCalendar::~JucheCalendar (void)
{
}

QString N::JucheCalendar::toString(QString format)
{
  DateTime TY                                              ;
  QString  S = format                                      ;
  QString  R                                               ;
  TY.setYMD(1911,1,1)                                      ;
  if (format.contains("/nn/"))                             {
    if (TY.Stardate>StarDate::Stardate)                    {
      R = QObject::tr("BJI")                               ;
    } else                                                 {
      R = QObject::tr("Juche")                             ;
    }                                                      ;
    S = S.replace("/nn/",R)                                ;
  }                                                        ;
  if (format.contains("/nl/"))                             {
    if (TY.Stardate>StarDate::Stardate)                    {
      R = QObject::tr("Before Chuch'e")                    ;
    } else                                                 {
      R = QObject::tr("Chuch'e")                           ;
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

int N::JucheCalendar::year(void)
{
  return gmtyear - 1911 ;
}

void N::JucheCalendar::setYMD(int year,int month,int day)
{
  DateTime :: setYMD ( year + 1911 , month , day ) ;
}
