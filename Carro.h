#ifndef CARRO_H
#define CARRO_H
#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
#include "Cliente.h"
using std::string;
using namespace std;
using std::cout;
using std::cin;


class Carro
{
	friend ostream & operator << (ostream &, const Carro &);
	public:
		
		Carro (int, int, int);
		
		Carro();
		
		Carro( const Carro &);
		
	    virtual	~Carro();
		
		void escolhaPotencia(int potencia);
		
		virtual	void escolhaModelo(int modelo);
		
		void escolhaRoda(int roda);
		
		
		//----------- SOBRECARGA DE OPERADORES-------------------- 
		
		const Carro operator = (const Carro &);
		
		int operator != (Carro &);
		
		bool operator == (const Carro &);
		
		
	private:
		
		int potencia;
		int roda;
		int cor;
		
		Cliente cadastro;
		
};

#endif
