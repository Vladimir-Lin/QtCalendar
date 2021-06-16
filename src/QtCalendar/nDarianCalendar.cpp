#include <qtcalendar.h>

/***********************************************
                 Darian Calendar
 ***********************************************/

N::DarianCalendar:: DarianCalendar   (void)
                  : AbstractCalendar (    )
{
}

N::DarianCalendar::~DarianCalendar (void)
{
}

QString N::DarianCalendar::toString(QString format)
{
  return "" ;
}

int N::DarianCalendar::year(void)
{
  return 0;
}

int N::DarianCalendar::month(void)
{
  return 0;
}

int N::DarianCalendar::mday(void)
{
  return 0;
}
