#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i = 0; //Declara��o da variavel inteira para fazer a inplementa��o
	float media,soma,resultado; //Declara��o das variaveis do tipo float
	
	printf("Digite os valores para obter a media:\n"); //Solicita��o para entrada de dados
	
	while(i < 3){ //Loop while para percorrer a variavel ate que d� falso
		scanf("%f",&media);  //Dados inseridos do usuario
		soma += media; //Opera��o para obter a soma dos dados de entrada
		i++; //incremento
	}
	
	resultado = soma/3; //resultado da soma de dados
	
	printf("A media e %.2f \n",resultado); //Resultado imprimido com o valor da media
	
	system("pause");
	return 0;	
}
