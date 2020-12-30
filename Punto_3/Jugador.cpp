#include "Jugador.h"

Jugador::Jugador(QString simboloIn){
    simbolo = simboloIn;
    posX = 0;
    posY = 0;
}

void Jugador::setPosX(int posXIn){
    posX = posXIn;
}

void Jugador::setPosY(int posYIn){
    posY = posYIn;
}

void Jugador::jugar(Tablero * &T){
    T->setPos(posX, posY, simbolo);
}
