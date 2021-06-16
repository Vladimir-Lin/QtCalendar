#include <qtcalendar.h>

/***********************************************
                 Egyptian Calendar
 ***********************************************/

N::EgyptianCalendar:: EgyptianCalendar (void)
                    : AbstractCalendar (    )
{
}

N::EgyptianCalendar::~EgyptianCalendar (void)
{
}

QString N::EgyptianCalendar::toString(QString format)
{
  return "" ;
}

int N::EgyptianCalendar::year(void)
{
  return 0;
}

int N::EgyptianCalendar::month(void)
{
  return 0;
}

int N::EgyptianCalendar::mday(void)
{
  return 0;
}
