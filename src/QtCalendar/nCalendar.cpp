#include <qtcalendar.h>

/*****************************************************************************
                              Time Handling
 *****************************************************************************/

/***********************************************
             Other Calendar Parent
 ***********************************************/

N::AbstractCalendar:: AbstractCalendar (void)
                    : Time             (    )
{
}

N::AbstractCalendar::~AbstractCalendar (void)
{
}

/***********************************************
           Other Calendar Era Parent
 ***********************************************/

N::AbstractEra:: AbstractEra (void)
               : Time        (    )
{
}

N::AbstractEra::~AbstractEra (void)
{
}
