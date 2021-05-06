#ifndef TIME_H
#define TIME_H
#pragma once
#include<iostream>

using namespace std;
	
class Time  
{
	private:
        string nome;
        int numTime;
        int static ultimoNumTime;
        int geraNumTime();

    public:

		Time(string nome);
        int getNumJogador();


};
#endif