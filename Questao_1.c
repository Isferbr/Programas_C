#include <stdio.h>

int main()
{
    int velocidade, multa;

    printf("Digite a velocidade do carro em (km/h): ");
    scanf("%d",&velocidade);

    if(velocidade > 80)
    {
        multa = (velocidade - 80) * 5;
        printf("Você foi multado e o valor a pagar é R$ %.2d",multa);
    }
    else
    {
        printf("Você não foi multado");
    }
    return 0;
}
