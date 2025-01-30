#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
    
int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispoDiagonal;
    int torrreDireita = 1;
    int rainhaEsquerda = 1;
    int cavaloBaixo = 4;
    int cavaloEsquerda = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // Utilizando estrutura de repetição for.
    for (bispoDiagonal = 1; bispoDiagonal <= 5; bispoDiagonal++)
    {
        printf("Na Diagonal, bispo andou %d vezes\n", bispoDiagonal);
    }

    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // Utilizando estrutura de repetição while
    while (torrreDireita <= 5)
    {
        printf("Para Direita, Torre moveu-se %d vezes\n", torrreDireita);
        torrreDireita++;
    }

    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // Utilizando estrurura de repetição Do-While
    do
    {   
        printf("Para Esquerda, Rainha andou %d vezes\n", rainhaEsquerda);
        rainhaEsquerda++;
    } while (rainhaEsquerda <= 8);
    
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    // Utilizando Loops Aninhados for e While Juntos.
    while (cavaloBaixo >= 1)
    {   
        for (int cavaloEsquerda = 1 ;cavaloEsquerda < 3; cavaloEsquerda++)
        { 
            printf("Cavalo andou %d para baixo e %d para esquerda\n", cavaloBaixo, cavaloEsquerda);
        }
        cavaloBaixo--;
    }
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
