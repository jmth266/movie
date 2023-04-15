#ifndef SUGGEST_H
#define SUGGEST_H

#include <QDialog>

namespace Ui {
class suggest;
}

class suggest : public QDialog
{
    Q_OBJECT

public:
    explicit suggest(QWidget *parent = nullptr);
    ~suggest();
private slots:
   void findMovie();
private:
    Ui::suggest *ui;
};

#endif // SUGGEST_H
