#include <iostream>
#include "Const.h"
#include "Tablero.h"
#include "Utils.h"

int main() {
    char tableroAjedrez[TAMANYO_TABLERO][TAMANYO_TABLERO];
    bool gameOver = false;
    iniciarTablero(tableroAjedrez);

    do {
        system("cls");  
        mostrarTablero(tableroAjedrez);

        Position posicion;
        bool tiene_pieza = false;

        do {
            std::cout << "Elige una pieza" << std::endl;
            std::cout << "X: ";
            std::cin >> posicion.x;
            std::cout << "Y: ";
            std::cin >> posicion.y;

            if (posicion.x < 1 || posicion.x > TAMANYO_TABLERO ||
                posicion.y < 1 || posicion.y > TAMANYO_TABLERO) {
                std::cout << "Input inválido, intenta de nuevo." << std::endl ;  
            }
            else {
                tiene_pieza = true;
            }

        } while (!tiene_pieza);

     
        posicion.x--;
        posicion.y = TAMANYO_TABLERO - posicion.y;

 

    } while (!gameOver);


}