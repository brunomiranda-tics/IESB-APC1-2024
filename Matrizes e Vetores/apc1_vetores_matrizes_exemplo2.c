/*
 ============================================================================
 Instituição: IESB
 Disciplina : Algoritmos e Programação de Computadores I (APCI)
 Objetivo   : Fornecer conhecimentos e práticas em programação na linguagem C.
 Professor  : Bruno Miranda [bruno.marcos@iesb.edu.br]
 Data       : Mai2024

 Algoritmo  : Uso de matrizes

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int matriz[2][2];
    int i, j;

    // recebe os valores para uma matriz 2x2
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("\n Digite o valor do elemento da matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);            
        }        
    }

    // imprime os valores lidos para uma matriz 2x2
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("[%d]", matriz[i][j]);    
        }        

        printf("\n");
    }

    printf("\n\n");

    return 0;
}