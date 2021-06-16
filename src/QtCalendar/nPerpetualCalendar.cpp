#include <qtcalendar.h>

/***********************************************
                Perpetual Calendar
 ***********************************************/

N::PerpetualCalendar:: PerpetualCalendar (void)
                     : AbstractCalendar  (    )
{
}

N::PerpetualCalendar::~PerpetualCalendar(void)
{
}

QString N::PerpetualCalendar::toString(QString format)
{
  return "" ;
}

int N::PerpetualCalendar::year(void)
{
  return 0;
}

int N::PerpetualCalendar::month(void)
{
  return 0;
}

int N::PerpetualCalendar::mday(void)
{
  return 0;
}
