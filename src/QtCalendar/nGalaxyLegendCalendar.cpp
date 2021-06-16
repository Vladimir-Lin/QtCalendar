#include <qtcalendar.h>

/***********************************************
               Galaxy Legend Calendar
 ***********************************************/

N::GalaxyLegendCalendar:: GalaxyLegendCalendar (void)
                        : AbstractCalendar     (    )
{
}

N::GalaxyLegendCalendar::~GalaxyLegendCalendar (void)
{
}

QString N::GalaxyLegendCalendar::toString(QString format)
{
  DateTime TY                                              ;
  QString  S = format                                      ;
  QString  R                                               ;
  TY.setYMD(2801,1,1)                                      ;
  if (format.contains("/nn/"))                             {
    if (TY.Stardate>StarDate::Stardate)                    {
      R = QObject::tr("BUC")                               ;
    } else                                                 {
      R = QObject::tr("Universe")                          ;
    }                                                      ;
    S = S.replace("/nn/",R)                                ;
  }                                                        ;
  if (format.contains("/nl/"))                             {
    if (TY.Stardate>StarDate::Stardate)                    {
      R = QObject::tr("Before Universe")                   ;
    } else                                                 {
      R = QObject::tr("Universe Calendar")                 ;
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

int N::GalaxyLegendCalendar::year(void)
{
  return gmtyear - 2801 ;
}

int N::GalaxyLegendCalendar::month(void)
{
  return gmtmonth ;
}

int N::GalaxyLegendCalendar::mday(void)
{
  return gmtdays ;
}
