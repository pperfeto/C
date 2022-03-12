#include <stdio.h>
#include <string.h>

int main() {

	char palavrasecreta[20];
	sprintf(palavrasecreta, "MELANCIA");

	int acertou = 0;
	int enforcou = 0;
    int tentativas = 0;
    char chutes[26];

    
	do {
        
        for(int i = 0; i < strlen(palavrasecreta); i++) {
            printf("_ ");
        }
        printf("\n\n");
		char chute;
		
		printf("Qual letra? ");
		scanf(" %c", &chute);
		
		} while (!acertou && !enforcou);
} 
