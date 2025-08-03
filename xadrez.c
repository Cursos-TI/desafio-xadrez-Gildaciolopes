#include <stdio.h>

int main() {
    // Definição das constantes de movimento
    const int TORRE_MOVES   = 5;
    const int BISPO_MOVES   = 5;
    const int RAINHA_MOVES  = 8;
    const int CAVALO_DOWN   = 2; // Duas casas para baixo
    const int CAVALO_LEFT   = 1; // Uma casa para a esquerda

    int i, j, k; // Contadores genéricos

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

    // Espaço em branco separando o Cavalo
    printf("\n");

    // 4) Movimento do Cavalo: simula o movimento em 'L' (2 para baixo, 1 para a esquerda)
    // usando loops aninhados (um for e um while)
    printf("Movimento do Cavalo (aninhado):\n");
    
    /*
     * O Cavalo faz um movimento em L:
     * - Duas casas para baixo (loop for)
     * - Uma casa para a esquerda (loop while)
     */
    for (i = 0; i < 1; i++) {          // Loop para repetir o movimento (aqui uma vez)
        // Parte vertical do 'L'
        for (j = 0; j < CAVALO_DOWN; j++) {
            printf("Baixo\n");
        }
        // Parte horizontal do 'L'
        k = 0;
        while (k < CAVALO_LEFT) {
            printf("Esquerda\n");
            k++;
        }
    }

    return 0;
}