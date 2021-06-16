#include <qtcalendar.h>

/***********************************************
           Hermetic Leap Week Calendar
 ***********************************************/

N::HermeticLeapWeekCalendar:: HermeticLeapWeekCalendar (void)
                            : AbstractCalendar         (    )
{
}

N::HermeticLeapWeekCalendar::~HermeticLeapWeekCalendar (void)
{
}

QString N::HermeticLeapWeekCalendar::toString(QString format)
{
  return "" ;
}

int N::HermeticLeapWeekCalendar::year(void)
{
  return 0;
}

int N::HermeticLeapWeekCalendar::month(void)
{
  return 0;
}

int N::HermeticLeapWeekCalendar::mday(void)
{
  return 0;
}
