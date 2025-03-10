#include <stdio.h>

// Função recursiva para mover a Torre
void mover_torre(int casas, int mov) {
    if (casas == 0) return;  // Caso base
    if (mov == 0) {
        printf("Direita\n");  // Movendo para a direita
    } else {
        printf("Baixo\n");  // Movendo para baixo
    }
    mover_torre(casas - 1, mov);  // Chamada recursiva
}

// Função recursiva para mover o Bispo
void mover_bispo(int casas, int mov_v, int mov_h) {
    if (casas == 0) return;  // Caso base
    if (mov_v == 0) {
        printf("Cima\n");  // Movendo para cima
    } else {
        printf("Esquerda\n");  // Movendo para a esquerda
    }
    mover_bispo(casas - 1, (mov_v + 1) % 2, (mov_h + 1) % 2);  // Chamada recursiva
}

// Função recursiva para mover a Rainha
void mover_rainha(int casas, int mov) {
    if (casas == 0) return;  // Caso base
    if (mov == 0) {
        printf("Direita\n");  // Movendo para a direita
    } else {
        printf("Baixo\n");  // Movendo para baixo
    }
    mover_rainha(casas - 1, (mov + 1) % 2);  // Chamada recursiva
}

// Função para mover o Cavalo (usando loops aninhados)
void mover_cavalo() {
    for (int i = 0; i < 2; i++) {  // Loop para a movimentação vertical
        for (int j = 0; j < 1; j++) {  // Loop para a movimentação horizontal
            if (i == 0) {
                printf("Cima\n");  // Movendo para cima
            }
            if (j == 0) {
                printf("Direita\n");  // Movendo para a direita
            }
        }
    }
}

int main() {
    int casas = 5;

    printf("Movimento da Torre:\n");
    mover_torre(casas, 0);  // Movimento para a direita
    printf("\n");

    printf("Movimento do Bispo:\n");
    mover_bispo(casas, 0, 0);  // Movimento na diagonal (cima, esquerda)
    printf("\n");

    printf("Movimento da Rainha:\n");
    mover_rainha(casas, 0);  // Movimento para a direita
    printf("\n");

    printf("Movimento do Cavalo:\n");
    mover_cavalo();  // Movimento para cima e direita
    printf("\n");

    return 0;
}
