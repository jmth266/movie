#include "adjustrank.h"
#include "ui_adjustRank.h"
#include "inputmovie.h"
#include "ui_inputmovie.h"
#include <iostream>
#include "mainwindow.h"
#include <QMessageBox>
#include "Movie.h"
#include "MovieRank.h"
#include <QDialog>
#include <QCloseEvent>
adjustRank::adjustRank(QWidget *parent) :

    QDialog(parent),
    ui(new Ui::adjustRank){

//    QObject::connect(ui->compareButton, SIGNAL(clicked()),this,
//                     SLOT(updateLabel(Movie)));
    QObject::connect(ui->yesButton, SIGNAL(clicked()), this, SLOT (yesComapre()));
    QObject::connect(ui->noButton, SIGNAL(clicked()), this, SLOT (noComapre()));

   // std::string title = m.adjustRank(currentMovie)
    ui->setupUi(this);


    MovieRank m;
    m.populateMovies();
}

adjustRank::~adjustRank()
{
    delete ui;
}

void adjustRank::yesCompare(){
//    int temp = movie.getRank();
//    movie.setRank(newMovie.getRank());
//    newMovie.setRank(temp);
    QMessageBox::information(this, "Input", "Input Received, Thank you!");
}

void adjustRank::noCompare(){
  //  newMovie.write();
    QMessageBox::information(this, "Input", "Input Received, Thank you!");


}

void adjustRank::updateLabel(Movie movie){
    MovieRank m;
    m.populateMovies();
    for(int i=0; i<m.getSize(); i++){
        m.movies[i].write();
    }
    string choice = movie.getName();
    Movie newMovie = m.adjustRank(movie);
    string compare = newMovie.getName();
    std::string message = "Do you like " + choice + "better than " + compare + "?";
    QString newMessage = QString::fromStdString(message);
    ui->label->setText(newMessage);
    // jimmy! make text label

}

