#include <QApplication>

#include "mainwindow.h"
#include "MovieRank.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    MainWindow mainWindow;
    mainWindow.show();
    return QApplication::exec();
}
