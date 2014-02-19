#include "qsettingshelper.h"

void QSettingsHelper::saveMainWindow(QSettings &settings, QMainWindow &mainWindow, QString key)
{
    settings.beginGroup(key);
    
    settings.setValue("Geometry", mainWindow.saveGeometry());
    
    settings.endGroup();
}

void QSettingsHelper::restoreMainWindow(QSettings &settings, QMainWindow &mainWindow, QString key)
{
    settings.beginGroup(key);
    
    mainWindow.restoreGeometry(settings.value("Geometry", QByteArray()).toByteArray());
    
    settings.endGroup();   
}
