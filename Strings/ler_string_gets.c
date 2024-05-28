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
    
    char str[30];    
    
    printf("\n## Estamos usando a função gets() ## \n");

    printf("\n>> str ANTES da leitura: %s \n", str);
    printf(">> Digite o valor desejado da string: ");
    
    // captura uma string a partir do teclado
    gets(str);
    
    printf("\n>> str DEPOIS da leitura: %s \n\n", str);
    
    return 0;
}