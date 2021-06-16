#include <qtcalendar.h>

/***********************************************
             Proleptic Julian Calendar
 ***********************************************/

N::ProlepticJulianCalendar:: ProlepticJulianCalendar (void)
                           : AbstractCalendar        (    )
{
}

N::ProlepticJulianCalendar::~ProlepticJulianCalendar (void)
{
}

QString N::ProlepticJulianCalendar::toString(QString format)
{
  return "" ;
}

int N::ProlepticJulianCalendar::year(void)
{
  return 0;
}

int N::ProlepticJulianCalendar::month(void)
{
  return 0;
}

int N::ProlepticJulianCalendar::mday(void)
{
  return 0;
}
