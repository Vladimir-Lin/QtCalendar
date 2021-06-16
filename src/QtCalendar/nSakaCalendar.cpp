#include <qtcalendar.h>

/***********************************************
                 Saka Calendar
 ***********************************************/

N::SakaCalendar:: SakaCalendar     (void)
                : AbstractCalendar (    )
{
}

N::SakaCalendar::~SakaCalendar(void)
{
}

QString N::SakaCalendar::toString(QString format)
{
  return "" ;
}

int N::SakaCalendar::year(void)
{
  return 0;
}

int N::SakaCalendar::month(void)
{
  return 0;
}

int N::SakaCalendar::mday(void)
{
  return 0;
}
