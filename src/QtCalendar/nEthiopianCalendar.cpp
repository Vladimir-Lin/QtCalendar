#include <qtcalendar.h>

/***********************************************
                Ethiopian Calendar
 ***********************************************/

N::EthiopianCalendar:: EthiopianCalendar (void)
                     : AbstractCalendar  (    )
{
}

N::EthiopianCalendar::~EthiopianCalendar(void)
{
}

QString N::EthiopianCalendar::toString(QString format)
{
  return "" ;
}

int N::EthiopianCalendar::year(void)
{
  return 0;
}

int N::EthiopianCalendar::month(void)
{
  return 0;
}

int N::EthiopianCalendar::mday(void)
{
  return 0;
}
