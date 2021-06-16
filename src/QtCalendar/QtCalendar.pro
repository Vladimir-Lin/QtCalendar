NAME         = QtCalendar
TARGET       = $${NAME}

QT           = core
QT          -= gui
QT          += Essentials

load(qt_build_config)
load(qt_module)

include ($${PWD}/Calendar.pri)

INCLUDEPATH += $${PWD}/../../include/$${NAME}

HEADERS     += $${PWD}/../../include/$${NAME}/qtcalendar.h

OTHER_FILES += $${PWD}/../../include/$${NAME}/headers.pri

include ($${PWD}/../../doc/Qt/Qt.pri)

TRNAME       = $${NAME}
include ($${PWD}/../../Translations.pri)
