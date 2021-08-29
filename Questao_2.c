#include <stdio.h>

int main()
{
    float num1,num2,num3;
    int maior, menor;

    printf("Digite o primeiro número: ");
    scanf("%f",&num1);
    printf("Digite o segundo número: ");
    scanf("%f",&num2);
    printf("Digite o terceiro número: ");
    scanf("%f",&num3);

    if(num1 > num2 && num1 > num3)
    {
        maior = num1;
    }
    else
    {
        if(num2 > num3)
        {
            maior = num2;
        }
        else
        {
            maior = num3;
        }
    }
    if(num1 < num2 && num1 < num3)
    {
        menor = num1;
    }
    else
    {
        if(num2 < num3)
        {
            menor = num2;
        }
        else
        {
            menor = num3;
        }
    }

    printf("O maior número é %d\n",maior);
    printf("O menor número é %d",menor);

    return 0;
}
