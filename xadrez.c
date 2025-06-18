#include <stdio.h>

int main() {
    // Número de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento da TORRE: 5 casas para a direita (usando for)
    printf("Movimento da Torre:\n");
    for(int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do BISPO: 5 casas na diagonal cima-direita (usando while)
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while(j <= casasBispo) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da RAINHA: 8 casas para a esquerda (usando do-while)
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while(k <= casasRainha);

    return 0;
}
