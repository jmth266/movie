#ifndef MOVIE_MAINWINDOW_H
#define MOVIE_MAINWINDOW_H
#include <QMainWindow>
#include <QPixmap>
#include <QGraphicsScene>
#include "inputMovie.h"
#include "MovieRank.h"
#include "Movie.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);

    ~MainWindow() override;



private slots:



    //void on_actionOpen_triggered();

    void on_inputMovieButton_clicked();
    void on_pushButton_2_clicked();
    // void rotate(int angle);

private:
    Ui::MainWindow* ui;
    QImage m_image;
    QGraphicsScene* m_imageWindow;

    std::vector<std::shared_ptr<Movie>> name;
    std::vector<std::shared_ptr<Movie>> genre;
    std::vector<std::shared_ptr<Movie>> year;
    std::vector<std::shared_ptr<Movie>> duration;
    std::vector<std::shared_ptr<MovieRank>> m;
    std::vector<std::shared_ptr<MovieRank>> movies;



};
#endif //MOVIE_MAINWINDOW_H