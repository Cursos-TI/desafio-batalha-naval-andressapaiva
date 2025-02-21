// Batalha Naval - Nível Aventureiro

#include <stdio.h>

#define LINHAS 10 // definição do tamanho do tabuleiro
#define COLUNAS 10

int main(){

    int tabuleiro [LINHAS][COLUNAS];
    int navio_horizontal_linha = 5;  // as posições iniciais são inseridas diretamente no código
    int navio_horizontal_coluna = 5; // porém, poderiam ser solicitadas ao usuário
    int navio_vertical_linha = 2;
    int navio_vertical_coluna = 1;
    int navio_diagonal1_linha = 6;
    int navio_diagonal1_coluna = 3;
    int navio_diagonal2_linha = 3;
    int navio_diagonal2_coluna = 3;
    
    for (int i = 0; i < LINHAS; i++) //loop aninhado para definir todos os elementos 0;
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            
            tabuleiro [i][j] = 0; 
        }
    }

    // definindo as posições iniciais dos navio horizontal:

   if(navio_horizontal_linha < 10 && navio_horizontal_coluna < 7)
   {
    tabuleiro [navio_horizontal_linha][navio_horizontal_coluna] = 3;
    tabuleiro [navio_horizontal_linha][navio_horizontal_coluna + 1] = 3;
    tabuleiro [navio_horizontal_linha][navio_horizontal_coluna + 2] = 3;
   } else {
     printf("Redefinir a posição inicial no código do navio horizontal.\n");
   }

   // definindo as posições iniciais do navio vertical:

   if(navio_vertical_linha < (LINHAS - 3) && navio_vertical_coluna < COLUNAS)
   {
    tabuleiro [navio_vertical_linha][navio_vertical_coluna] = 3;
    tabuleiro [navio_vertical_linha + 1][navio_vertical_coluna] = 3;
    tabuleiro [navio_vertical_linha + 2][navio_vertical_coluna] = 3;
   } else {
     printf("Redefinir a posição inicial no código do navio vertical.\n");
   }

    // definindo as posições do navio diagonal 1:

    if(navio_diagonal1_linha < (LINHAS - 3) && navio_diagonal1_coluna < (COLUNAS - 3))
   {
    tabuleiro [navio_diagonal1_linha][navio_diagonal1_coluna] = 3;
    tabuleiro [navio_diagonal1_linha + 1][navio_diagonal1_coluna + 1] = 3;
    tabuleiro [navio_diagonal1_linha + 2][navio_diagonal1_coluna + 2] = 3;
   } else {
     printf("Redefinir a posição inicial no código do navio diagonal 1.\n");
   }

   // definindo as posições do navio diagonal 2:

   if(1 < navio_diagonal2_linha < LINHAS && navio_diagonal2_coluna < (COLUNAS -3))
   {
    tabuleiro [navio_diagonal2_linha][navio_diagonal2_coluna] = 3;
    tabuleiro [navio_diagonal2_linha - 1][navio_diagonal2_coluna + 1] = 3;
    tabuleiro [navio_diagonal2_linha - 2][navio_diagonal2_coluna + 2] = 3;
   } else {
     printf("Redefinir a posição inicial no código do navio diagonal 2.\n");
   }

   //loop aninhado para imprimir todos os elementos da matriz

    for (int i = 0; i < LINHAS; i++) 
    {
        for (int j = 0; j < COLUNAS; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

