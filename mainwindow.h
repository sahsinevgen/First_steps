#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "game.h"
#include "settings.h"

#include <QMainWindow>
#include <QVector>
#include <QSignalMapper>
#include <QLabel>
#include <QPair>
#include <QtGlobal>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

private:
   game* logic;
   settings* st;
   QSignalMapper *mapper;


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void restart(int n, int m);

private:
    Ui::MainWindow *ui;

public slots:
    void start(int n, int m, int len, int start_now, int with_comp);
    void change_settings();
    void set_text(QString text);
};

#endif // MAINWINDOW_H
