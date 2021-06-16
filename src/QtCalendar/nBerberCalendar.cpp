#include <qtcalendar.h>

/*****************************************************************************\
 *                                                                           *
 *                              Berber Calendar                              *
 *                                                                           *
\*****************************************************************************/

N::BerberCalendar:: BerberCalendar   (void)
                  : AbstractCalendar (    )
{
}

N::BerberCalendar::~BerberCalendar(void)
{
}

QString N::BerberCalendar::toString(QString format)
{
  return "" ;
}

int N::BerberCalendar::year(void)
{
  return 0;
}

int N::BerberCalendar::month(void)
{
  return 0;
}

int N::BerberCalendar::mday(void)
{
  return 0;
}
