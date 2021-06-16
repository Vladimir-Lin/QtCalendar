#include <qtcalendar.h>

/***********************************************
                Islamic Calendar
 ***********************************************/

N::IslamicCalendar:: IslamicCalendar  (void)
                   : AbstractCalendar (    )
{
}

N::IslamicCalendar::~IslamicCalendar(void)
{
}

QString N::IslamicCalendar::toString(QString format)
{
  return "" ;
}

int N::IslamicCalendar::year(void)
{
  return 0;
}

int N::IslamicCalendar::month(void)
{
  return 0;
}

int N::IslamicCalendar::mday(void)
{
  return 0;
}
