#include <qtcalendar.h>

/***********************************************
                 Coligny Calendar
 ***********************************************/

N::ColignyCalendar:: ColignyCalendar  (void)
                   : AbstractCalendar (    )
{
}

N::ColignyCalendar::~ColignyCalendar (void)
{
}

QString N::ColignyCalendar::toString(QString format)
{
  return "" ;
}

int N::ColignyCalendar::year(void)
{
  return 0;
}

int N::ColignyCalendar::month(void)
{
  return 0;
}

int N::ColignyCalendar::mday(void)
{
  return 0;
}
