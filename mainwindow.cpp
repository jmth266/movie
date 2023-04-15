#include <QFileDialog>
#include <QImage>
#include <cassert>
#include <QMainWindow>
#include <QDialog>
#include "mainwindow.h"
#include<iostream>
#include "mainwindow.h"
#include "ui_MainWindow.h"
#include <stdlib.h>
#include "inputmovie.h"
#include "MovieRank.h"
#include "suggest.h"


MainWindow::MainWindow(QWidget* parent) :
        QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    MovieRank m;
    m.populateMovies();
//    QObject::connect(ui->inputMovieButton, SIGNAL(clicked()),
//                     this, SLOT(on_inputMovieButton_clicked()));


}

MainWindow::~MainWindow() {
    delete ui;
    delete m_imageWindow;
}



//void MainWindow::on_actionOpen_triggered() {
//    int i=0;
//    QString moviePic[50];
//    for (int i=0; i<4; i++) {
//        moviePic[i] =
//                QFileDialog::getOpenFileName(this, "Open Image", ".",
//                                             "Image Files (*.png *.jpg *.bmp)");
//
//    }
//    m_image = QImage(moviePic[2]);
//    assert(!m_image.isNull());
//    m_imageWindow->clear();
//    m_imageWindow->addPixmap(QPixmap::fromImage(m_image));
//    // ui->graphicsView->fitInView(m_imageWindow->sceneRect(), Qt::KeepAspectRatio);
//}


void MainWindow::on_inputMovieButton_clicked(){
    inputMovie inputMovieTitle;
    inputMovieTitle.setModal(true);
    inputMovieTitle.exec();
}
void MainWindow::on_pushButton_2_clicked() {
    suggest sugg;
    sugg.setModal(true);
    sugg.exec();
}