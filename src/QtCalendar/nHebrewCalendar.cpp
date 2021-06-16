#include <qtcalendar.h>

/***********************************************
                Hebrew Calendar
 ***********************************************/

N::HebrewCalendar:: HebrewCalendar   (void)
                  : AbstractCalendar (    )
{
}

N::HebrewCalendar::~HebrewCalendar(void)
{
}

QString N::HebrewCalendar::toString(QString format)
{
  return "" ;
}

int N::HebrewCalendar::year(void)
{
  return 0;
}

int N::HebrewCalendar::month(void)
{
  return 0;
}

int N::HebrewCalendar::mday(void)
{
  return 0;
}
