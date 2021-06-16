#include <qtcalendar.h>

/***********************************************
              Ab Urbe Condita Calendar
 ***********************************************/

N::AbUrbeConditaCalendar:: AbUrbeConditaCalendar (void)
                         : AbstractEra           (    )
{
}

N::AbUrbeConditaCalendar::~AbUrbeConditaCalendar (void)
{
}

QString N::AbUrbeConditaCalendar::toString(QString format)
{
  return "" ;
}

int N::AbUrbeConditaCalendar::year(void)
{
  return 0;
}

int N::AbUrbeConditaCalendar::month(void)
{
  return 0;
}

int N::AbUrbeConditaCalendar::mday(void)
{
  return 0;
}
