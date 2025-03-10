#include <stdio.h>

int main() {
    // Movimentos da Torre (para a direita, 5 casas)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {  // Movimento horizontal para a direita
        printf("Direita\n");
    }

    // Movimentos do Bispo (diagonal para cima e à direita, 5 casas)
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {  // Movimento diagonal para cima e à direita
        printf("Cima, Direita\n");
        j++;
    }

    // Movimentos da Rainha (para a esquerda, 8 casas)
    printf("\nMovimento da Rainha:\n");
    for (int k = 0; k < 8; k++) {  // Movimento para a esquerda
        printf("Esquerda\n");
    }

    // Movimentos do Cavalo (movimento em 'L': 2 casas para baixo e 1 para a esquerda)
    printf("\nMovimento do Cavalo:\n");
    for (int l = 0; l < 2; l++) {  // Loop externo para as duas casas para baixo
        printf("Baixo\n");
    }

    // Agora o Cavalo se move 1 casa para a esquerda
    int m = 0;
    while (m < 1) {  // Loop interno para o movimento à esquerda
        printf("Esquerda\n");
        m++;
    }

    return 0;
}
