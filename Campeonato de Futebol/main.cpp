#include <stdio.h>
#include <iostream>

typedef struct equipe
{
    char nome[20];
    int codigo, jogos, vitorias, empates, derrotas, auto_gols, pontos, gols_marcados, gols_sofridos, amarelos, vermelhos;
}equipe;

equipe vect1[100];

typedef struct jogador
{
    char nome[20];
    int numero, codigo_equipe, jogos, gols_marcados, gols_sofridos, cartoes_amarelos, cartoes_vermelhos, pos;
}jogador;

jogador vect2[100];

typedef struct jogos
{
    int codigo, codigo_equipe1, codigo_equipe2, resultado1, resultado2;
}jogos;

jogos vect3[100];

int main()
{
    int opcao;
    void menu1();
    void menu2();

        system("clear");

    printf("1: Campeonato de Futebol \n");
    printf("2: Gestão de Dados \n");
    printf("3: Sair \n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
        menu1();
        break;
        case 2:
        menu2();
        break;
        case 3:
        break;
    }
}

void menu1()
{
    int opcao;
    void menu_classificacoes();
    system("clear");

    printf("GESTÃO DO CAMPEONATO DE FUTEBOL \n");
    printf("0: Voltar \n");
    printf("1: Classificações \n");
    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 0:
        return;
        case 1:
        menu_classificacoes();
        break;
    }
}

void menu_classificacoes()
{
    system("clear");
}

void menu2()
{
    int opcao;
    void menu_inserir(), menu_visualizar(), menu_editar(), menu_apagar();
    system("clear");

    printf("GESTÃO DE DADOS \n");
    printf("0: Voltar \n");
    printf("1: Inserir \n");
    printf("2: Visualizar \n");
    printf("3: Editar \n");
    printf("4: Apagar \n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 0:
        return;
        case 1:
        menu_inserir();
        break;
        case 2:
        menu_visualizar();
        break;
        case 3:
        menu_editar();
        break;
        case 4:
        menu_apagar();
        break;
    }
}

void menu_inserir()
{
    int opcao;
    void nova_equipe();
    system("clear");

    printf()
}

void menu_visualizar()
{

}

void menu_editar()
{

}

void menu_apagar()
{

}
    //return 0;

