#include <qtcalendar.h>

/***********************************************
             Habb' Calendar 365/366 days
 ***********************************************/

N::HaabCalendar:: HaabCalendar (void)
                : MayaCalendar (    )
{
}

N::HaabCalendar::~HaabCalendar(void)
{
}

QString N::HaabCalendar::toString(QString format)
{
  return "" ;
}

int N::HaabCalendar::year(void)
{
  return 0;
}

int N::HaabCalendar::month(void)
{
  return 0;
}

int N::HaabCalendar::mday(void)
{
  return 0;
}
