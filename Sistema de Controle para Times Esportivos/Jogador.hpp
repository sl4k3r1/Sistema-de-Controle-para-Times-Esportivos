#ifndef Jogador_hpp
#define Jogador_hpp
#pragma once
#include<iostream>
	
using namespace std;

class Jogador  
{
	private:
        string nome;
        int numJogador;
        int dataDeNacimento;
        string nacionalidade;
        int static ultimoNumJogador;
        int geraNumJogador();
        float salario;
        float salarioL;

	public:

		Jogador(string n, float s);
		void JogadorImprime();
		string getNome();
		int getNumJogador();
		int getDataDeNacimento();
		string getNacionalidade();
		string getAreaDeAtuacao();
		float getSalario();
        void setSalario(float s);
        void salarioLiquido();
        string setAreaDeAtuacao();
        void setNome(string n);

};
#endif