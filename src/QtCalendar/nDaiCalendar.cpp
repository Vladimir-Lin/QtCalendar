#include <qtcalendar.h>

/***********************************************
                   Dai Calendar
 ***********************************************/

N::DaiCalendar:: DaiCalendar      (void)
               : AbstractCalendar (    )
{
}

N::DaiCalendar::~DaiCalendar(void)
{
}

QString N::DaiCalendar::toString(QString format)
{
  return "" ;
}

void N::DaiCalendar::update(void)
{
}

void N::DaiCalendar::locate(void)
{
}

int N::DaiCalendar::year(void)
{
  return 0;
}

int N::DaiCalendar::month(void)
{
  return 0;
}

int N::DaiCalendar::mday(void)
{
  return 0;
}
