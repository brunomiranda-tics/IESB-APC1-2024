/*
 ============================================================================
 Instituição: IESB
 Disciplina : Algoritmos e Programação de Computadores I (APCI)
 Objetivo   : Fornecer conhecimentos e práticas em programação na linguagem C.
 Professor  : Bruno Miranda [bruno.marcos@iesb.edu.br]
 Data       : Mai2024

 Algoritmo  : Uso de Strings

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int i;
    int j;
    char string1[30] = "Olá alunos do IESB!";
    char string2[30];   // essa string possui lixo na memoria
    
    printf("\n>> string2 ANTES da atribuicao: %s \n", string2);

    for (i = 0; string1[i] != '\0'; i++){
       string2[i] = string1[i];       
    }
    string2[i] = '\0';

    printf("\n>> string2 DEPOIS da atribuicao: %s \n\n\n", string2);
    
    return 0;
}