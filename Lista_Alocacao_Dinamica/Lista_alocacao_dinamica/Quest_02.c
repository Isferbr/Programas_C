#include <stdio.h>
#include <stdlib.h>

main()
{
    int *p;
    int i, quant_elementos;

    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &quant_elementos);

    int criar(int *p, int quant_elementos);
    criar(p, quant_elementos);

    printf("\nPreencha o vetor agora.\n");
    for(i = 0; i < quant_elementos; i++)
    {
        printf("Vetor [%d]: ", i);
        scanf("%d", &p[i]);
    }

    void imprima(int *p, int quant_elementos);
    imprima(p, quant_elementos);

    void libera(int *p);
    libera(p);

    printf("\nO vetor depois de liberar.\n");
    for(i = 0; i < quant_elementos; i++)
    {
        printf("Vetor [%d]: %d\n", i, p[i]);
    }
}
int criar(int *p, int quant_elementos)
{
    p = (int *)(malloc(quant_elementos * sizeof(int)));
    return *p;
}
void imprima(int *p, int quant_elementos)
{
    int i;

    printf("\nO vetor ficou da seguinte forma.\n");
    for(i = 0; i < quant_elementos; i++)
    {
        printf("Vetor [%d]: %d\n", i, p[i]);
    }
}
void libera(int *p)
{
    free(p);
}
