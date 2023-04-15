#include "suggest.h"
#include "ui_suggest.h"
#include <QMessageBox>

suggest::suggest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::suggest)
{
    QObject::connect(ui->pushButton, SIGNAL(clicked()),
                     this, SLOT(findMovie()));

    ui->setupUi(this);
}

suggest::~suggest()
{
    delete ui;
}
void suggest::findMovie() {
    QMessageBox::information(this, "Peter Pan", "Based on your prefrences, you should watch"
                                                "Peter Pan!");
}