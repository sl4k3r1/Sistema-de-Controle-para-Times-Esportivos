#include "Jogador.hpp"  
	
int Jogador::ultimoNumJogador = 0;

Jogador::Jogador(string n, float s)
{
    this->nome = n;
    this->numJogador = geraNumJogador();
    salario = s >= 0 ? s : 0.0;
}
	
void Jogador::JogadorImprime()
{
    cout << numJogador << " - " << nome << " - " << salario << endl;
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