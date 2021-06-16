#include <qtcalendar.h>

/*****************************************************************************\
 *                                                                           *
 *                            Cosmos Calendar                                *
 *                                                                           *
\*****************************************************************************/

N::CosmosCalendar:: CosmosCalendar   (void)
                  : AbstractCalendar (    )
{
}

N::CosmosCalendar::~CosmosCalendar(void)
{
}

QString N::CosmosCalendar::toString(QString format)
{
  QString S = format                              ;
  QString R                                       ;
  if (S.contains("%1"))                           {
    R = QString("%1").arg(era ())                 ;
    S = S.replace("%1",R)                         ;
  }                                               ;
  if (S.contains("%2"))                           {
    R = QString("%1").arg(age (),3,10,QChar('0')) ;
    S = S.replace("%2",R)                         ;
  }                                               ;
  if (S.contains("%3"))                           {
    R = QString("%1").arg(year(),3,10,QChar('0')) ;
    S = S.replace("%3",R)                         ;
  }                                               ;
  if (S.contains("%4"))                           {
    R = QString("%1").arg(season())               ;
    S = S.replace("%4",R)                         ;
  }                                               ;
  if (S.contains("%5"))                           {
    R = QString("%1").arg(sday(),2,10,QChar('0')) ;
    S = S.replace("%5",R)                         ;
  }                                               ;
  if (S.contains("%6"))                           {
    int secs = (int)(Stardate % 86400LL)          ;
    R = QString("%1").arg(secs,5,10,QChar('0'))   ;
    S = S.replace("%6",R)                         ;
  }                                               ;
  return  S                                       ;
}

int N::CosmosCalendar::era(void)
{
  TUID d = day() ;
  d /= 1000000000 ;
  return (int)( d ) ;
}

int N::CosmosCalendar::age(void)
{
  TUID d = day() ;
  d /= 1000000 ;
  return (int)( d % 1000 ) ;
}

int N::CosmosCalendar::year(void)
{
  TUID d = day() ;
  d /= 1000 ;
  return (int)( d % 1000 ) ;
}

int N::CosmosCalendar::season(void)
{
  TUID d = day() ;
  d /= 100 ;
  return (int)( d % 10 ) ;
}

int N::CosmosCalendar::sday(void)
{
  return (int)( day() % 100 ) ;
}

int N::CosmosCalendar::month(void)
{
  TUID d = day() ;
  d /= 100 ;
  return (int)( d % 10 ) ;
}

int N::CosmosCalendar::mday(void)
{
  return (int)( day() % 100 ) ;
}

void N::CosmosCalendar::setEAYSD(int Era,int Age,int Year,int Season,int Day)
{
  TUID T                   ;
  T  = Era     ; T *= 1000 ;
  T += Age     ; T *= 1000 ;
  T += Year    ; T *= 10   ;
  T += Season  ; T *= 100  ;
  T += Day                 ;
  T *= 86400               ;
  T += Stardate % 86400    ;
  Stardate = T             ;
}
