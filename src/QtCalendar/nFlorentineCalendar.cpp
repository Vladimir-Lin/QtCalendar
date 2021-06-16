#include <qtcalendar.h>

/***********************************************
                Florentine Calendar
 ***********************************************/

N::FlorentineCalendar:: FlorentineCalendar (void)
                      : AbstractCalendar   (    )
{
}

N::FlorentineCalendar::~FlorentineCalendar (void)
{
}

QString N::FlorentineCalendar::toString(QString format)
{
  return "" ;
}

int N::FlorentineCalendar::year(void)
{
  return 0;
}

int N::FlorentineCalendar::month(void)
{
  return 0;
}

int N::FlorentineCalendar::mday(void)
{
  return 0;
}
