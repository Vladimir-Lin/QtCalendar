#include <qtcalendar.h>

/***********************************************
                   Pax Calendar
 ***********************************************/

N::PaxCalendar:: PaxCalendar      (void)
               : AbstractCalendar (    )
{
}

N::PaxCalendar::~PaxCalendar (void)
{
}

QString N::PaxCalendar::toString(QString format)
{
  return "" ;
}

int N::PaxCalendar::year(void)
{
  return 0;
}

int N::PaxCalendar::month(void)
{
  return 0;
}

int N::PaxCalendar::mday(void)
{
  return 0;
}
