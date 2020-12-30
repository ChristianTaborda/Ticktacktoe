#ifndef JUGADOR_H
#define JUGADOR_H

#include <QMainWindow>
#include "Tablero.h"

class Jugador {
    private:
        QString simbolo;
        int posX;
        int posY;
    public:
        Jugador(QString simboloIn);
        void setPosX(int posXIn);
        void setPosY(int posYIn);
        void jugar(Tablero * &T);
};

#endif
