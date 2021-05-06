#include "Jogador.hpp"  
	
int Jogador::ultimoNumJogador = 0;

Jogador::Jogador(string nome, float s)
{
    this->nome = nome;
    this->numJogador = geraNumJogador();
    salario = s >= 0 ? s : 0.0;
}

void Jogador::JogadorImprime()
{
    cout << numJogador << " - " << nome << " - " << salario <<" - " << areaDeAtuacao<< endl;
}

int Jogador::geraNumJogador()
{
    ultimoNumJogador++;
    return ultimoNumJogador;
}

string Jogador::getNome()
{
    return nome;
}

int Jogador::getNumJogador()
{
    return numJogador;
}

float Jogador::getSalario()
{
    return salario;
}

void Jogador::setSalario(float s)
{
    salario = s >= 0 ? s : 0.0;
}

void Jogador::setSalarioLiquido()
{
    float inss=0;
    float desc=0;
    if(salario = 1100,00){
        salarioL=salario-(salario*7.5)/100;
    }else if(salario = 2000,00){
        inss= (salario*9)/100;
        desc= (salario*7,5)/100;
        salarioL=(salario-desc)-inss;
    }else if(salario = 3100,00){
        inss= (salario*12)/100;
        desc= (salario*15)/100;
        salarioL=(salario-desc)-inss;
    }else if(salario = 4100,00){
        inss= (salario*14)/100;
        desc= (salario*22)/100;
        salarioL=(salario-desc)-inss;
    }else if(salario > 4100,00){
        inss= (salario*14)/100;
        desc= (salario*27)/100;
        salarioL=(salario-desc)-inss;
    }
}

float Jogador::getSalarioL()
{
    return salarioL;
}

string Jogador::getNacionalidade()
{
    return nacionalidade;
}

string Jogador::getAreaDeAtuacao()
{
    return areaDeAtuacao;
}

/*int Jogador::getDataDeNacimento()
{
    return dataDeNacimento;
}
*/
