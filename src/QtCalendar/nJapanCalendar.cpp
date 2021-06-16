#include <qtcalendar.h>

/***********************************************
                Japanese Calendar
 ***********************************************/

N::JapanCalendar:: JapanCalendar (void)
                 : AbstractEra   (    )
{
}

N::JapanCalendar::~JapanCalendar (void)
{
}

QString N::JapanCalendar::toString(QString format)
{
  return "" ;
}

int N::JapanCalendar::year(void)
{
  return 0;
}

int N::JapanCalendar::month(void)
{
  return 0;
}

int N::JapanCalendar::mday(void)
{
  return 0;
}
