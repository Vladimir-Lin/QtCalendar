#include <qtcalendar.h>

/***********************************************
                 Attic Calendar
 ***********************************************/

N::AtticCalendar:: AtticCalendar    (void)
                 : AbstractCalendar (    )
{
}

N::AtticCalendar::~AtticCalendar (void)
{
}

QString N::AtticCalendar::toString(QString format)
{
  return "" ;
}

int N::AtticCalendar::year(void)
{
  return 0;
}

int N::AtticCalendar::month(void)
{
  return 0;
}

int N::AtticCalendar::mday(void)
{
  return 0;
}
