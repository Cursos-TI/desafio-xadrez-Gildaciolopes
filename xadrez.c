#include <stdio.h>

int main() {
    // Definição das constantes de movimento
    const int TORRE_MOVES   = 5;
    const int BISPO_MOVES   = 5;
    const int RAINHA_MOVES  = 8;

    int i; // Contador genérico

    // 1) Movimento da Torre: 5 casas para a direita usando 'for'
    printf("Movimento da Torre (for):\n");
    for (i = 0; i < TORRE_MOVES; i++) {
        // Torre se move horizontalmente para a direita
        printf("Direita\n");
    }
    printf("---\n");

    // 2) Movimento do Bispo: 5 casas na diagonal superior-direita usando 'while'
    printf("Movimento do Bispo (while):\n");
    i = 0;
    while (i < BISPO_MOVES) {
        /* Bispo se move na diagonal: uma casa para cima e uma para a direita */
        printf("Cima Direita\n");
        i++;
    }
    printf("---\n");

    // 3) Movimento da Rainha: 8 casas para a esquerda usando 'do-while'
    printf("Movimento da Rainha (do-while):\n");
    i = 0;
    do {
        // Rainha se move horizontalmente para a esquerda
        printf("Esquerda\n");
        i++;
    } while (i < RAINHA_MOVES);

    return 0;
}