#include "Const.h"

void iniciarTablero(char tableroAjedrez[TAMANYO_TABLERO][TAMANYO_TABLERO]) {
    for (int i = 0; i < TAMANYO_TABLERO; i++) {
        for (int j = 0; j < TAMANYO_TABLERO; j++) {

            // Posicionar los peones blancos y negros.
            if (i == TAMANYO_TABLERO - 7) tableroAjedrez[i][j] = PEON_BLANCO;
            else if (i == TAMANYO_TABLERO - 2) tableroAjedrez[i][j] = PEON_NEGRO;
            else tableroAjedrez[i][j] = VACIO;
        }
    }

    // Definicion posiciones piezas.
    const int POS_FILAS_BLANCOS = 0;
    const int POS_FILAS_NEGRAS = 7;


    const int POS_TORRE_BLANCA_IZQUIERDA = 0;
    const int POS_TORRE_BLANCA_DERECHA = 7;
    const int POS_CABALLO_BLANCO_IZQUIERDO = 1;
    const int POS_CABALLO_BLANCO_DERECHO = 6;
    const int POS_ALFIL_BLANCO_IZQUIERDO = 2;
    const int POS_ALFIL_BLANCO_DERECHO = 5;
    const int POS_REINA_BLANCA = 3;
    const int POS_REY_BLANCO = 4;

    const int POS_TORRE_NEGRA_IZQUIERDA = 0;
    const int POS_TORRE_NEGRA_DERECHA = 7;
    const int POS_CABALLO_NEGRO_IZQUIERDO = 1;
    const int POS_CABALLO_NEGRO_DERECHO = 6;
    const int POS_ALFIL_NEGRO_IZQUIERDO = 2;
    const int POS_ALFIL_NEGRO_DERECHO = 5;
    const int POS_REINA_NEGRA = 3;
    const int POS_REY_NEGRO = 4;


    // Colocar las piezas blancas
    tableroAjedrez[POS_FILAS_BLANCOS][POS_TORRE_BLANCA_IZQUIERDA] = TORRE_BLANCA;
    tableroAjedrez[POS_FILAS_BLANCOS][POS_TORRE_BLANCA_DERECHA] = TORRE_BLANCA;
    tableroAjedrez[POS_FILAS_BLANCOS][POS_CABALLO_BLANCO_IZQUIERDO] = CABALLO_BLANCO;
    tableroAjedrez[POS_FILAS_BLANCOS][POS_CABALLO_BLANCO_DERECHO] = CABALLO_BLANCO;
    tableroAjedrez[POS_FILAS_BLANCOS][POS_ALFIL_BLANCO_IZQUIERDO] = ALFIL_BLANCO;
    tableroAjedrez[POS_FILAS_BLANCOS][POS_ALFIL_BLANCO_DERECHO] = ALFIL_BLANCO;
    tableroAjedrez[POS_FILAS_BLANCOS][POS_REINA_BLANCA] = REINA_BLANCA;
    tableroAjedrez[POS_FILAS_BLANCOS][POS_REY_BLANCO] = REY_BLANCO;

    // Colocar las piezas negras
    tableroAjedrez[POS_FILAS_NEGRAS][POS_TORRE_NEGRA_IZQUIERDA] = TORRE_NEGRA;
    tableroAjedrez[POS_FILAS_NEGRAS][POS_TORRE_NEGRA_DERECHA] = TORRE_NEGRA;
    tableroAjedrez[POS_FILAS_NEGRAS][POS_CABALLO_NEGRO_IZQUIERDO] = CABALLO_NEGRO;
    tableroAjedrez[POS_FILAS_NEGRAS][POS_CABALLO_NEGRO_DERECHO] = CABALLO_NEGRO;
    tableroAjedrez[POS_FILAS_NEGRAS][POS_ALFIL_NEGRO_IZQUIERDO] = ALFIL_NEGRO;
    tableroAjedrez[POS_FILAS_NEGRAS][POS_ALFIL_NEGRO_DERECHO] = ALFIL_NEGRO;
    tableroAjedrez[POS_FILAS_NEGRAS][POS_REINA_NEGRA] = REINA_NEGRA;
    tableroAjedrez[POS_FILAS_NEGRAS][POS_REY_NEGRO] = REY_NEGRO;
}

void mostrarTablero(char tableroAjedrez[TAMANYO_TABLERO][TAMANYO_TABLERO]) {
    // Mostrar tablero.

    std::cout << "  ";
    for (int i = 0; i < TAMANYO_TABLERO; i++) {
        std::cout << i + 1 << ' ';
    }
    std::cout << std::endl;

    for (int i = 0; i < TAMANYO_TABLERO; i++) {
        std::cout << i + 1 << " ";

        for (int j = 0; j < TAMANYO_TABLERO; j++) {
            std::cout << tableroAjedrez[i][j] << " ";
        }
        std::cout << std::endl;
    }
}