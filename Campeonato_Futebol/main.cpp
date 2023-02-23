#include <stdio.h>
#include <iostream>

using namespace std;
#struct times{
string nome;
#int gols_feitos, gols_sofridos, vitorias, derrotas, empates, pontos, saldo;
#}

int pontos(int gols_feitos, int gols_sofridos){
    int i, valor;
    if (gols_feitos > gols_sofridos){
        valor = 3;
        return valor;
    }
    if (gols_feitos == gols_sofridos){
        valor = 1;
        return valor;
    }
    if (gols_feitos < gols_sofridos){
        valor = 0;
        return valor;
    }
}

int equipe = 0;
times tabela[4];
void consultar_classificacao();
void menu();
void cadastro();

int main()
{
    void menu()
    {
        cout << "Digite uma opção \n";
        cout << "1 - Digitar resultados \n";
        cout << "2 - Consultar tabela \n";
        cout << "3 - Sair \n";
        cin >> escolha_time;
        switch(escolha_time){
            case 1:
            cadastro();
            break;
            case 2:
            consultar_classificacao();
            break;
            case 3:
            exit(0);
            break;
        }
    }

    int i, ponto = 0, vitoria = 0, derrota = 0, empate = 0;
    int gp[12] = {3, 2, 1, 0, 2, 4, 1, 0, 0, 1, 0, 1};
    int gc[12] = {0, 2, 0, 0, 2, 1, 1, 0, 2, 2, 0, 2};
    for (i = 0; i < 12; i++){
        if (gp[i] > gc[i]){
            ponto += 3;
            vitoria += 1;
        }
        else if(gp[i] < gc[i]){
            ponto += 0;
            derrota += 1;
        }
        else{
            ponto += 1;
            empate += 1;
        }
    }
    printf ("O flamengo fez %d pontos.\n", ponto);
    printf ("O flamengo venceu %d jogos.\n", vitoria);
    printf ("O flamengo perdeu %d jogos.\n", derrota);
    printf ("O flamengo empatou %d jogos.\n", empate);
}
