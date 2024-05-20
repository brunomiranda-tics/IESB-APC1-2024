/*
 ============================================================================
 Instituição: IESB
 Disciplina : Algoritmos e Programação de Computadores I (APCI)
 Objetivo   : Fornecer conhecimentos e práticas em programação na linguagem C.
 Professor  : Bruno Miranda [bruno.marcos@iesb.edu.br]
 Data       : Mai2024

 Algoritmo  : Uso de vetores

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int notas[100];
    int i;

    for (i = 0; i < 100; i++){
       printf("\n Digite a nota do aluno %d: ", i);
       scanf("%d", &notas[i]);
    }    

    return 0;
}