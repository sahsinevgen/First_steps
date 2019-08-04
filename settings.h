#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class settings;
}

class settings : public QWidget
{
    Q_OBJECT

public:
    explicit settings(QWidget *parent = 0);
    ~settings();

private:
    Ui::settings *ui;

signals:
    void save(int n, int m, int len, int start_now, int with_comp);

private slots:
    void close_();
};

#endif // SETTINGS_H
