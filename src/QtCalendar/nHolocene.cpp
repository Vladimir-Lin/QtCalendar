#include <qtcalendar.h>

/*****************************************************************************\
 *                                                                           *
 *                             Holocene Calendar                             *
 *                                                                           *
 *****************************************************************************/

#ifdef WIN32
#pragma message("Holocene calendar are required to do a check on year correction")
#else
#warning        "Holocene calendar are required to do a check on year correction"
#endif

N::HoloceneCalendar:: HoloceneCalendar (void)
                    : DateTime         (    )
{
}

N::HoloceneCalendar::~HoloceneCalendar (void)
{
}

QString N::HoloceneCalendar::toString(QString format)
{
  DateTime TY                                              ;
  QString  S = format                                      ;
  QString  R                                               ;
  TY.setYMD(-10001,1,1)                                    ;
  if (format.contains("/nn/"))                             {
    if (TY.Stardate>StarDate::Stardate)                    {
      R = QObject::tr("BHE")                               ;
    } else                                                 {
      R = QObject::tr("HE" )                               ;
    }                                                      ;
    S = S.replace("/nn/",R)                                ;
  }                                                        ;
  if (format.contains("/nl/"))                             {
    if (TY.Stardate>StarDate::Stardate)                    {
      R = QObject::tr("Before Human Era")                  ;
    } else                                                 {
      R = QObject::tr("Human Era")                         ;
    }                                                      ;
    S = S.replace("/nl/",R)                                ;
  }                                                        ;
  if (format.contains("yyyyy"))                            {
    R = QString("%1").arg(year(),5,10,QChar('0'))          ;
    S = S.replace("yyyyy",R)                               ;
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

int N::HoloceneCalendar::year(void)
{
  if (gmtyear<0) return gmtyear + 10001 ;
  return gmtyear + 10000                ;
}

void N::HoloceneCalendar::setYMD(int year,int month,int day)
{
  if (year> 10000) AD(year-10000,month,day) ;
              else BC(10001-year,month,day) ;
  locate ( )                                ;
}
