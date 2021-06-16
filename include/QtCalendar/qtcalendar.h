/****************************************************************************
 *
 * Copyright (C) 2015 Neutrino International Inc.
 *
 * Author : Brian Lin <lin.foxman@gmail.com>, Skype: wolfram_lin
 *
 ****************************************************************************/

#ifndef QT_CALENDAR_H
#define QT_CALENDAR_H

#include <QtCore>
#include <Essentials>

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#    if defined(QT_BUILD_QTCALENDAR_LIB)
#      define Q_CALENDAR_EXPORT Q_DECL_EXPORT
#    else
#      define Q_CALENDAR_EXPORT Q_DECL_IMPORT
#    endif
#else
#    define Q_CALENDAR_EXPORT
#endif

namespace N                                         {

class Q_CALENDAR_EXPORT AbstractCalendar            ;
class Q_CALENDAR_EXPORT AbstractEra                 ;
class Q_CALENDAR_EXPORT RadiometricTime             ;
class Q_CALENDAR_EXPORT IsoDateTime                 ;
class Q_CALENDAR_EXPORT StarTrek                    ;

class Q_CALENDAR_EXPORT ProlepticGregorian          ;
class Q_CALENDAR_EXPORT JulianCalendar              ;
class Q_CALENDAR_EXPORT HoloceneCalendar            ;
class Q_CALENDAR_EXPORT BuddistCalendar             ;
class Q_CALENDAR_EXPORT TaiwanCalendar              ;
class Q_CALENDAR_EXPORT JucheCalendar               ;
class Q_CALENDAR_EXPORT LunarCalendar               ;
class Q_CALENDAR_EXPORT CosmosCalendar              ;
class Q_CALENDAR_EXPORT WorldCalendar               ;
class Q_CALENDAR_EXPORT BahaiCalendar               ;
class Q_CALENDAR_EXPORT ArmenianCalendar            ;
class Q_CALENDAR_EXPORT ZoroastrianCalendar         ;
class Q_CALENDAR_EXPORT BengaliCalendar             ;
class Q_CALENDAR_EXPORT JapanCalendar               ;
class Q_CALENDAR_EXPORT BerberCalendar              ;
class Q_CALENDAR_EXPORT BurmeseCalendar             ;
class Q_CALENDAR_EXPORT ByzantineCalendar           ;
class Q_CALENDAR_EXPORT CopticCalendar              ;
class Q_CALENDAR_EXPORT EthiopianCalendar           ;
class Q_CALENDAR_EXPORT HebrewCalendar              ;
class Q_CALENDAR_EXPORT HinduCalendar               ;
class Q_CALENDAR_EXPORT PersianCalendar             ;
class Q_CALENDAR_EXPORT IslamicCalendar             ;
class Q_CALENDAR_EXPORT ThaiCalendar                ;
class Q_CALENDAR_EXPORT AssyrianCalendar            ;
class Q_CALENDAR_EXPORT PerpetualCalendar           ;
class Q_CALENDAR_EXPORT AkanCalendar                ;
class Q_CALENDAR_EXPORT DiscordianCalendar          ;
class Q_CALENDAR_EXPORT IgboCalendar                ;
class Q_CALENDAR_EXPORT GaelicCalendar              ;
class Q_CALENDAR_EXPORT JainCalendar                ;
class Q_CALENDAR_EXPORT IndiaCalendar               ;
class Q_CALENDAR_EXPORT SakaCalendar                ;
class Q_CALENDAR_EXPORT JavaneseCalendar            ;
class Q_CALENDAR_EXPORT KurdishCalendar             ;
class Q_CALENDAR_EXPORT LithuanianCalendar          ;
class Q_CALENDAR_EXPORT MalayalamCalendar           ;
class Q_CALENDAR_EXPORT NanakshahiCalendar          ;
class Q_CALENDAR_EXPORT NepaliCalendar              ;
class Q_CALENDAR_EXPORT NepalSambatCalendar         ;
class Q_CALENDAR_EXPORT RevisedJulianCalendar       ;
class Q_CALENDAR_EXPORT RomanianCalendar            ;
class Q_CALENDAR_EXPORT RunicCalendar               ;
class Q_CALENDAR_EXPORT TamilCalendar               ;
class Q_CALENDAR_EXPORT ThaiLunarCalendar           ;
class Q_CALENDAR_EXPORT TibetanCalendar             ;
class Q_CALENDAR_EXPORT XhosaCalendar               ;
class Q_CALENDAR_EXPORT YorubaCalendar              ;
class Q_CALENDAR_EXPORT AtticCalendar               ;
class Q_CALENDAR_EXPORT AztecCalendar               ;
class Q_CALENDAR_EXPORT BabylonianCalendar          ;
class Q_CALENDAR_EXPORT BulgarCalendar              ;
class Q_CALENDAR_EXPORT ColignyCalendar             ;
class Q_CALENDAR_EXPORT EgyptianCalendar            ;
class Q_CALENDAR_EXPORT EnochCalendar               ;
class Q_CALENDAR_EXPORT FlorentineCalendar          ;
class Q_CALENDAR_EXPORT FrenchRepublicanCalendar    ;
class Q_CALENDAR_EXPORT HellenicCalendar            ;
class Q_CALENDAR_EXPORT OldIcelandicCalendar        ;
class Q_CALENDAR_EXPORT AncientMacedonianCalendar   ;
class Q_CALENDAR_EXPORT MesoamericanCalendar        ;
class Q_CALENDAR_EXPORT PentecontadCalendar         ;
class Q_CALENDAR_EXPORT PositivistCalendar          ;
class Q_CALENDAR_EXPORT RapaNuiCalendar             ;
class Q_CALENDAR_EXPORT RomanCalendar               ;
class Q_CALENDAR_EXPORT RumiCalendar                ;
class Q_CALENDAR_EXPORT SovietCalendar              ;
class Q_CALENDAR_EXPORT SwedishCalendar             ;
class Q_CALENDAR_EXPORT CelticCalendar              ;
class Q_CALENDAR_EXPORT IncaCalendar                ;
class Q_CALENDAR_EXPORT TurkmenCalendar             ;
class Q_CALENDAR_EXPORT ProlepticJulianCalendar     ;
class Q_CALENDAR_EXPORT DreamspellCalendar          ;
class Q_CALENDAR_EXPORT InvariableCalendar          ;
class Q_CALENDAR_EXPORT TranquilityCalendar         ;
class Q_CALENDAR_EXPORT BalinesePawukonCalendar     ;
class Q_CALENDAR_EXPORT BalineseSakaCalendar        ;
class Q_CALENDAR_EXPORT PaxCalendar                 ;
class Q_CALENDAR_EXPORT CommonCivilTimeCalendar     ;
class Q_CALENDAR_EXPORT SymmetryCalendar            ;
class Q_CALENDAR_EXPORT HankeHenryPermanentCalendar ;
class Q_CALENDAR_EXPORT HermeticLeapWeekCalendar    ;
class Q_CALENDAR_EXPORT DarianCalendar              ;
class Q_CALENDAR_EXPORT MiddleEarthCalendar         ;
class Q_CALENDAR_EXPORT GalaxyLegendCalendar        ;
class Q_CALENDAR_EXPORT GalaxyRepublicCalendar      ;
class Q_CALENDAR_EXPORT GalaxyEmperorCalendar       ;
class Q_CALENDAR_EXPORT NewGalaxyEmperorCalendar    ;
class Q_CALENDAR_EXPORT KoreanCalendar              ;
class Q_CALENDAR_EXPORT RegnalCalendar              ;
class Q_CALENDAR_EXPORT AbUrbeConditaCalendar       ;
class Q_CALENDAR_EXPORT MayaCalendar                ;
class Q_CALENDAR_EXPORT TzolkinCalendar             ;
class Q_CALENDAR_EXPORT HaabCalendar                ;
class Q_CALENDAR_EXPORT MayaLunarCalendar           ;
class Q_CALENDAR_EXPORT MayaVenusCalendar           ;
class Q_CALENDAR_EXPORT ConfuciusCalendar           ;
class Q_CALENDAR_EXPORT HuangdiCalendar             ;
class Q_CALENDAR_EXPORT DaoCalendar                 ;
class Q_CALENDAR_EXPORT DaiCalendar                 ;
class Q_CALENDAR_EXPORT GermanicCalendar            ;
class Q_CALENDAR_EXPORT BuddhistCalendar            ;
class Q_CALENDAR_EXPORT JapanCalendarEra            ;
class Q_CALENDAR_EXPORT KoreanCalendarEra           ;
class Q_CALENDAR_EXPORT RegnalCalendarEra           ;
class Q_CALENDAR_EXPORT AbUrbeConditaCalendarEra    ;

class Q_CALENDAR_EXPORT AbstractCalendar : public Time
{ // Abstract calendar unification system
  public:

