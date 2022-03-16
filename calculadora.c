#include <stdio.h>
#include <stdlib.h>

void(){
	int op;	
	printf("Escolha a operação: \n"
		  "1- Soma\n"
		  "2- Subtração\n"
		  "3- Multiplicação\n"
		  "4- Divisão\n");
	
	scanf("%d", &op);
	switch(op){
		case 1:
			soma();
		case 2:
			subtracao();
		case 3:
			multiplicacao();
		case 4:
			divisao();
	}
}

void numeros() {
	float numeros[20];
	do {
		int i = 0;
		scanf("%f", numeros[i]);
		i++;
		char sair;
		printf("Mais números?\n");
		printf("Se sim pressione enter\n");
		printf("Se não digite nao");
		scanf("%c ", &sair);
	} while(sair != "nao")
}

float soma() {
	float resultado;
	for(int i = 0; i < strlen(numeros)) {
		int resultado += numeros[i]; 
	}
	return resultado;
}

float subtracao() {
	float resultado;
	for(int i = 0; i < strlen(numeros)) {
		int resultado -= numeros[i]; 
	}
	return resultado;
}

float multiplicao() {
	float resultado;
	for(int i = 0; i < strlen(numeros)) {
		int resultado *= numeros[i]; 
	}
	return resultado;
}

float divisao() {
	float resultado;
	for(int i = 0; i < strlen(numeros)) {
		int resultado /= numeros[i]; 
	}
	return resultado;
}

int main() {
	operacao();
	numeros();
	calculo();
	resultado();
}
