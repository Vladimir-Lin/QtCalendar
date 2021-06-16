#include <qtcalendar.h>

/***********************************************
                Hindu Calendar
 ***********************************************/

N::HinduCalendar:: HinduCalendar    (void)
                 : AbstractCalendar (    )
{
}

N::HinduCalendar::~HinduCalendar(void)
{
}

QString N::HinduCalendar::toString(QString format)
{
  return "" ;
}

int N::HinduCalendar::year(void)
{
  return 0;
}

int N::HinduCalendar::month(void)
{
  return 0;
}

int N::HinduCalendar::mday(void)
{
  return 0;
}
