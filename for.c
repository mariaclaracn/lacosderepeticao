#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i; //Declara��o da variavel do tipo inteiro

	for(i = 1; i <= 100; i++){ // loop for para percorrer at� 100
		
		if(i %2 == 0){ // express�o condicional para conferir quais os numeros s�o pares 
			printf("Par = %d\n",i); // imprime os numeros pares
		}
	}
	
	system("pause");
	return 0;
}