    explicit AbstractCalendar (void) ;
    virtual ~AbstractCalendar (void) ;

    virtual int  year         (void) = 0 ;
    virtual int  month        (void) = 0 ;
    virtual int  mday         (void) = 0 ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT AbstractEra : public Time
{ // Abstract Calendar Era , mostly for dynastic calendar era
  public:

    explicit  AbstractEra (void) ;
    virtual ~ AbstractEra (void) ;

    virtual int  year     (void) = 0 ;
    virtual int  month    (void) = 0 ;
    virtual int  mday     (void) = 0 ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT RadiometricTime : public Time
{ // Abstract class Q_CALENDAR_EXPORT for radiometric dating
  public:

    explicit  RadiometricTime  (void);
    virtual  ~RadiometricTime  (void);

    virtual int  method        (void) const = 0;
    virtual void concentration (double radioactive,double stable) = 0;

  protected:

  private:

};

class Q_CALENDAR_EXPORT IsoDateTime : public DateTime
{ // ISO 8601:2000 Date Time Formats , Testing
  public:

    explicit IsoDateTime     (void) ;
    virtual ~IsoDateTime     (void) ;

    virtual int     type     (void) const { return Calendars::ISO ; }
    virtual QString toString (QString format = "yyyy/MM/dd hh:mm:ss") ;

    virtual void    update   (void) ;

    int             year     (void) ;
    int             month    (void) ;
    int             mday     (void) ;
    int             weekday  (void) ;

    virtual void    setYMD   (int year,int month,int day) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT StarTrek : public DateTime
{ // Testing
  public:

    explicit        StarTrek    (void) ;
    virtual        ~StarTrek    (void) ;

    virtual int     type        (void) const { return Calendars::StarTrek ; }
    virtual QString toString    (QString format = "/nn/ %1.%2") ;

    virtual void    update      (void) ;

    double          Stardate    (void) ;
    void            setStardate (double stardate) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT ProlepticGregorian : public DateTime
{ // Testing
  public:

    explicit ProlepticGregorian (void);
    virtual ~ProlepticGregorian (void);

    virtual int     type        (void) const { return Calendars::Proleptic ; }
    virtual QString toString    (QString format = "") ;

    virtual void    update      (void);
    virtual void    locate      (void);
    virtual int     year        (void);
    virtual int     month       (void);
    virtual int     mday        (void);
    virtual int     weekday     (void);

    virtual void    setYMD      (int year,int month,int day);
    virtual TUID    AD          (int year,int month,int days);
    virtual TUID    BC          (int year,int month,int days);

  protected:

  private:

};

class Q_CALENDAR_EXPORT JulianCalendar : public DateTime
{ // Testing
  public:

    explicit JulianCalendar  (void) ;
    virtual ~JulianCalendar  (void) ;

    virtual int     type     (void) const { return Calendars::Julian ; }
    virtual QString toString (QString format = "") ;

    virtual void    update   (void) ;

    int             year     (void) ;
    int             month    (void) ;
    int             mday     (void) ;
    int             weekday  (void) ;

    virtual void    setYMD   (int year,int month,int day) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT GermanicCalendar : public JulianCalendar
{
  public:

    explicit GermanicCalendar (void) ;
    virtual ~GermanicCalendar (void) ;

    virtual int     type      (void) const { return Calendars::Germanic ; }
    virtual QString toString  (QString format = "") ;

    virtual void    update    (void) ;

    int             year      (void) ;
    int             month     (void) ;
    int             mday      (void) ;
    int             weekday   (void) ;

    virtual void    setYMD    (int year,int month,int day) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT HoloceneCalendar : public DateTime
{ // Testing
  public:

    explicit HoloceneCalendar (void);
    virtual ~HoloceneCalendar (void);

    virtual int     type      (void) const { return Calendars::Holocene ; }
    virtual QString toString  (QString format = "/nn/ yyyyy/MM/dd hh:mm:ss") ;

    virtual int     year      (void) ;
    virtual void    setYMD    (int year,int month,int day) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT BuddhistCalendar : public DateTime
{ // Testing
  public:

    explicit BuddhistCalendar (void) ;
    virtual ~BuddhistCalendar (void) ;

    virtual int     type      (void) const { return Calendars::Buddhist ; }
    virtual QString toString  (QString format = "/nn/ yyyy/MM/dd hh:mm:ss") ;

    virtual int     year      (void) ;
    virtual void    setYMD    (int year,int month,int day) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT TaiwanCalendar : public DateTime
{ // Testing
  public:

    explicit TaiwanCalendar  (void) ;
    virtual ~TaiwanCalendar  (void) ;

    virtual int     type     (void) const { return Calendars::Taiwanese ; }
    virtual QString toString (QString format = "/nn/ yyy/MM/dd hh:mm:ss") ;

    virtual int     year     (void) ;
    virtual void    setYMD   (int year,int month,int day) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT JucheCalendar : public DateTime
{ // Testing
  public:

    explicit JucheCalendar   (void) ;
    virtual ~JucheCalendar   (void) ;

    virtual int     type     (void) const { return Calendars::Juche ; }
    virtual QString toString (QString format = "/nn/ yyy/MM/dd hh:mm:ss") ;

    virtual int     year     (void) ;
    virtual void    setYMD   (int year,int month,int day) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT BengaliCalendar : public DateTime
{ // Trying to understand Bengli calendar and Revised Bengali calendar
  public:

    explicit BengaliCalendar (void) ;
    virtual ~BengaliCalendar (void) ;

    virtual int     type     (void) const { return Calendars::Bengali ; }
    virtual QString toString (QString format = "") ;

    virtual int     season   (void) ;
    virtual int     year     (void) ;
    virtual void    setYMD   (int year,int month,int day) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT LunarCalendar : public AbstractCalendar
{
  public:

    explicit LunarCalendar   (void) ;
    virtual ~LunarCalendar   (void) ;

    virtual int     type     (void) const { return Calendars::Lunar ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT CosmosCalendar : public AbstractCalendar
{
  public:

    explicit CosmosCalendar  (void) ;
    virtual ~CosmosCalendar  (void) ;

    virtual int     type     (void) const { return Calendars::Cosmos ; }
    virtual QString toString (QString format = "%1.%2.%3.%4.%5.%6") ;

    virtual int     era      (void) ;
    virtual int     age      (void) ;
    virtual int     year     (void) ;
    virtual int     season   (void) ;
    virtual int     sday     (void) ;
            int     month    (void) ;
            int     mday     (void) ;

    void            setEAYSD (int Era,int Age,int Year,int Season,int Day) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT WorldCalendar : public AbstractCalendar
{ // Testing
  public:

    explicit WorldCalendar   (void) ;
    virtual ~WorldCalendar   (void) ;

    virtual int     type     (void) const { return Calendars::World ; }
    virtual QString toString (QString format = "/nn/ yyyy/MM/dd hh:mm:ss") ;

    virtual void    update   (void) ;
    virtual void    locate   (void) ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;
    virtual int     weekday  (void) ;

  protected:

    int wyear  ;
    int wmonth ;
    int wdays  ;
    int dweek  ;

  private:

};

class Q_CALENDAR_EXPORT BahaiCalendar : public AbstractCalendar
{
  public:

    explicit BahaiCalendar   (void) ;
    virtual ~BahaiCalendar   (void) ;

    virtual int     type     (void) const { return Calendars::Bahai ; }
    virtual QString toString (QString format = "") ;

    virtual void    update   (void) ;
    virtual void    locate   (void) ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;
    virtual int     weekday  (void) ;

  protected:

    int wyear  ;
    int wmonth ;
    int wdays  ;
    int dweek  ;

  private:

};

class Q_CALENDAR_EXPORT ArmenianCalendar : public AbstractCalendar
{
  public:

    explicit ArmenianCalendar (void) ;
    virtual ~ArmenianCalendar (void) ;

    virtual int     type      (void) const { return Calendars::Armenian ; }
    virtual QString toString  (QString format = "") ;

    virtual void    update    (void) ;
    virtual void    locate    (void) ;

    virtual int     year      (void) ;
    virtual int     month     (void) ;
    virtual int     mday      (void) ;
    virtual int     weekday   (void) ;

  protected:

    int wyear  ;
    int wmonth ;
    int wdays  ;
    int dweek  ;

  private:

};

class Q_CALENDAR_EXPORT ZoroastrianCalendar : public AbstractCalendar
{
  public:

    explicit ZoroastrianCalendar (void) ;
    virtual ~ZoroastrianCalendar (void) ;

    virtual int     type         (void) const { return Calendars::Zoroastrian ; }
    virtual QString toString     (QString format = "") ;

    virtual void    update       (void) ;
    virtual void    locate       (void) ;

    virtual int     year         (void) ;
    virtual int     month        (void) ;
    virtual int     mday         (void) ;
    virtual int     weekday      (void) ;

  protected:

    int wyear  ;
    int wmonth ;
    int wdays  ;
    int dweek  ;

  private:

};

class Q_CALENDAR_EXPORT BerberCalendar : public AbstractCalendar
{
  public:

    explicit BerberCalendar  (void) ;
    virtual ~BerberCalendar  (void) ;

    virtual int     type     (void) const { return Calendars::Berber ; }
    virtual QString toString (QString format = "") ;

    virtual int  year        (void) ;
    virtual int  month       (void) ;
    virtual int  mday        (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT BurmeseCalendar : public AbstractCalendar
{
  public:

    explicit BurmeseCalendar (void) ;
    virtual ~BurmeseCalendar (void) ;

    virtual int     type     (void) const { return Calendars::Burmese ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT ByzantineCalendar : public AbstractCalendar
{
  public:

    explicit ByzantineCalendar (void) ;
    virtual ~ByzantineCalendar (void) ;

    virtual int     type       (void) const { return Calendars::Byzantine ; }
    virtual QString toString   (QString format = "") ;

    virtual int     year       (void) ;
    virtual int     month      (void) ;
    virtual int     mday       (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT CopticCalendar : public AbstractCalendar
{
  public:

    explicit CopticCalendar  (void) ;
    virtual ~CopticCalendar  (void) ;

    virtual int     type     (void) const { return Calendars::Coptic ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT EthiopianCalendar : public AbstractCalendar
{
  public:

    explicit EthiopianCalendar (void) ;
    virtual ~EthiopianCalendar (void) ;

    virtual int     type       (void) const { return Calendars::Ethiopian ; }
    virtual QString toString   (QString format = "") ;

    virtual int     year       (void) ;
    virtual int     month      (void) ;
    virtual int     mday       (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT HebrewCalendar : public AbstractCalendar
{
  public:

    explicit HebrewCalendar  (void) ;
    virtual ~HebrewCalendar  (void) ;

    virtual int     type     (void) const { return Calendars::Hebrew ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT HinduCalendar : public AbstractCalendar
{
  public:

    explicit HinduCalendar   (void) ;
    virtual ~HinduCalendar   (void) ;

    virtual int     type     (void) const { return Calendars::Hindu ; }
    virtual QString toString (QString format = "") ;
    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT PersianCalendar : public AbstractCalendar
{
  public:

    explicit PersianCalendar (void) ;
    virtual ~PersianCalendar (void) ;

    virtual int     type     (void) const { return Calendars::Persian ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT IslamicCalendar : public AbstractCalendar
{
  public:

    explicit IslamicCalendar (void) ;
    virtual ~IslamicCalendar (void) ;

    virtual int     type     (void) const { return Calendars::Islamic ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT ThaiCalendar : public AbstractCalendar
{
  public:

    explicit ThaiCalendar    (void) ;
    virtual ~ThaiCalendar    (void) ;

    virtual int     type     (void) const { return Calendars::Thai ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT AssyrianCalendar : public AbstractCalendar
{
  public:

    explicit AssyrianCalendar (void) ;
    virtual ~AssyrianCalendar (void) ;

    virtual int     type      (void) const { return Calendars::Assyrian ; }
    virtual QString toString  (QString format = "") ;

    virtual int     year      (void) ;
    virtual int     month     (void) ;
    virtual int     mday      (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT PerpetualCalendar : public AbstractCalendar
{
  public:

    explicit PerpetualCalendar (void) ;
    virtual ~PerpetualCalendar (void) ;

    virtual int     type       (void) const { return Calendars::Perpetual ; }
    virtual QString toString   (QString format = "") ;

    virtual int     year       (void) ;
    virtual int     month      (void) ;
    virtual int     mday       (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT AkanCalendar : public AbstractCalendar
{
  public:

    explicit AkanCalendar    (void) ;
    virtual ~AkanCalendar    (void) ;

    virtual int     type     (void) const { return Calendars::Akan ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT DiscordianCalendar : public AbstractCalendar
{
  public:

    explicit DiscordianCalendar (void) ;
    virtual ~DiscordianCalendar (void) ;

    virtual int     type        (void) const { return Calendars::Discordian ; }
    virtual QString toString    (QString format = "") ;

    virtual int     year        (void) ;
    virtual int     month       (void) ;
    virtual int     mday        (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT IgboCalendar : public AbstractCalendar
{
  public:

    explicit IgboCalendar    (void) ;
    virtual ~IgboCalendar    (void) ;

    virtual int     type     (void) const { return Calendars::Igbo ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT GaelicCalendar : public AbstractCalendar
{
  public:

    explicit GaelicCalendar  (void) ;
    virtual ~GaelicCalendar  (void) ;

    virtual int     type     (void) const { return Calendars::Gaelic ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT JainCalendar : public AbstractCalendar
{
  public:

    explicit JainCalendar    (void) ;
    virtual ~JainCalendar    (void) ;

    virtual int     type     (void) const { return Calendars::Jain ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT IndiaCalendar : public AbstractCalendar
{
  public:

    explicit IndiaCalendar   (void) ;
    virtual ~IndiaCalendar   (void) ;

    virtual int     type     (void) const { return Calendars::Saka ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT SakaCalendar : public AbstractCalendar
{
  public:

    explicit SakaCalendar    (void) ;
    virtual ~SakaCalendar    (void) ;

    virtual int     type     (void) const { return Calendars::Saka ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT JavaneseCalendar : public AbstractCalendar
{
  public:

    explicit JavaneseCalendar (void) ;
    virtual ~JavaneseCalendar (void) ;

    virtual int     type      (void) const { return Calendars::Javanese ; }
    virtual QString toString  (QString format = "") ;

    virtual int     year      (void) ;
    virtual int     month     (void) ;
    virtual int     mday      (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT KurdishCalendar : public AbstractCalendar
{
  public:

    explicit KurdishCalendar (void) ;
    virtual ~KurdishCalendar (void) ;

    virtual int     type     (void) const { return Calendars::Kurdish ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT LithuanianCalendar : public AbstractCalendar
{
  public:

    explicit LithuanianCalendar (void) ;
    virtual ~LithuanianCalendar (void) ;

    virtual int     type        (void) const { return Calendars::Lithuanian ; }
    virtual QString toString    (QString format = "") ;

    virtual int     year        (void) ;
    virtual int     month       (void) ;
    virtual int     mday        (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT MalayalamCalendar : public AbstractCalendar
{
  public:

    explicit MalayalamCalendar (void) ;
    virtual ~MalayalamCalendar (void) ;

    virtual int     type       (void) const { return Calendars::Malayalam ; }
    virtual QString toString   (QString format = "") ;

    virtual int     year       (void) ;
    virtual int     month      (void) ;
    virtual int     mday       (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT NanakshahiCalendar : public AbstractCalendar
{
  public:

    explicit NanakshahiCalendar (void) ;
    virtual ~NanakshahiCalendar (void) ;

    virtual int     type        (void) const { return Calendars::Nanakshahi ; }
    virtual QString toString    (QString format = "") ;

    virtual int     year        (void) ;
    virtual int     month       (void) ;
    virtual int     mday        (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT NepaliCalendar : public AbstractCalendar
{
  public:

    explicit NepaliCalendar  (void) ;
    virtual ~NepaliCalendar  (void) ;

    virtual int     type     (void) const { return Calendars::Nepali ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT NepalSambatCalendar : public AbstractCalendar
{
  public:

    explicit NepalSambatCalendar (void) ;
    virtual ~NepalSambatCalendar (void) ;

    virtual int     type         (void) const { return Calendars::NepalSambat ; }
    virtual QString toString     (QString format = "") ;

    virtual int     year         (void) ;
    virtual int     month        (void) ;
    virtual int     mday         (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT RevisedJulianCalendar : public AbstractCalendar
{
  public:

    explicit RevisedJulianCalendar (void) ;
    virtual ~RevisedJulianCalendar (void) ;

    virtual int     type           (void) const { return Calendars::RevisedJulian ; }
    virtual QString toString       (QString format = "") ;

    virtual int     year           (void) ;
    virtual int     month          (void) ;
    virtual int     mday           (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT RomanianCalendar : public AbstractCalendar
{
  public:

    explicit RomanianCalendar (void) ;
    virtual ~RomanianCalendar (void) ;

    virtual int     type      (void) const { return Calendars::Romanian ; }
    virtual QString toString  (QString format = "") ;

    virtual int     year      (void) ;
    virtual int     month     (void) ;
    virtual int     mday      (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT RunicCalendar : public AbstractCalendar
{
  public:

    explicit RunicCalendar   (void) ;
    virtual ~RunicCalendar   (void) ;

    virtual int     type     (void) const { return Calendars::Runic ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT TamilCalendar : public AbstractCalendar
{
  public:

    explicit TamilCalendar   (void) ;
    virtual ~TamilCalendar   (void) ;

    virtual int     type     (void) const { return Calendars::Tamil ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT ThaiLunarCalendar : public AbstractCalendar
{ // Testing
  public:

    explicit ThaiLunarCalendar (void) ;
    virtual ~ThaiLunarCalendar (void) ;

    virtual int     type       (void) const { return Calendars::ThaiLunar ; }
    virtual QString toString   (QString format = "") ;

    virtual void    update     (void) ;
    virtual void    locate     (void) ;

    virtual int     year       (void) ;
    virtual int     month      (void) ;
    virtual int     mday       (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT TibetanCalendar : public AbstractCalendar
{
  public:

    explicit TibetanCalendar (void) ;
    virtual ~TibetanCalendar (void) ;

    virtual int     type     (void) const { return Calendars::Tibetan ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT XhosaCalendar : public AbstractCalendar
{
  public:

    explicit XhosaCalendar   (void) ;
    virtual ~XhosaCalendar   (void) ;

    virtual int     type     (void) const { return Calendars::Xhosa ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT YorubaCalendar : public AbstractCalendar
{
  public:

    explicit YorubaCalendar  (void) ;
    virtual ~YorubaCalendar  (void) ;

    virtual int     type     (void) const { return Calendars::Yoruba ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT AtticCalendar : public AbstractCalendar
{
  public:

    explicit AtticCalendar   (void) ;
    virtual ~AtticCalendar   (void) ;

    virtual int     type     (void) const { return Calendars::Attic ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT AztecCalendar : public AbstractCalendar
{
  public:

    explicit AztecCalendar   (void) ;
    virtual ~AztecCalendar   (void) ;

    virtual int     type     (void) const { return Calendars::Aztec ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT BabylonianCalendar : public AbstractCalendar
{
  public:

    explicit BabylonianCalendar (void) ;
    virtual ~BabylonianCalendar (void) ;

    virtual int     type        (void) const { return Calendars::Babylonian ; }
    virtual QString toString    (QString format = "") ;

    virtual int     year        (void) ;
    virtual int     month       (void) ;
    virtual int     mday        (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT BulgarCalendar : public AbstractCalendar
{
  public:

    explicit BulgarCalendar  (void) ;
    virtual ~BulgarCalendar  (void) ;

    virtual int     type     (void) const { return Calendars::Bulgar ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT ColignyCalendar : public AbstractCalendar
{
  public:

    explicit ColignyCalendar (void) ;
    virtual ~ColignyCalendar (void) ;

    virtual int     type     (void) const { return Calendars::Coligny ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT EgyptianCalendar : public AbstractCalendar
{
  public:

    explicit EgyptianCalendar (void) ;
    virtual ~EgyptianCalendar (void) ;

    virtual int     type      (void) const { return Calendars::Egyptian ; }
    virtual QString toString  (QString format = "") ;

    virtual int     year      (void) ;
    virtual int     month     (void) ;
    virtual int     mday      (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT EnochCalendar : public AbstractCalendar
{
  public:

    explicit EnochCalendar   (void) ;
    virtual ~EnochCalendar   (void) ;

    virtual int     type     (void) const { return Calendars::Enoch ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT FlorentineCalendar : public AbstractCalendar
{
  public:

    explicit FlorentineCalendar (void) ;
    virtual ~FlorentineCalendar (void) ;

    virtual int     type        (void) const { return Calendars::Florentine ; }
    virtual QString toString    (QString format = "") ;

    virtual int     year        (void) ;
    virtual int     month       (void) ;
    virtual int     mday        (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT FrenchRepublicanCalendar : public AbstractCalendar
{
  public:

    explicit FrenchRepublicanCalendar (void) ;
    virtual ~FrenchRepublicanCalendar (void) ;

    virtual int     type              (void) const { return Calendars::FrenchRepublican ; }
    virtual QString toString          (QString format = "") ;

    virtual int     year              (void) ;
    virtual int     month             (void) ;
    virtual int     mday              (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT HellenicCalendar : public AbstractCalendar
{
  public:

    explicit HellenicCalendar (void) ;
    virtual ~HellenicCalendar (void) ;

    virtual int     type      (void) const { return Calendars::Hellenic ; }
    virtual QString toString  (QString format = "") ;

    virtual int     year      (void) ;
    virtual int     month     (void) ;
    virtual int     mday      (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT OldIcelandicCalendar : public AbstractCalendar
{
  public:

    explicit OldIcelandicCalendar (void) ;
    virtual ~OldIcelandicCalendar (void) ;

    virtual int     type          (void) const { return Calendars::OldIcelandic ; }
    virtual QString toString      (QString format = "") ;

    virtual int     year          (void) ;
    virtual int     month         (void) ;
    virtual int     mday          (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT AncientMacedonianCalendar : public AbstractCalendar
{
  public:

    explicit AncientMacedonianCalendar (void) ;
    virtual ~AncientMacedonianCalendar (void) ;

    virtual int     type               (void) const { return Calendars::AncientMacedonian ; }
    virtual QString toString           (QString format = "") ;

    virtual int     year               (void) ;
    virtual int     month              (void) ;
    virtual int     mday               (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT MesoamericanCalendar : public AbstractCalendar
{
  public:

    explicit MesoamericanCalendar (void) ;
    virtual ~MesoamericanCalendar (void) ;

    virtual int     type          (void) const { return Calendars::Mesoamerican ; }
    virtual QString toString      (QString format = "") ;

    virtual int     year          (void) ;
    virtual int     month         (void) ;
    virtual int     mday          (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT PentecontadCalendar : public AbstractCalendar
{
  public:

    explicit PentecontadCalendar (void) ;
    virtual ~PentecontadCalendar (void) ;

    virtual int     type         (void) const { return Calendars::Pentecontad ; }
    virtual QString toString     (QString format = "") ;

    virtual int     year         (void) ;
    virtual int     month        (void) ;
    virtual int     mday         (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT PositivistCalendar : public AbstractCalendar
{
  public:

    explicit PositivistCalendar (void) ;
    virtual ~PositivistCalendar (void) ;

    virtual int     type        (void) const { return Calendars::Positivist ; }
    virtual QString toString    (QString format = "") ;

    virtual int     year        (void) ;
    virtual int     month       (void) ;
    virtual int     mday        (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT RapaNuiCalendar : public AbstractCalendar
{
  public:

    explicit RapaNuiCalendar (void) ;
    virtual ~RapaNuiCalendar (void) ;

    virtual int     type     (void) const { return Calendars::RapaNui ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT RomanCalendar : public AbstractCalendar
{
  public:

    explicit RomanCalendar   (void) ;
    virtual ~RomanCalendar   (void) ;

    virtual int     type     (void) const { return Calendars::Roman ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT RumiCalendar : public AbstractCalendar
{
  public:

    explicit RumiCalendar    (void) ;
    virtual ~RumiCalendar    (void) ;

    virtual int     type     (void) const { return Calendars::Rumi ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT SovietCalendar : public AbstractCalendar
{
  public:

    explicit SovietCalendar  (void) ;
    virtual ~SovietCalendar  (void) ;

    virtual int     type     (void) const { return Calendars::Soviet ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT SwedishCalendar : public AbstractCalendar
{
  public:

    explicit SwedishCalendar (void) ;
    virtual ~SwedishCalendar (void) ;

    virtual int     type     (void) const { return Calendars::Swedish ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT CelticCalendar : public AbstractCalendar
{
  public:

    explicit CelticCalendar  (void) ;
    virtual ~CelticCalendar  (void) ;

    virtual int     type     (void) const { return Calendars::Celtic ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT IncaCalendar : public AbstractCalendar
{
  public:

    explicit IncaCalendar    (void) ;
    virtual ~IncaCalendar    (void) ;

    virtual int     type     (void) const { return Calendars::Inca ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT TurkmenCalendar : public AbstractCalendar
{
  public:

    explicit TurkmenCalendar (void) ;
    virtual ~TurkmenCalendar (void) ;

    virtual int     type     (void) const { return Calendars::Turkmen ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT ProlepticJulianCalendar : public AbstractCalendar
{
  public:

    explicit ProlepticJulianCalendar (void) ;
    virtual ~ProlepticJulianCalendar (void) ;

    virtual int     type             (void) const { return Calendars::ProlepticJulian ; }
    virtual QString toString         (QString format = "") ;

    virtual int     year             (void) ;
    virtual int     month            (void) ;
    virtual int     mday             (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT DreamspellCalendar : public AbstractCalendar
{
  public:

    explicit DreamspellCalendar (void) ;
    virtual ~DreamspellCalendar (void) ;

    virtual int     type        (void) const { return Calendars::Dreamspell ; }
    virtual QString toString    (QString format = "") ;

    virtual int     year        (void) ;
    virtual int     month       (void) ;
    virtual int     mday        (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT InvariableCalendar : public AbstractCalendar
{
  public:

    explicit InvariableCalendar (void) ;
    virtual ~InvariableCalendar (void) ;

    virtual int     type        (void) const { return Calendars::Invariable ; }
    virtual QString toString    (QString format = "") ;

    virtual int     year        (void) ;
    virtual int     month       (void) ;
    virtual int     mday        (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT TranquilityCalendar : public AbstractCalendar
{
  public:

    explicit TranquilityCalendar (void) ;
    virtual ~TranquilityCalendar (void) ;

    virtual int     type         (void) const { return Calendars::Tranquility ; }
    virtual QString toString     (QString format = "") ;

    virtual int     year         (void) ;
    virtual int     month        (void) ;
    virtual int     mday         (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT BalinesePawukonCalendar : public AbstractCalendar
{
  public:

    explicit BalinesePawukonCalendar (void) ;
    virtual ~BalinesePawukonCalendar (void) ;

    virtual int     type             (void) const { return Calendars::BalinesePawukon ; }
    virtual QString toString         (QString format = "") ;

    virtual int     year             (void) ;
    virtual int     month            (void) ;
    virtual int     mday             (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT BalineseSakaCalendar : public AbstractCalendar
{
  public:

    explicit BalineseSakaCalendar (void) ;
    virtual ~BalineseSakaCalendar (void) ;

    virtual int     type          (void) const { return Calendars::BalineseSaka ; }
    virtual QString toString      (QString format = "") ;

    virtual int     year          (void) ;
    virtual int     month         (void) ;
    virtual int     mday          (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT PaxCalendar : public AbstractCalendar
{
  public:

    explicit PaxCalendar     (void) ;
    virtual ~PaxCalendar     (void) ;

    virtual int     type     (void) const { return Calendars::Pax ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT CommonCivilTimeCalendar : public AbstractCalendar
{
  public:

    explicit CommonCivilTimeCalendar (void) ;
    virtual ~CommonCivilTimeCalendar (void) ;

    virtual int     type             (void) const { return Calendars::CommonCivilTime ; }
    virtual QString toString         (QString format = "") ;

    virtual int     year             (void) ;
    virtual int     month            (void) ;
    virtual int     mday             (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT SymmetryCalendar : public AbstractCalendar
{
  public:

    explicit SymmetryCalendar (void) ;
    virtual ~SymmetryCalendar (void) ;

    virtual int     type      (void) const { return Calendars::Symmetry ; }
    virtual QString toString  (QString format = "") ;

    virtual int     year      (void) ;
    virtual int     month     (void) ;
    virtual int     mday      (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT HankeHenryPermanentCalendar : public AbstractCalendar
{
  public:

    explicit HankeHenryPermanentCalendar (void) ;
    virtual ~HankeHenryPermanentCalendar (void) ;

    virtual int     type                 (void) const { return Calendars::HankeHenryPermanent ; }
    virtual QString toString             (QString format = "") ;

    virtual int     year                 (void) ;
    virtual int     month                (void) ;
    virtual int     mday                 (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT HermeticLeapWeekCalendar : public AbstractCalendar
{
  public:

    explicit HermeticLeapWeekCalendar (void) ;
    virtual ~HermeticLeapWeekCalendar (void) ;

    virtual int     type              (void) const { return Calendars::HermeticLeapWeek ; }
    virtual QString toString          (QString format = "") ;

    virtual int     year              (void) ;
    virtual int     month             (void) ;
    virtual int     mday              (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT DarianCalendar : public AbstractCalendar
{
  public:

    explicit DarianCalendar  (void) ;
    virtual ~DarianCalendar  (void) ;

    virtual int     type     (void) const { return Calendars::Darian ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT MiddleEarthCalendar : public AbstractCalendar
{
  public:

    explicit MiddleEarthCalendar (void) ;
    virtual ~MiddleEarthCalendar (void) ;

    virtual int     type         (void) const { return Calendars::MiddleEarth ; }
    virtual QString toString     (QString format = "") ;

    virtual int     year         (void) ;
    virtual int     month        (void) ;
    virtual int     mday         (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT GalaxyLegendCalendar : public AbstractCalendar
{ // Testing
  public:

    explicit GalaxyLegendCalendar (void) ;
    virtual ~GalaxyLegendCalendar (void) ;

    virtual int     type          (void) const { return Calendars::GalaxyLegend ; }
    virtual QString toString      (QString format = "/nn/ yyy/MM/dd hh:mm:ss") ;

    virtual int     year          (void) ;
    virtual int     month         (void) ;
    virtual int     mday          (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT GalaxyRepublicCalendar : public AbstractCalendar
{ // Testing
  public:

    explicit GalaxyRepublicCalendar (void) ;
    virtual ~GalaxyRepublicCalendar (void) ;

    virtual int     type            (void) const { return Calendars::GalaxyLegend ; }
    virtual QString toString        (QString format = "/nn/ yyy/MM/dd hh:mm:ss") ;

    virtual int     year            (void) ;
    virtual int     month           (void) ;
    virtual int     mday            (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT GalaxyEmperorCalendar : public AbstractCalendar
{ // Testing
  public:

    explicit GalaxyEmperorCalendar (void) ;
    virtual ~GalaxyEmperorCalendar (void) ;

    virtual int     type           (void) const { return Calendars::GalaxyEmperor ; }
    virtual QString toString       (QString format = "/nn/ yyy/MM/dd hh:mm:ss") ;

    virtual int     year           (void) ;
    virtual int     month          (void) ;
    virtual int     mday           (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT NewGalaxyEmperorCalendar : public AbstractCalendar
{ // Testing
  public:

    explicit NewGalaxyEmperorCalendar (void) ;
    virtual ~NewGalaxyEmperorCalendar (void) ;

    virtual int     type              (void) const { return Calendars::NewGalaxyEmperor ; }
    virtual QString toString          (QString format = "/nn/ yyy/MM/dd hh:mm:ss") ;

    virtual int     year              (void) ;
    virtual int     month             (void) ;
    virtual int     mday              (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT JapanCalendar : public AbstractEra
{
  public:

    explicit JapanCalendar   (void) ;
    virtual ~JapanCalendar   (void) ;

    virtual int     type     (void) const { return Calendars::Japanese ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT KoreanCalendar : public AbstractEra
{
  public:

    explicit KoreanCalendar  (void) ;
    virtual ~KoreanCalendar  (void) ;

    virtual int     type     (void) const { return Calendars::Korean ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

// Regnal Calendar : A medieval English calendar
class Q_CALENDAR_EXPORT RegnalCalendar : public AbstractEra
{
  public:

    explicit RegnalCalendar  (void) ;
    virtual ~RegnalCalendar  (void) ;

    virtual int     type     (void) const { return Calendars::Regnal ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT AbUrbeConditaCalendar : public AbstractEra
{
  public:

    explicit AbUrbeConditaCalendar (void) ;
    virtual ~AbUrbeConditaCalendar (void) ;

    virtual int     type           (void) const { return Calendars::AbUrbeCondita ; }
    virtual QString toString       (QString format = "") ;

    virtual int     year           (void) ;
    virtual int     month          (void) ;
    virtual int     mday           (void) ;

  protected:

  private:

};

/* Maya Long Count Calendar */
class Q_CALENDAR_EXPORT MayaCalendar : public AbstractCalendar
{
  public:

    explicit MayaCalendar    (void) ;
    virtual ~MayaCalendar    (void) ;

    virtual int     type     (void) const { return Calendars::Maya ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

/* Tzolk'in Calendar 260 days */
class Q_CALENDAR_EXPORT TzolkinCalendar : public MayaCalendar
{
  public:

    explicit TzolkinCalendar (void) ;
    virtual ~TzolkinCalendar (void) ;

    virtual int     type     (void) const { return Calendars::Tzolkin ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

/* Habb' Calendar 365/366 days */
class Q_CALENDAR_EXPORT HaabCalendar : public MayaCalendar
{
  public:

    explicit HaabCalendar    (void) ;
    virtual ~HaabCalendar    (void) ;

    virtual int     type     (void) const { return Calendars::Haab ; }
    virtual QString toString (QString format = "") ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

/* Maya Lunar Series Calendar */
class Q_CALENDAR_EXPORT MayaLunarCalendar : public MayaCalendar
{
  public:

    explicit MayaLunarCalendar (void) ;
    virtual ~MayaLunarCalendar (void) ;

    virtual int     type       (void) const { return Calendars::MayaLunar ; }
    virtual QString toString   (QString format = "") ;

    virtual int     year       (void) ;
    virtual int     month      (void) ;
    virtual int     mday       (void) ;

  protected:

  private:

};

/* Maya Venus Calendar 584 days */
class Q_CALENDAR_EXPORT MayaVenusCalendar : public MayaCalendar
{
  public:

    explicit MayaVenusCalendar (void) ;
    virtual ~MayaVenusCalendar (void) ;

    virtual int     type       (void) const { return Calendars::MayaVenus ; }
    virtual QString toString   (QString format = "") ;

    virtual int     year       (void) ;
    virtual int     month      (void) ;
    virtual int     mday       (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT ConfuciusCalendar : public AbstractCalendar
{ // Testing
  public:

    explicit ConfuciusCalendar (void) ;
    virtual ~ConfuciusCalendar (void) ;

    virtual int     type       (void) const { return Calendars::Confucius ; }
    virtual QString toString   (QString format = "/nn/ yyyy/MM/dd hh:mm:ss") ;

    virtual int     year       (void) ;
    virtual int     month      (void) ;
    virtual int     mday       (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT HuangdiCalendar : public AbstractCalendar
{ // Testing
  public:

    explicit HuangdiCalendar (void);
    virtual ~HuangdiCalendar (void);

    virtual int     type     (void) const { return Calendars::Huangdi ; }
    virtual QString toString (QString format = "/nn/ yyyy/MM/dd hh:mm:ss") ;

    virtual void    update   (void) ;
    virtual void    locate   (void) ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT DaoCalendar : public HuangdiCalendar
{ // Testing
  public:

    explicit DaoCalendar     (void) ;
    virtual ~DaoCalendar     (void) ;

    virtual int     type     (void) const { return Calendars::Dao ; }
    virtual QString toString (QString format = "") ;

    virtual void    update   (void) ;
    virtual void    locate   (void) ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

class Q_CALENDAR_EXPORT DaiCalendar : public AbstractCalendar
{ // Testing , this is `Dai` in China, not in Thailand
  public:

    explicit DaiCalendar     (void) ;
    virtual ~DaiCalendar     (void) ;

    virtual int     type     (void) const { return Calendars::Dai ; }
    virtual QString toString (QString format = "") ;

    virtual void    update   (void) ;
    virtual void    locate   (void) ;

    virtual int     year     (void) ;
    virtual int     month    (void) ;
    virtual int     mday     (void) ;

  protected:

  private:

};

}

Q_DECLARE_INTERFACE( N::AbstractCalendar , "com.neutrino.calendar.abstract"    )
Q_DECLARE_INTERFACE( N::AbstractEra      , "com.neutrino.calendar.era"         )
Q_DECLARE_INTERFACE( N::RadiometricTime  , "com.neutrino.calendar.radiometric" )

QT_END_NAMESPACE

#endif
