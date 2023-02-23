#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Criando um ponteiro para o vetor
    int *p;
    int i, quant_elementos;

    // Recebendo a quantidade de elementos
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d",&quant_elementos);

    // Alocando a memória para o vetor de acordo com a quantidade
    // de elementos do vetor
    p = (int *)(malloc(quant_elementos * sizeof(int)));

    // Caso não seja possível alocar memória suficiente enviar mensagem
    // e sair do programa com exit(1);
    if(p == NULL)
    {
        printf("\nErro de alocação de memória");
        system("pause");
        exit(1);
    }
    printf("\n");

    // Recebendo os dados para o vetor
    for(i = 0; i < quant_elementos; i++)
    {
        printf("Digite o número para o índice [%d] : ",i);
        scanf("%d",&p[i]);
    }
    printf("\n");

    // Percorre o vetor mostrando valores armazenados
    for(i = 0; i < quant_elementos; i++)
    {
        printf("Valor armazenado no elemento de índice [%d] = %d\n", i, p[i]);
    }
    printf("\n");

    // Liberando a memória que foi alocada
    free(p);
    system("pause");
    return (0);
}
