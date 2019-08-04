#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    logic = new game();
    change_settings();
    connect(ui->pb_restart, SIGNAL(clicked(bool)), logic, SLOT(restart()));
    connect(ui->pb_option, SIGNAL(clicked(bool)), this, SLOT(change_settings()));
    connect(logic, SIGNAL(send_text(QString)), this, SLOT(set_text(QString)));
}

void MainWindow::start(int n, int m, int len, int start_now, int with_comp) {
    logic->start_new(n, m, len, start_now, with_comp);

    mapper = new QSignalMapper(this);
    int size_ = 200;
    int now_y = this->size().height() - size_ - 50;
    int step = size_ / qMax(n, m);
    while (logic->field_it.size() != n);
    for(int i = 0; i < n; i++) {
        int now_x = 50;
        for (int j = 0; j < m; j++) {
            QPushButton* it = new QPushButton(this);
            it->setGeometry(now_x, now_y, step, step);
            logic->field_it[i][j] = it;
            connect(it, SIGNAL(clicked(bool)), mapper, SLOT(map()));
            mapper->setMapping(it, i*100+j); // проблемы с пересылкой пар (пытался QPair<int, int>, что-то не получилось)
            connect(mapper, SIGNAL(mapped(int)), logic, SLOT(turn(int)));
            now_x += step;
        }
        now_y += step;
    }
    this->setStyleSheet("QPushButton {background-color : khaki}"); //;background-color : green;");
    this->show();
}

void MainWindow::set_text(QString text) {
    ui->label->setText(text);
}

void MainWindow::change_settings() {
    st = new settings();
    this->hide();
    st->show();
    connect(st, SIGNAL(save(int,int,int,int,int)), this, SLOT(start(int,int,int,int,int)));
}

MainWindow::~MainWindow() {
    delete ui;
}
