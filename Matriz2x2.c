// GCAR
#include <stdio.h>
#include <stdlib.h>

int main()
{   int m[3][3],linha, coluna;

    printf("\n entre com os valores: \n");

   for (linha=0;linha<3;linha++)
        for( coluna=0;coluna<3;coluna++){
            printf("\n Elemento[%d][%d] = ",linha,coluna);
            scanf("%d",&m[linha][coluna]);
    }
    printf("\n\n** Saida de Dados *\n\n");

  for ( linha=0; linha<3; linha++ )
    for ( coluna=0; coluna<3; coluna++ )
    {
      printf ("\nElemento[%d][%d] = %d\n", linha, coluna,m[ linha ][ coluna ]);
    }
    return 0;
}
