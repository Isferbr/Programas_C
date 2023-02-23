#include <stdio.h>

int main (void)
{
    int opcao_pizza, opcao_bebida;
    float preco_pizza, preco_bebida, valor_pedido;

    printf("**************************************\n");
    printf("************** Cardápio **************\n");
    printf("**************************************\n");
    printf("*************** Pizzas ***************\n");
    printf("**************************************\n");
    printf("00 - Nenhuma Pizza selecionada \n");
    printf("01 - Pizza Mussarela - R$ 18,00 \n");
    printf("02 - Pizza Calabresa - R$ 18,00 \n");
    printf("03 - Pizza Franco com Catupiry - R$ 18,00 \n");
    printf("04 - Pizza Quatro Queijos - R$ 22,00 \n");
    printf("05 - Pizza Portuguesa - R$ 22,00 \n");
    printf("**************************************\n");
    printf("*************** Bebidas **************\n");
    printf("**************************************\n");
    printf("00 - Nenhuma Bebida selecionada \n");
    printf("01 - Suco - R$ 5,00 \n");
    printf("02 - Refrigerante Lata - R$ 4,00 \n");
    printf("03 - Refrigerante 2L - R$ 13,00 \n");
    printf("04 - Refrigerante 1L - R$ 6,00 \n");
    printf("05 - Refrigerante 1,5L - R$ 9,00 \n");
    printf("**************************************\n");
    printf("Informe o número da sua escolha de pizza: ");
    scanf("%d",&opcao_pizza);
    switch(opcao_pizza){
        case 0:
        preco_pizza = 0.0;
        break;
        case 1:
        preco_pizza = 18.00;
        break;
        case 2:
        preco_pizza = 18.00;
        break;
        case 3:
        preco_pizza = 18.00;
        break;
        case 4:
        preco_pizza = 22.00;
        break;
        case 5:
        preco_pizza = 22.00;
        break;
        default:
        printf("Opção inválida, tente novamente!");

        return preco_pizza;
    }

    printf("Informe o número da sua escolha de bebida: ");
    scanf("%d",&opcao_bebida);
    switch(opcao_bebida){
        case 0:
        preco_bebida = 0.0;
        break;
        case 1:
        preco_bebida = 5.00;
        break;
        case 2:
        preco_bebida = 4.00;
        break;
        case 3:
        preco_bebida = 13.00;
        break;
        case 4:
        preco_bebida = 6.00;
        break;
        case 5:
        preco_bebida = 9.00;
        break;
        default:
        printf("Opção inválida, tente novamente!");

        return preco_bebida;
    }

    valor_pedido = preco_pizza + preco_bebida;
    printf(" O valor do seu pedido é R$ %.2f", valor_pedido);

    return 0;
}
