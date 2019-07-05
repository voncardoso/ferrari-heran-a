#ifndef LAMBORGHINI_H
#define LAMBORGHINI_H
#include "Carro.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
using std::string;
using namespace std;
using std::cout;
using std::cin;

class Lamborghini: public Carro
{
	friend ostream & operator << (ostream &, const Lamborghini &);
	public:
		Lamborghini(int, int, int, int, int);
		
		Lamborghini(const Lamborghini &);
		
		Lamborghini();
		
		virtual ~Lamborghini();
		
		void escolhaLamborghini(int);
		
		void escolhaMultimidia(int);
		
		//----------- SOBRECARGA DE OPERADORES--------------------
		
		const Lamborghini operator = (const Lamborghini &);
		
		int operator != ( Lamborghini&);
		
		bool operator == (const Lamborghini &);
		
	private:
		
		int modeloLamborg;
		int multimidia;
		
};

#endif
