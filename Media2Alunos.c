#include <stdio.h>
#include <stdlib.h>

int main(){
    //Refaça o exercício anterior, mas é desconhecida a quantidade de alunos na sala.
    //Quando ler nota = -1 finalize o programa.
    //Informe ainda: quantos alunos foram aprovados e quantos foram reprovados a média da classe e qual a maior nota lida

    float nota1, nota2, nota3, soma=0;
    float media=0;

    scanf("%f %f %f", &nota1, &nota2, &nota3);

    soma = nota1+nota2+nota3;
    media = (soma/3);

    printf("MEDIA = %.2f\n", media);

    if(media >= 6.0)
        printf("APROVADO\n");

    else
        printf("REPROVADO\n");

    if (media == -1)
    {
      printf("\nSaindo do loop\n");
      break;
    }
    return 0;

}
