#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include "Jogador.hpp"

using namespace std;

int main()
{
    setlocale(LC_ALL,"pt-br");
    bool executando = true;
    int respostaUsuario = 0;
    Jogador jogadores[100];
    do
    {
        cout<< "------------------"<<endl;
        cout<< "(1) Adicionar Jogador"<<endl;
        cout<< "(2) Olhar Time"<<endl;
        cout<< "(3) Olhar Empresa"<<endl;
        cout<< "(4) Sair do programa"<<endl;
        cout<< "------------------"<<endl;
        cout<< "Escolha uma opção valida: ";
        cin >> respostaUsuario;

        string nome = " ";
        string nacionalidade = " ";
        string areaAtuacao= " ";
        Jogador novoJogador = Jogador();
        int nascimento[3];
        float salario = 0;
        int counter = 0;

        switch (respostaUsuario)
        {
            case 1:
                cout<<"Criar jogador"<<endl;
                
                cout<<"Nome do jogador: ";
                cin>>nome;

                cout<<"Salario bruto: ";
                cin >> salario;
                
                cout<<"Data de nascimento: ";
                cout<<"Dia: ";
                cin>>nascimento[0];
                cout<<"Mes: ";
                cin>>nascimento[1];
                cout<<"Ano: ";
                cin>>nascimento[2];

                cout<<"Area de atuação: ";
                cin >> areaAtuacao;

                cout<<"Nacionalidade: ";
                cin >> nacionalidade;

                novoJogador = Jogador(nome,salario,areaAtuacao,nascimento[0],nascimento[1],nascimento[2],nacionalidade);
                jogadores[counter] = novoJogador;
                counter++;
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                executando = false;
                cout<<"Obrigado"<<endl; 
                break;
        }
        system("cls");
    } while (executando);
    return 0;    
}