#ifndef GAME_H
#define GAME_H

#include <QObject>
#include <QVector>
#include <QPushButton>
#include <QString>

class game : public QObject
{
    Q_OBJECT

public:
    QVector<QVector<QPushButton*>> field_it;
private:
    QVector<QVector<int>> field;
    int with_comp;
    int start_now, now, win;
    int n = 0, m = 0, len;
    int cnt_turn = 0;

public:
    explicit game(QObject *parent = nullptr);

private:
    bool is_win(bool only_check);
    QString current_text();

signals:
    void send_text(QString text);

public slots:
    void turn(int xy); //костыльная передача коородинат из-за сложностей с QPair.
                       //Не работает с x, y >= 100, но при таких x и y всё и так плохо.
    void restart();
    void start_new(int n_, int m_, int len_, int start_now_, int with_comp_);
};

#endif // GAME_H
