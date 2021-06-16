#include <qtcalendar.h>

/***********************************************
                 Soviet Calendar
 ***********************************************/

N::SovietCalendar:: SovietCalendar   (void)
                  : AbstractCalendar (    )
{
}

N::SovietCalendar::~SovietCalendar (void)
{
}

QString N::SovietCalendar::toString(QString format)
{
  return "" ;
}

int N::SovietCalendar::year(void)
{
  return 0;
}

int N::SovietCalendar::month(void)
{
  return 0;
}

int N::SovietCalendar::mday(void)
{
  return 0;
}
