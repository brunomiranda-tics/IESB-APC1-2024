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

int main(){
	int i = 0;
	
	// tipo especial de variavel que armazena mais de um valor: ARRAY
	int array[] = {5, 10, 15, 20, 25};
		
	// acessar um item especifico do array
	printf("Valor armazenado no item [0]: %d \n\n", array[0]);
	
	// mudar um item especifico do array
	array[2] = 100;
	printf("Valor armazenado no item [2]: %d \n\n", array[2]);

	for (i = 0; i < 5; i++){
		// imprime cada valor do array em uma linha
		printf("%d\n", array[i]);
	}	
	
	system("pause");
    return 0;
}
