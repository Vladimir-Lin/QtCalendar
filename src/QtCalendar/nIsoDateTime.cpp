#include <qtcalendar.h>

/*****************************************************************************\
 *                                                                           *
 *                    ISO 8601:2000 Date and Time Formats                    *
 *                                                                           *
 *****************************************************************************/

#define WEEK_0 5LL

N::IsoDateTime:: IsoDateTime (void)
               : DateTime    (    )
{
}

N::IsoDateTime::~IsoDateTime (void)
{
}

QString N::IsoDateTime::toString(QString format)
{
  QString S = format                                       ;
  QString R                                                ;
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

void N::IsoDateTime::update(void)
{
  Time::update ()                     ;
  locate ()                           ;
  TUID ssd = StarDate::day() - WEEK_0 ;
  gmtweek = (int)( ssd % 7 )          ;
}

int N::IsoDateTime::year(void)
{
  return gmtyear ;
}

int N::IsoDateTime::month(void)
{
  return gmtmonth ;
}

int N::IsoDateTime::mday(void)
{
  return gmtdays ;
}

int N::IsoDateTime::weekday(void)
{
  return gmtweek ;
}

void N::IsoDateTime::setYMD(int year,int month,int day)
{
  if (year>0) AD(year,month,day); else
  if (year<0) BC(year,month,day);
}
