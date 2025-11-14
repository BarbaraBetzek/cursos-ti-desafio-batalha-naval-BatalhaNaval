#include <stdio.h>

#define TAM 10      // Tamanho do tabuleiro (10x10)
#define NAVIO 3     // Valor que representa parte do navio na matriz
#define TAM_NAVIO 3 // Tamanho fixo de cada navio (3 posições)

int main()
{

    int tabuleiro[TAM][TAM];

    // Iniciar o tabuleiro com 0 (água)
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }
    // definição da posição dos navios
    // NAVIO HORIZONTAL
    tabuleiro[5][5] = NAVIO;
    tabuleiro[5][6] = NAVIO;
    tabuleiro[5][7] = NAVIO;

    // NAVIO VERTICAL
    tabuleiro[1][1] = NAVIO;
    tabuleiro[2][1] = NAVIO;
    tabuleiro[3][1] = NAVIO;

    // Exibe tabuleiro
    printf("Tabuleiro da batalha naval:\n");
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
