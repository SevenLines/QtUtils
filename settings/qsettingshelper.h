#ifndef QSETTINGSHELPER_H
#define QSETTINGSHELPER_H

#include <QSettings>
#include <QMainWindow>

class QSettingsHelper {
public:
    static void saveMainWindow(QSettings &settings, QMainWindow &mainWindow, QString key="MainWindow");
    static void restoreMainWindow(QSettings &settings, QMainWindow &mainWindow, QString key="MainWindow");
};

#endif // QSETTINGSHELPER_H
