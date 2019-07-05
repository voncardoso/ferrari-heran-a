#ifndef LANDROUVER_H
#define LANDROUVER_H
#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
#include "Carro.h"

using std::string;
using namespace std;
using std::cout;
using std::cin;

class LandRouver : public Carro
{
	friend ostream & operator << (ostream &, const LandRouver &);
	public:
		
		LandRouver(int, int, int, int, int);
		
		LandRouver (const LandRouver &);
		
		LandRouver ();
		
		virtual ~LandRouver ();
		
		virtual	void escolhaLandRouver (int);
		
		void tetoSolar (int);
	
		//----------- SOBRECARGA DE OPERADORES--------------------
	
		const LandRouver operator = (const LandRouver  &);
		
		int operator != (LandRouver &);
		
		bool operator == (const LandRouver &);
	
	private:
		int modeloLand;
		int tipoTetoSolar;
		
};

#endif
