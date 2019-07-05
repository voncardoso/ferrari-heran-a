#include "Lamborghini.h"
#include "Carro.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
using std::string;
using namespace std;
using std::cout;
using std::cin;

Lamborghini::Lamborghini()
: Carro ()
{
	this -> modeloLamborg = 0;
	this -> multimidia = 0;
}

Lamborghini::Lamborghini(int _potencia, int _roda, int _cor, int _modeloLamborg, int _multimidia)
 :Carro (_potencia,_roda,_cor)
{
	this -> modeloLamborg = _modeloLamborg;
	
	this -> multimidia = _multimidia;
}

Lamborghini::Lamborghini(const Lamborghini & lamborg)
: Carro ( static_cast <Carro> (lamborg))
{
	multimidia = lamborg.multimidia;
	
	modeloLamborg = lamborg.modeloLamborg;
}

Lamborghini::~Lamborghini()
{
	
}

void Lamborghini::escolhaLamborghini(int modeloLamborg)
{
	
		cout << " \n --- MODELO --- \n " ;
	
	if (this -> modeloLamborg == 1 )
	{
		cout << " TIPO: Avantador S Roadster \n " ;
	} else
		
		if (this -> modeloLamborg == 2   )
		{
			cout << " TIPO: Aventador \n " ;
		} else 
			
			if (this -> modeloLamborg == 3 )
			{
				cout << " TIPO: Huracán \n " ;
			} else
				
				if (this -> modeloLamborg == 4 )
				{
					cout << " TIPO: Urus \n " ;
				}

}

void Lamborghini::escolhaMultimidia(int multimidia)
{
		if (this -> modeloLamborg == 1 )
	{
		cout << "MULTIMIDIA: 17 polegadas, GPS e ANDROID AUTO \n " ;
	} else
		
		if (this -> modeloLamborg == 2   )
		{
			cout << "MULTIMIDIA: 19 polegadas, GPS, ANDROID AUTO E CAR PLAY  \n " ;
		} else 
			
			if (this -> modeloLamborg == 3 )
			{
				cout << "MULTIMIDIA: 20 polegadas, GPS, ANDROID AUTO E CAR PLAY \n " ;
			}
}

const Lamborghini Lamborghini:: operator = (const Lamborghini &lamborg) 
{
	* static_cast <Carro *> ( this ) = static_cast <Carro> (lamborg);
	this ->modeloLamborg = lamborg.modeloLamborg;	
	this -> multimidia = lamborg.multimidia;		
	
	return *this;	
}

ostream &operator<<( ostream &out, const Lamborghini &lamborg )
{
	out << " Carro : " << static_cast < Carro > (lamborg) <<'\t';
	out << "MODELO DA LAMBORGHINI : " << lamborg.modeloLamborg;
	out << "MULTIMIDIA LAMBORGHINI: " << lamborg.multimidia;
}


bool Lamborghini::operator ==(const Lamborghini &Lamborghini)
{
	if (modeloLamborg == Lamborghini.modeloLamborg)
	{
		return true;
	}else 
		return false;
		
		if ( multimidia  == Lamborghini.multimidia )
		{
			return true;
		}else
			return false;
}
 
int Lamborghini::operator !=(Lamborghini &Lamborghini)
{
	if (multimidia != Lamborghini.multimidia)
	{
		return 0;
	}else
		return 1;
}

