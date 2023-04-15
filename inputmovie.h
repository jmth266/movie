#ifndef INPUTMOVIE_H
#define INPUTMOVIE_H

#include <QDialog>
#include "MovieRank.h"
#include "mainwindow.h"
namespace Ui {
class inputMovie;
}

class inputMovie : public QDialog
{
    Q_OBJECT

public:
    explicit inputMovie(QWidget *parent = nullptr);
    ~inputMovie();
public slots:
    void on_resetButton_clicked();
    void submitButton();
private:
    Ui::inputMovie *ui;
    std::vector<std::shared_ptr<MovieRank>> m;
    std::vector<std::shared_ptr<Movie>> movies;

};

#endif // INPUTMOVIE_H
