#include "Tablero.h"

Tablero::Tablero(){
    for(int x=0; x<3; x++){
        for(int y=0; y<3; y++){
            triqui[x][y] = " ";
        }
    }
}

QString Tablero::getPos(int posXIn, int posYIn){
        return triqui[posXIn][posYIn];
}

void Tablero::setPos(int posXIn, int posYIn, QString S){
    triqui[posXIn][posYIn] = S;
}

bool Tablero::ocupada(int F, int C){
    if ((triqui[F][C].compare("X") == 0)||(triqui[F][C].compare("O") == 0)){
        return true;
    }
    else {
        return false;
    }
}

QString Tablero::juzgar(bool &decision, int empate){
    for(int i=0; i<3; i++){
        if((triqui[i][0].compare("X") == 0)&&(triqui[i][1].compare("X") == 0)&&(triqui[i][2].compare("X") == 0)&&(decision)){
            decision = false;
            return "Gana el jugador 1 (X)";
        }
        else {
            if((triqui[0][i].compare("X") == 0)&&(triqui[1][i].compare("X") == 0)&&(triqui[2][i].compare("X") == 0)&&(decision)){
                decision = false;
                return "Gana el jugador 1 (X)";
            }
            else {
                if((triqui[i][0].compare("O") == 0)&&(triqui[i][1].compare("O") == 0)&&(triqui[i][2].compare("O") == 0)&&(decision)){
                    decision = false;
                    return "Gana el jugador 2 (O)";
                }
                else{
                    if((triqui[0][i].compare("O") == 0)&& (triqui[1][i].compare("O") == 0)&&(triqui[2][i].compare("O") == 0)&&(decision)){
                        decision = false;
                        return "Gana el jugador 2 (O)";
                    }
                }
            }
        }
    }
    if((triqui[0][0].compare("X") == 0)&&(triqui[1][1].compare("X") == 0)&&(triqui[2][2].compare("X") == 0)&&(decision)){
        decision = false;
        return "Gana el jugador 1 (X)";
    }
    else {
        if((triqui[0][2].compare("X") == 0)&&(triqui[1][1].compare("X") == 0)&&(triqui[2][0].compare("X") == 0)&&(decision)){
            decision = false;
            return "Gana el jugador 1 (X)";
        }
        else {
            if((triqui[0][0].compare("O") == 0)&&(triqui[1][1].compare("O") == 0)&&(triqui[2][2].compare("O") == 0)&&(decision)){
                decision = false;
                return "Gana el jugador 2 (O)";
            }
            else {
                if((triqui[0][2].compare("O") == 0)&&(triqui[1][1].compare("O") == 0)&&(triqui[2][0].compare("O") == 0)&&(decision)){
                    decision = false;
                    return "Gana el jugador 2 (O)";
                }
            }
        }
    }
    if((empate == 9)&&(decision)){
        decision = false;
        return "Empate";
    }
    else {
        return "";
    }
}

