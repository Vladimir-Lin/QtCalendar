#include <qtcalendar.h>

/*****************************************************************************\
 *                                                                           *
 *                             Byzantine Calendar                            *
 *                                                                           *
\*****************************************************************************/

N::ByzantineCalendar:: ByzantineCalendar (void)
                     : AbstractCalendar  (    )
{
}

N::ByzantineCalendar::~ByzantineCalendar(void)
{
}

QString N::ByzantineCalendar::toString(QString format)
{
  return "" ;
}

int N::ByzantineCalendar::year(void)
{
  return 0;
}

int N::ByzantineCalendar::month(void)
{
  return 0;
}

int N::ByzantineCalendar::mday(void)
{
  return 0;
}
