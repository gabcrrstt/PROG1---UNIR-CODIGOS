// GCAR

#include <stdio.h>
#include <stdlib.h>


void maiusculo(char nome[]){
    int i = 0;
    while(nome[i] != '\0'){
        nome[i] = toupper(nome[i]);
        i++;
    }
    nome[i] = '\0';
}

int main() {
    char nome[100];

    printf("Digite o nome completo:\n");
    gets(nome);


    for (int i = 0; nome[i] != 0; i++) {
        if (nome[i] != ' ' && (i == 0 || nome[i - 1] == ' '))
            printf("%c.", nome[i]);
             nome[i] = toupper(nome[i]);
    }

 return 0;
}

