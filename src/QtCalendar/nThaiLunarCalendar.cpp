#include <qtcalendar.h>

/***********************************************
               Thai Lunar Calendar
 ***********************************************/

N::ThaiLunarCalendar:: ThaiLunarCalendar (void)
                     : AbstractCalendar  (    )
{
}

N::ThaiLunarCalendar::~ThaiLunarCalendar (void)
{
}

QString N::ThaiLunarCalendar::toString(QString format)
{
  return "" ;
}

void N::ThaiLunarCalendar::update(void)
{
}

void N::ThaiLunarCalendar::locate(void)
{
}

int N::ThaiLunarCalendar::year(void)
{
  return 0;
}

int N::ThaiLunarCalendar::month(void)
{
  return 0;
}

int N::ThaiLunarCalendar::mday(void)
{
  return 0;
}
