#ifndef JUEGO_H
#define JUEGO_H

#include <QMainWindow>
#include "Jugador.h"
#include "Tablero.h"

namespace Ui {
class Juego;
}

class Juego : public QMainWindow
{
    Q_OBJECT

public:
    explicit Juego(QWidget *parent = 0);
    ~Juego();

private slots:
    void on_UNO_clicked();

    void on_DOS_clicked();

    void on_TRES_clicked();

    void on_CUATRO_clicked();

    void on_CINCO_clicked();

    void on_SEIS_clicked();

    void on_SIETE_clicked();

    void on_OCHO_clicked();

    void on_NUEVE_clicked();

    void on_REINICIAR_clicked();

private:
    Ui::Juego *ui;
    int empate;
    bool decision;
    Jugador * J1;
    Jugador * J2;
    Tablero * T;
};

#endif // JUEGO_H
