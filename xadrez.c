#include <stdio.h>

// ----- FUNÇÕES RECURSIVAS ----- //

/**
 * Simula o movimento da Torre recursivamente.
 * Cada chamada imprime "Direita" até moves chegar a zero.
 */
void torre_recursive(int moves) {
    if (moves <= 0) return;
    printf("Direita\n");
    torre_recursive(moves - 1);
}

/**
 * Simula o movimento da Rainha recursivamente.
 * Cada chamada imprime "Esquerda" até moves chegar a zero.
 */
void rainha_recursive(int moves) {
    if (moves <= 0) return;
    printf("Esquerda\n");
    rainha_recursive(moves - 1);
}

/**
 * Simula o movimento do Bispo usando recursividade e loops aninhados.
 * O loop externo repete o movimento vertical (1 casa "Cima"),
 * o interno repete o horizontal (1 casa "Direita").
 */
void bispo_recursive(int moves) {
    if (moves <= 0) return;
    // Loop aninhado para representar uma casa na diagonal
    for (int vert = 0; vert < 1; vert++) {
        printf("Cima\n");
        for (int horiz = 0; horiz < 1; horiz++) {
            printf("Direita\n");
        }
    }
    bispo_recursive(moves - 1);
}

int main() {
    // Constantes de movimento
    const int TORRE_MOVES   = 5;
    const int BISPO_MOVES   = 5;
    const int RAINHA_MOVES  = 8;

    // 1) Movimento da Torre (Recursivo)
    printf("Movimento da Torre (recursivo):\n");
    torre_recursive(TORRE_MOVES);
    printf("\n");

    // 2) Movimento do Bispo (Recursivo + Loops Aninhados)
    printf("Movimento do Bispo (recursivo + loops aninhados):\n");
    bispo_recursive(BISPO_MOVES);
    printf("\n");

    // 3) Movimento da Rainha (Recursivo)
    printf("Movimento da Rainha (recursivo):\n");
    rainha_recursive(RAINHA_MOVES);
    printf("\n");

   // 4) Movimento do Cavalo (Loops Aninhados Complexos)
    //    Objetivo: 2 casas para cima, 1 casa para a direita, em "L".
    printf("Movimento do Cavalo (loops complexos):\n");
    
    // Variáveis de controle múltiplo
    int a, b;
    
    // Loop externo controla as três etapas do "L"
    for (a = 0, b = 0; a < 3; a++) {
        // Primeiras duas iterações: move para cima
        if (a < 2) {
            printf("Cima\n");
            continue; // volta para próxima iteração de 'a'
        }
        
        // Na terceira iteração: inicia movimento horizontal
        for (; b < 1; b++) {
            printf("Direita\n");
            break;    // sai deste loop interno após 1 passo
        }
        // Após mover direita, pode usar break para sair do loop externo
        break;
    }

    return 0;
}