#include <qtcalendar.h>

/***********************************************
                U.K. Regnal Calendar
 ***********************************************/

N::RegnalCalendar:: RegnalCalendar (void)
                  : AbstractEra    (    )
{
}

N::RegnalCalendar::~RegnalCalendar (void)
{
}

QString N::RegnalCalendar::toString(QString format)
{
  return "" ;
}

int N::RegnalCalendar::year(void)
{
  return 0;
}

int N::RegnalCalendar::month(void)
{
  return 0;
}

int N::RegnalCalendar::mday(void)
{
  return 0;
}
