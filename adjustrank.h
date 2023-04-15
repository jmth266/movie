#ifndef ADJUSTRANK_H
#define ADJUSTRANK_H

#include <QDialog>
#include "MovieRank.h"
#include "mainwindow.h"
namespace Ui {
class adjustRank;
}

class adjustRank : public QDialog
{
    Q_OBJECT

public:
    explicit adjustRank(QWidget *parent = nullptr);
    ~adjustRank();

private slots:
    void updateLabel(Movie movie);
    void yesCompare();
    void noCompare();
private:
    Ui::adjustRank *ui;



};

#endif // ADJUSTRANK_H
