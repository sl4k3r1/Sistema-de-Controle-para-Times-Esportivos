#include "Time.hpp"  
	
Time::Time(string name)
{
    this->nome = nome;
    this->numTime = geraNumTime();
}

int Time::geraNumTime()
{
    ultimoNumTime++;
    return ultimoNumTime;
}