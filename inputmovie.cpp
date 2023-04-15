#include "inputmovie.h"
#include "ui_inputmovie.h"
#include <iostream>
#include "mainwindow.h"
#include <QMessageBox>
#include "Movie.h"
#include "MovieRank.h"
#include "adjustrank.h"
#include <fstream>
inputMovie::inputMovie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inputMovie)
{
    ui->setupUi(this);
//    QObject::connect(ui->resetButton, SIGNAL(clicked()),
//                     this, SLOT(on_resetButton_clicked()));
    QObject::connect(ui->submitButton, SIGNAL(clicked()),
                     this, SLOT(submitButton()));
}

inputMovie::~inputMovie()
{
    delete ui;
}

void inputMovie:: on_resetButton_clicked() {
ui->movieTitle->clear();
ui->duration->clear();
ui->genreList->setCurrentIndex(0);
ui->yearBox->clear();

}

void inputMovie::submitButton() {
    //Movie movie("","",0,0,0);

    if(ui->movieTitle->text().isEmpty()){
        QMessageBox::warning(this, "Movie Title", "Blank! Please Enter a Movie Title!");
        return;
    }

    QString movieName = ui->movieTitle->text();
    std::string currentMovie = movieName.toLocal8Bit().constData();
    QString genre = ui->genreList->currentText();
    std::string currentGenre = genre.toLocal8Bit().constData();
    QString year = ui->yearBox->text();
    std::string currentYear = year.toLocal8Bit().constData();
    QString duration = ui->duration->text();
    std::string currentDuration = duration.toLocal8Bit().constData();
    std::cout<<"The movie title is:" << currentMovie << ". The genre is: "<< currentGenre<<
    ". The release year was: " << currentYear << ". " << currentMovie << " is " << currentDuration
    << " minutes long." << std::endl;
    QMessageBox::information(this, "Submitted", "Your Movie has been submitted. :)"
                                          "Thank you!");
    const char *path = "Users/jimmy/cs335/movie/moviename.txt";
//    std::ofstream file(path);
//    std::string data(currentMovie);
//    file << data;
//    movie.setName(currentMovie);
//    movie.setGenre(currentGenre);
//    movie.setDuration(stoi(currentDuration));
//    movie.setYear(stoi(currentYear));
   // movie.setRank(m.getSize());


    adjustRank adjustrank;
    adjustrank.setModal(true);
    adjustrank.exec();
    on_resetButton_clicked();
    QApplication::quit();
}



