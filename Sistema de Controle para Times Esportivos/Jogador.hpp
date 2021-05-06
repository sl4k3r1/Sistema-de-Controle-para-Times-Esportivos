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
        string areaDeAtuacao;
        int static ultimoNumJogador;
        int geraNumJogador();
        float salario;
        float salarioL;
        //int idade;

	public:

		Jogador(string nome, float s);
		void JogadorImprime();
		string getNome();
		int getNumJogador();
		//int getDataDeNacimento();
        //void setDataDeNacimento(int dd, int mm, int year);
		string getNacionalidade();
		string getAreaDeAtuacao();
		float getSalario();
        float getSalarioL();
        void setSalario(float s);
        void setSalarioLiquido();

};
#endif
