#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
   
    #define TAMANHO 10
    #define NAVIO 3
    void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
        for (int i = 0; i < TAMANHO; i++) {
            for (int j = 0; j < TAMANHO; j++) {
                tabuleiro[i][j] = 0; // Define todas as posições como água (0)
            }
        }
    }

    // Função para exibir o tabuleiro na tela
void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]); // Exibe os valores da matriz
        }
        printf("\n"); // Quebra de linha para manter o formato do tabuleiro
    }
}

// Função para posicionar um navio no tabuleiro
void posicionarNavio(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, int orientacao) {
    printf("Coordenadas do navio (%s):\n", orientacao == 0 ? "Horizontal" : "Vertical");
    
    if (orientacao == 0) { // Se a orientação for horizontal
        for (int i = 0; i < NAVIO; i++) {
            tabuleiro[linha][coluna + i] = NAVIO; // Marca as posições do navio com o valor 3
            printf("(%d, %d)\n", linha, coluna + i); // Exibe as coordenadas ocupadas pelo navio
        }
    } else { // Se a orientação for vertical
        for (int i = 0; i < NAVIO; i++) {
            tabuleiro[linha + i][coluna] = NAVIO; // Marca as posições do navio com o valor 3
            printf("(%d, %d)\n", linha + i, coluna); // Exibe as coordenadas ocupadas pelo navio
        }
    }
    printf("\n"); // Quebra de linha para organização da saída
}


    int tabuleiro[TAMANHO][TAMANHO]; // Declaração do tabuleiro
    inicializarTabuleiro(tabuleiro); // Inicializa o tabuleiro com água
    
    // Definição das coordenadas iniciais dos navios
    int linha1 = 2, coluna1 = 3; // Coordenadas iniciais para o navio horizontal
    int linha2 = 5, coluna2 = 6; // Coordenadas iniciais para o navio vertical
    
    // Posicionando os navios no tabuleiro
    posicionarNavio(tabuleiro, linha1, coluna1, 0); // Posiciona o navio horizontal
    posicionarNavio(tabuleiro, linha2, coluna2, 1); // Posiciona o navio vertical
    
    // Exibir tabuleiro final com os navios posicionados
    exibirTabuleiro(tabuleiro);


    
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

    return 0;
}
