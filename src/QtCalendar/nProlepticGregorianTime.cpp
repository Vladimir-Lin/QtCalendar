#include <qtcalendar.h>

/*****************************************************************************\
 *                                                                           *
 *                        Proleptic Geogrian DateTime                        *
 *                                                                           *
 *****************************************************************************/

#define WEEK_0 5LL

N::ProlepticGregorian:: ProlepticGregorian (void)
                      : DateTime           (    )
{
}

N::ProlepticGregorian::~ProlepticGregorian(void)
{
}

QString N::ProlepticGregorian::toString(QString format)
{
  return "" ;
}

void N::ProlepticGregorian::update(void)
{
  Time::update ()                     ;
  locate ()                           ;
  TUID ssd = StarDate::day() - WEEK_0 ;
  gmtweek = (int)( ssd % 7 )          ;
}

int N::ProlepticGregorian::year(void)
{
  return gmtyear ;
}

int N::ProlepticGregorian::month(void)
{
  return gmtmonth ;
}

int N::ProlepticGregorian::mday(void)
{
  return gmtdays ;
}

int N::ProlepticGregorian::weekday(void)
{
  return gmtweek ;
}

void N::ProlepticGregorian::locate(void)
{
  int  mm[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
}

void N::ProlepticGregorian::setYMD(int year,int month,int day)
{
  if (year>0) AD(year,month,day); else
  if (year<0) BC(year,month,day);
}

TUID N::ProlepticGregorian::AD(int year,int month,int days)
{
  return Stardate ;
}

TUID N::ProlepticGregorian::BC(int year,int month,int days)
{
  return Stardate ;
}
