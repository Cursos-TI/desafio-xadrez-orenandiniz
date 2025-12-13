#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverbispo(int casasb){// Aqui eu usei recursividade
    if (casasb > 0){
        printf ("cima e direita \n");
        moverbispo(casasb - 1);
    }
}


void moverBispoLoopsAninhados(int limite) {//Aqui eu usei recursividade, mas com os Loops Aninhados.
    // Loop externo para o movimento vertical (Cima)
    for (int vertical = 1; vertical <= limite; vertical++) {
        printf("Cima e ");
        // Loop interno para o movimento horizontal (Direita).
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Direita\n");
        }
    }
}

void movertorre(int casast){
    if (casast > 0){
        printf("Torre para direita\n");
        movertorre(casast - 1);
    }
}
void moverrainha(int casasr){
    if (casasr > 0){
        printf("Rainha para esquerda\n");
        moverrainha(casasr - 1);
    }
}

int main() {
   
    int torre, bispo = 5, rainha = 8, cavalo = 1, maxbispo = 5;//Deixei "torre" livre para o usuário decidir quantas casas a direita a torre poderá se mover.

    // Implementação de Movimentação do Bispo
    printf ("Movimentação BISPO\n");
    moverbispo(bispo);
    printf("Movimentação BISPO (Loops Aninhados)\n");
    moverBispoLoopsAninhados(maxbispo);

    printf ("------------------------------\n");

    // Implementação de Movimentação da Torre
    printf ("Movimentação TORRE\n");
    printf("Digite quantas casas à direita a TORRE deve se mover: ");
    scanf ("%d", &torre);//Aqui eu dei opção para o usuário decidir quantas casas a direita a torre irá se mover.
    movertorre(torre);
    
    printf ("------------------------------\n");
   
    printf("Movimentação RAINHA\n");
    // Implementação de Movimentação da Rainha
    moverrainha(rainha);
    
    printf("-----------------------------------\n");
    // Nível Aventureiro - Movimentação do Cavalo
    printf ("Movimentação Cavalo\n");
    while (cavalo--){
        for (int i = 1; i <= 2; i++){
            printf("Cima\n");//vertical
        }
        printf ("Direita\n");//horizontal
    }
    
    
    return 0;
}
