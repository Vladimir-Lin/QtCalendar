#include <qtcalendar.h>

/*****************************************************************************\
 *                                                                           *
 *                             Julian Calendar                               *
 *                                                                           *
 *****************************************************************************/

#define WEEK_0 5

N::JulianCalendar:: JulianCalendar (void)
                  : DateTime       (    )
{
}

N::JulianCalendar::~JulianCalendar (void)
{
}

QString N::JulianCalendar::toString(QString format)
{
  return "" ;
}

void N::JulianCalendar::update(void)
{
  Time::update ()                     ;
  locate ()                           ;
  TUID ssd = StarDate::day() - WEEK_0 ;
  gmtweek = (int)( ssd % 7 )          ;
  /*
    1582 - 1699 : Geogrian - 10 = Julian
    1700        : Geogrian 2/28 = Julian 2/18 , and Geogrian - 10 = Julian
    1700        : Geogrian 3/01 = Julian 2/19 , and Geogrian - 11 = Julian
    1701 - 1799 : Geogrian - 11 = Julian
    1800        : Geogrian 2/28 = Julian 2/17 , and Geogrian - 11 = Julian
    1800        : Geogrian 3/01 = Julian 2/18 , and Geogrian - 12 = Julian
    1801 - 1899 : Geogrian - 11 = Julian
    1900        : Geogrian 2/28 = Julian 2/16 , and Geogrian - 12 = Julian
    1900        : Geogrian 3/01 = Julian 2/17 , and Geogrian - 13 = Julian
    1901 - 2099 : Geogrian - 13 = Julian
   */
}

int N::JulianCalendar::year(void)
{
  return gmtyear ;
}

int N::JulianCalendar::month(void)
{
  return gmtmonth ;
}

int N::JulianCalendar::mday(void)
{
  return gmtdays ;
}

int N::JulianCalendar::weekday(void)
{
  return gmtweek;
}

void N::JulianCalendar::setYMD(int year,int month,int day)
{
  if (year>0) AD ( year , month , day ) ; else
  if (year<0) BC ( year , month , day ) ;
}
