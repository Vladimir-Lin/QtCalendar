#include <qtcalendar.h>

#define STB 1420092388843632000LL

/*****************************************************************************\
 *                                                                           *
 *                      StarTrek version of Stardate                         *
 *                                                                           *
\*****************************************************************************/

#define WEEK_0 5LL

N::StarTrek:: StarTrek (void)
            : DateTime (    )
{
}

N::StarTrek::~StarTrek (void)
{
}

QString N::StarTrek::toString(QString format)
{
  double  s = Stardate()                     ;
  QString S = format                         ;
  QString R                                  ;
  if (S.contains("/nn/"))                    {
    R = QObject::tr("SD:")                   ;
    S = S.replace("/nn/",R)                  ;
  }                                          ;
  if (S.contains("/nl/"))                    {
    R = QObject::tr("Stardate")              ;
    S = S.replace("/nl/",R)                  ;
  }                                          ;
  if (S.contains("%1"  ))                    {
    int F = (int)s                           ;
    R = QString("%1").arg(F,5,10,QChar('0')) ;
    S = S.replace("%1",R)                    ;
  }                                          ;
  if (S.contains("%2"  ))                    {
    int F = (int)s                           ;
    int T = (int)((s - F) * 10000)           ;
    if (s<0)                                 {
      s = -s                                 ;
      F = (int)s                             ;
      T = (int)((s - F) * 10000)             ;
    }                                        ;
    R = QString("%1").arg(T,4,10,QChar('0')) ;
    S = S.replace("%2",R)                    ;
  }                                          ;
  return S                                   ;
}

void N::StarTrek::update(void)
{
  Time::update ()                     ;
  locate ()                           ;
  TUID ssd = StarDate::day() - WEEK_0 ;
  gmtweek = (int)( ssd % 7 )          ;
}

double N::StarTrek::Stardate(void)
{
  DateTime TY                            ;
  DateTime NY                            ;
  TUID     DD                            ;
  TUID     DS                            ;
  double   s                             ;
  double   t                             ;
  int      ym = gmtyear                  ;
  ym -= 2323                             ;
  s   = ym                               ;
  TY  . setYMD(gmtyear  ,1,1)            ;
  if (StarDate::Stardate>=STB)           {
    NY  . setYMD(gmtyear+1,1,1)          ;
    DD  = NY.Stardate - TY.Stardate      ;
  } else                                 {
    NY  . setYMD(gmtyear-1,1,1)          ;
    DD  = TY.Stardate - NY.Stardate      ;
  }                                      ;
  DS  = StarDate::Stardate - TY.Stardate ;
  t   = DS                               ;
  t  /= DD                               ;
  s  += t                                ;
  s  *= 1000                             ;
  return s                               ;
}

void N::StarTrek::setStardate(double s)
{
  double   S = s / 1000             ;
  DateTime TY                       ;
  DateTime NY                       ;
  TUID     DD                       ;
  TUID     DS                       ;
  int      ym = (int)S              ;
  S  -= ym                          ;
  ym += 2323                        ;
  TY  . setYMD(ym  ,1,1)            ;
  if (s>=0)                         {
    NY  . setYMD(ym+1,1,1)          ;
    DD  = NY.Stardate - TY.Stardate ;
  } else                            {
    NY  . setYMD(ym-1,1,1)          ;
    DD  = TY.Stardate - NY.Stardate ;
  }                                 ;
  DS  = (TUID)(((double)DD)*S)      ;
  StarDate::Stardate  = TY.Stardate ;
  StarDate::Stardate += DS          ;
}
