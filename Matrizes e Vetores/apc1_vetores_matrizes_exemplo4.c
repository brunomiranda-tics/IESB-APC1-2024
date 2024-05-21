/*
 ============================================================================
 Instituição: IESB
 Disciplina : Algoritmos e Programação de Computadores I (APCI)
 Objetivo   : Fornecer conhecimentos e práticas em programação na linguagem C.
 Professor  : Bruno Miranda [bruno.marcos@iesb.edu.br]
 Data       : Mai2024

 Algoritmo  : Uso de array em C

 ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	int j = 0;
	
	// tipo especial de variavel que armazena mais de um valor: ARRAY
	int array[100];

	// preenche todo o espaço do array
	for (i = 0; i < 100; i++){
		array[i] = i + 1;
	}
	
	for (j = 0; j < 100; j++){
		// imprime cada valor do array em uma linha
		printf("%d\n", array[j]);
	}	
	
	system("pause");
    return 0;
}
