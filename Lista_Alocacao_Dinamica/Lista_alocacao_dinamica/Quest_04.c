#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int *interseccao()
{
    int *x1, *x2, *x3;
    int cont2=0,flag=0,cont3=0,cont4=0,n1,n2,qtd=0;

    printf("Digite o tamanho do vetor 1: ");
    scanf("%d", &n1);
    x1=(int *)malloc(sizeof(int)*n1);
    printf("Digite o tamanho do vetor 2: ");
    scanf("%d", &n2);
    x2=(int *)malloc(sizeof(int)*n2);
    cont2 = 0;

    while(cont2<n1)
    {
        printf("Digite os valores do vetor 1: ");
        scanf("%d", &x1[cont2]);
        cont2++;
    }
    cont2 = 0;

    while(cont2<n2)
    {
    printf("Digite os valores do vetor 2: ");
    scanf("%d", &x2[cont2]);
    cont2++;
    }
    qtd=n1+n2;
    x3=(int *)malloc(sizeof(int)*qtd);
    cont2 = 0;
    cont3 = 0;
    cont4 =0 ;

    while(cont2<n1)
    {
        while(cont3<n2)
        {
            if(x1[cont2]==x2[cont3])
            {
                x3[cont4]=x1[cont2];
                cont4++;
                cont3=n2;
            }
            cont3++;
            }
            cont2++;
            cont3 = 0;
    }
    cont2 = 0;
    printf("A interseccao dos dois vetores e: ");
    while(cont2<cont4)
    {
        printf(" %d", x3[cont2]);
        cont2++;
    }
}
