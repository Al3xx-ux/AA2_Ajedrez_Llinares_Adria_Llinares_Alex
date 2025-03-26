#include <iostream>
#include "Const.h"
#include "Tablero.h"
#include "Utils.h"

int main() {
    char tableroAjedrez[TAMANYO_TABLERO][TAMANYO_TABLERO];
    bool gameOver = false;
    iniciarTablero(tableroAjedrez);

    do {
        system("cls");  // Limpia la pantalla
        mostrarTablero(tableroAjedrez);

        Position posicion;
        bool tiene_pieza = false;

        // Solicitar las coordenadas de la pieza
        do {
            std::cout << "Elige una pieza" << std::endl;
            std::cout << "X: ";
            std::cin >> posicion.x;
            std::cout << "Y: ";
            std::cin >> posicion.y;

            if (posicion.x < 1 || posicion.x > TAMANYO_TABLERO ||
                posicion.y < 1 || posicion.y > TAMANYO_TABLERO) {
                std::cout << "Input inválido, intenta de nuevo.\n";  // Corregido el acento
            }
            else {
                tiene_pieza = true;
            }

        } while (!tiene_pieza);

        // Ajustar las coordenadas
        posicion.x--;
        posicion.y = TAMANYO_TABLERO - posicion.y;

        // Preguntar si el jugador quiere salir del juego
        std::cout << "¿Quieres salir del juego? (1 = Sí, 0 = No): ";  // Corregido el acento
        std::cin >> gameOver;

    } while (!gameOver);

    return 0;
}