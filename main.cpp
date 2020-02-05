#include "mainwindow.h"

#include <QWidget>
#include <QApplication>
#include <QLayout>
#include <QList>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();

    return a.exec();
}
/*
#include <QApplication>
#include <QtWidgets>
#include <QLayout>
#include <QList>
#include <QPushButton>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget w;

    QVBoxLayout *l = new QVBoxLayout(&w);
    w.setLayout(l);

    QList<QPushButton *> *buttons = new QList<QPushButton *>();
    for(int i = 0; i < 5; i++)
    {
        QPushButton *b = new QPushButton("test", &w);
        l->addWidget(b);
        buttons->append(b);
    }


    for(int i = 0; i < buttons->size() - 2; i++)
    {
        buttons->at(i)->setText("?");
    }


    w.show();

    return a.exec();
}
*/
