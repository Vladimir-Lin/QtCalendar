#include <qtcalendar.h>

/***********************************************
               Invariable Calendar
 ***********************************************/

N::InvariableCalendar:: InvariableCalendar (void)
                      : AbstractCalendar   (    )
{
}

N::InvariableCalendar::~InvariableCalendar (void)
{
}

QString N::InvariableCalendar::toString(QString format)
{
  return "" ;
}

int N::InvariableCalendar::year(void)
{
  return 0;
}

int N::InvariableCalendar::month(void)
{
  return 0;
}

int N::InvariableCalendar::mday(void)
{
  return 0;
}
