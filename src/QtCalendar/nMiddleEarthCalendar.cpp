#include <qtcalendar.h>

/***********************************************
               Middle Earth Calendar
 ***********************************************/

N::MiddleEarthCalendar:: MiddleEarthCalendar (void)
                       : AbstractCalendar    (    )
{
}

N::MiddleEarthCalendar::~MiddleEarthCalendar (void)
{
}

QString N::MiddleEarthCalendar::toString(QString format)
{
  return "" ;
}

int N::MiddleEarthCalendar::year(void)
{
  return 0;
}

int N::MiddleEarthCalendar::month(void)
{
  return 0;
}

int N::MiddleEarthCalendar::mday(void)
{
  return 0;
}
