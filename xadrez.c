#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita (usando for)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");
    
    // Movimento do Bispo: 5 casas na diagonal (usando while)
    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");
    
    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);
    
    printf("\n");
    
    // Movimento do Cavalo: 2 casas para baixo e 1 para a esquerda (usando loops aninhados)
    printf("Movimento do Cavalo:\n");
    for (int m = 1; m <= 2; m++) { // Primeiro movimento: 2 casas para baixo
        printf("Baixo\n");
    }
    int n = 1;
    while (n <= 1) { // Segundo movimento: 1 casa para a esquerda
        printf("Esquerda\n");
        n++;
    }
    
    return 0;
}
