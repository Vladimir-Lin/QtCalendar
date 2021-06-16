#include <qtcalendar.h>

/*****************************************************************************\
 *                                                                           *
 *                             Lunar Calendar                                *
 *                                                                           *
\*****************************************************************************/

N::LunarCalendar:: LunarCalendar    (void)
                 : AbstractCalendar (    )
{
}

N::LunarCalendar::~LunarCalendar(void)
{
}

QString N::LunarCalendar::toString(QString format)
{
  return "" ;
}

int N::LunarCalendar::year(void)
{
  return 0;
}

int N::LunarCalendar::month(void)
{
  return 0;
}

int N::LunarCalendar::mday(void)
{
  return 0;
}
