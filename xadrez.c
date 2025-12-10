#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    int torre, bispo = 5, rainha = 8, tc, bc = 1, rc = 1, cavalo = 1;//Deixei "torre" livre para o usuário decidir quantas casas a direita a torre poderá se mover.

    // Implementação de Movimentação do Bispo
    printf ("Movimentação BISPO\n");
    while (bc <= bispo){
        printf ("%d Bispo em diagonal para cima/direita\n", bc);
        bc++;
    }
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    printf ("Movimentação TORRE\n");
    printf("Digite quantas casas à direita a TORRE deve se mover: ");
    scanf ("%d", &torre);//Aqui eu dei opção para o usuário decidir quantas casas a direita a torre irá se mover.
    for (tc = 1; tc <= torre; tc++){
        printf ("%d Torre para direita\n", tc);
    }
    // Aqui usei a do-while
    printf("Movimentação RAINHA\n");
    // Implementação de Movimentação da Rainha
    do {
        printf ("%d Rainha para esquerda\n", rc);
        rc++;
    }while (rc <= rainha);
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("-------------Aventureiro-----------\n");
    // Nível Aventureiro - Movimentação do Cavalo
    printf ("Movimentação Cavalo\n");
    while (cavalo--){
        for (int i = 1; i <= 2; i++){
            printf("Baixo\n");//vertical
        }
        printf ("Esquerda\n");//horizontal
    }
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    
    return 0;
}
