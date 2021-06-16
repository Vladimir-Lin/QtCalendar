#include <qtcalendar.h>

/*****************************************************************************\
 *                                                                           *
 *                           Bengali Calendar                                *
 *                                                                           *
\*****************************************************************************/

N::BengaliCalendar:: BengaliCalendar (void)
                   : DateTime        (    )
{
}

N::BengaliCalendar::~BengaliCalendar (void)
{
}

QString N::BengaliCalendar::toString(QString format)
{
  return "" ;
}

int N::BengaliCalendar::season(void)
{
  return 0;
}

int N::BengaliCalendar::year(void)
{
  return gmtyear - 594 ;
}

void N::BengaliCalendar::setYMD(int year,int month,int day)
{
  DateTime :: setYMD ( year + 594 , month , day ) ;
}
