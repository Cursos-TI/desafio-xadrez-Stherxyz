#include <stdio.h>
#include <stdlib.h>

// Torre com recursividade
void moverTorre(int casas, char direcao[]) {
    if (casas == 0) return;
    printf("Direita!\n", direcao);
    moverTorre(casas - 1, direcao);
}

// Rainha com recursividade
void moverRainha(int casas, char direcao[]) {
    if (casas == 0) return;
    printf("Esquerda!\n", direcao);
    moverRainha(casas - 1, direcao);
}

// Cavalo com loops
void moverCavalo(int verticais, int horizontais) {
    printf("Movimentação do Cavalo em L:\n");
    for (int i = 0; i < verticais; i++) {
        printf("Cima!\n");
    }
    for (int j = 0; j < horizontais; j++) {
        printf("Direita!\n");
    }
}

// Bispo com recursividade + loops aninhados
void moverBispo(int verticais, int horizontais) {
    if (verticais == 0 || horizontais == 0) return;
    for (int i = 0; i < verticais; i++) {
        for (int j = 0; j < horizontais; j++) {
            printf("Cima e direita\n");
        }
    }
    moverBispo(verticais - 1, horizontais - 1);
}

// Função principal
int main() {
    printf("Torre\n");
    moverTorre(5, "Direita");

    printf("\nRainha\n");
    moverRainha(8, "Esquerda");

    printf("\nCavalo\n");
    moverCavalo(2, 1);

    printf("\nBispo\n");
    moverBispo(5, 1);

    return 0;
}
