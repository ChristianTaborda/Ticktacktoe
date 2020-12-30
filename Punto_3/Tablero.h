#ifndef TABLERO_H
#define TABLERO_H

#include <QMainWindow>

class Tablero {
    private:
        QString triqui [3][3];
    public:
        Tablero();
        QString getPos(int posXIn, int posYIn);
        void setPos(int posXIn, int posYIn, QString S);
        bool ocupada(int F, int C);
        QString juzgar(bool &decision, int empate);
};

#endif

