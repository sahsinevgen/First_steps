#include "settings.h"
#include "ui_settings.h"

settings::settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);
    connect(ui->pb, SIGNAL(clicked(bool)), this, SLOT(close_()));
}

void settings::close_() {
    int m = ui->box_weight->value();
    int n = ui->box_height->value();
    int len = ui->box_len->value();
    int start_now;
    if (ui->first_player->isChecked()) {
        start_now = 1;
    }
    else {
        start_now = 0;
    }
    int with_comp;
    if (ui->with_computer->isChecked()) {
        with_comp = 1;
    }
    else {
        with_comp = 0;
    }
    emit save(n, m, len, start_now, with_comp);
    delete this;
}

settings::~settings() {
    delete ui;
}
