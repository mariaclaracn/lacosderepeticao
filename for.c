#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i; //Declaração da variavel do tipo inteiro

	for(i = 1; i <= 100; i++){ // loop for para percorrer até 100
		
		if(i %2 == 0){ // expressão condicional para conferir quais os numeros são pares 
			printf("Par = %d\n",i); // imprime os numeros pares
		}
	}
	
	system("pause");
	return 0;
}
