#include <qtcalendar.h>

/***********************************************
            Common Civil Time Calendar
 ***********************************************/

N::CommonCivilTimeCalendar:: CommonCivilTimeCalendar (void)
                           : AbstractCalendar        (    )
{
}

N::CommonCivilTimeCalendar::~CommonCivilTimeCalendar (void)
{
}

QString N::CommonCivilTimeCalendar::toString(QString format)
{
  return "" ;
}

int N::CommonCivilTimeCalendar::year(void)
{
  return 0;
}

int N::CommonCivilTimeCalendar::month(void)
{
  return 0;
}

int N::CommonCivilTimeCalendar::mday(void)
{
  return 0;
}
