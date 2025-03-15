#include <stdio.h>

// Função recursiva para movimentar a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar o Bispo
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {
    // Movimento da Torre usando recursão
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");
    
    // Movimento do Bispo usando recursão e loops aninhados
    printf("Movimento do Bispo:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }
    printf("\n");
    
    // Movimento da Rainha usando recursão
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");
    
    // Movimento do Cavalo usando loops complexos
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) { // Movimento de 2 casas para cima
        printf("Cima\n");
    }
    for (int j = 0; j < 1; j++) { // Movimento de 1 casa para a direita
        printf("Direita\n");
    }
    
    return 0;
}
