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
        int dataDeNacimento[3];
        string nacionalidade;
        string areaDeAtuacao;
        int static ultimoNumJogador;
        int geraNumJogador();
        float salario;
        float salarioL;

	public:

		Jogador(string nome, float s,string areaAtuacao,int dia,int mes,int ano,string nacionalidade);
		Jogador();
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
        void setSalarioLiquido(float s);
        void setAtuacao(string atuacao);
        void setNascimento(int dia,int mes,int ano);
        void setNacionalidade(string _nacionalidade);
};
#endif
