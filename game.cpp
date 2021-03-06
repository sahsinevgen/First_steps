#include "game.h"

game::game(QObject *parent) : QObject(parent) {

}

bool game::is_win(bool only_check = true) {
    bool res = false;
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < m; y++) {
            for (int type = 0; type < 4; type++) {

                int dx = direction_x[type];
                int dy = direction_y[type];
                if (x + dx * (len - 1) < 0 || x + dx * (len - 1) >= n ||
                    y + dy * (len - 1) < 0 || y + dy * (len - 1) >= m) {
                    continue;
                }

                int cnt = 0;
                for (int k = 0; k < len; k++) {
                    int sign = field[x + dx * k][y + dy * k];
                    if (sign == -1) {
                        cnt = -1;
                        break;
                    }
                    if (sign == 1) {
                        cnt++;
                    }
                }
                if (cnt == 0 || cnt == len) {
                    if (only_check) {
                        return true;
                    }
                    for (int k = 0; k < len; k++) {
                        field_it[x + dx * k][y + dy * k]->setStyleSheet("background-color : red");
                    }
                    res = true;
                }
            }
        }
    }
    return res;
} // is_win

QString game::current_text() {
    QString text;
    if (win == -1 && now == 0)
        text = "Ходит 0";
    if (win == -1 && now == 1)
        text = "Ходит X";
    if (win == 0)
        text = "Победил 0";
    if (win == 1)
        text = "Победил X";
    if (win == 2)
        text = "Ничья";
    return text;
}

void game::turn(int xy) {
    if (win != -1) {

        return ;
    }

    int x = xy / 100;
    int y = xy % 100;

    if (field[x][y] != -1) {

        return ;
    }

    field[x][y] = now;
    if (now == 0) {
        field_it[x][y]->setText("0");
    }
    else {
        field_it[x][y]->setText("X");
    }
    if (is_win(false))
        win = now;
    now = (now + 1) % 2; // = now == WinXState ? WinOState : WinXState
    if (++cnt_turn == n * m && win == -1)
        win = 2;
    if (with_comp) {

    }
    emit send_text(current_text());
}

void game::restart() {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            field[i][j] = -1;
            field_it[i][j]->setText("");
            field_it[i][j]->setStyleSheet("background-color : khaki");
        }
    now = start_now;
    win = -1;
    cnt_turn = 0;
    emit send_text(current_text());
}

void game::start_new(int n_, int m_, int len_, int start_now_, int with_comp_) {
    field.clear();
    for (int i = 0; i<n; i++) {
        for (int j = 0; j < m; j++) {
            delete field_it[i][j];
        }
    }
    field_it.clear();
    n = n_;
    m = m_;
    len = len_;
    with_comp = with_comp_;
    now = start_now = start_now_;
    win = -1;
    cnt_turn = 0;
    emit send_text(current_text());
    field = QVector<QVector<int>>(n, QVector<int>(m, -1));
    field_it = QVector<QVector<QPushButton*>>(n, QVector<QPushButton*>(m, nullptr));
}
