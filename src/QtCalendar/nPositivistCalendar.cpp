#include <qtcalendar.h>

/***********************************************
                Positivist Calendar
 ***********************************************/

N::PositivistCalendar:: PositivistCalendar (void)
                      : AbstractCalendar   (    )
{
}

N::PositivistCalendar::~PositivistCalendar (void)
{
}

QString N::PositivistCalendar::toString(QString format)
{
  return "" ;
}

int N::PositivistCalendar::year(void)
{
  return 0;
}

int N::PositivistCalendar::month(void)
{
  return 0;
}

int N::PositivistCalendar::mday(void)
{
  return 0;
}
