
#include "Carro.h"
#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
using std::string;
using namespace std;
using std::cout;
using std::cin;


Carro::Carro ( )
:potencia(0),roda(0),cor (0) 
{

}

Carro::Carro (int _potencia, int _roda, int _cor )
:potencia ( _potencia), roda(_roda), cor(_cor)
{

	
}

Carro::Carro(const Carro &carro){
	
	this ->	potencia = carro.potencia;
	
	this -> roda = carro.roda;
	
	this -> cor = carro.cor;
	

}

Carro::~Carro()
{
	
}


void Carro::escolhaModelo(int _cor){
		cout << "\n----COR----\n";

	if (cor == 1 )
	{
		cout << " COR: PRETO NINJA \n " ;
	} else
		
		if (cor == 2   )
		{
			cout << " COR: AMARELO MODERNO \n " ;
		}else
			if (cor == 3 )
			{
				cout << " COR: VERMELHO CORSA \n " ;
			} else	
				if (cor == 4 )
				{
					cout << " COR: BRANCO AVUS \n " ;
				}
}

void Carro::escolhaPotencia(int potencia)
{
	cout << "\n----MOTOR----\n";

	if ( potencia == 1)
	{
		cout << " POTENCIA INICIAL: 500 CV\n";
	}else
		
			if ( potencia == 2)
			{
				cout << "  POTENCIA INICIAL: 650 CV\n";
			}else
			
					if ( potencia == 3)
					{
						cout << " POTENCIA INICIAL: 720 CV\n";
					}else
					
						if ( potencia == 4)
						{
							cout << " POTENCIA INICIAL: 1000 CV\n";
						}
 } 
 
 void Carro::escolhaRoda(int roda)
 {
 	cout << "\n----RODA----\n";

	if ( roda == 1)
	{
		cout << " ARO : 19 \n";
	}else
		
			if ( roda == 2)
			{
				cout << "  ARO : 20 \n";
			}else
			
					if ( roda == 3)
					{
						cout << " ARO : 21 \n";
					}else
					
						if ( roda == 4)
						{
							cout << " ARO : 23 \n";
						}
 }
 
const Carro Carro:: operator = (const Carro &carro) 
{
	cor = carro.cor;
	potencia = carro.potencia;
	roda = carro.roda;
	
	return *this;
				
}
ostream &operator<<( ostream &out, const Carro &carro )
{
	out << carro.potencia;
	out << carro.roda;
	out << carro.cor;
	
	return out;
}


bool Carro::operator ==(const Carro &Carro)
{
	if (potencia == Carro.potencia)
	{
		return true;
	}else 
		return false;
	
		if (roda == Carro.roda)
		{
			return true;
		}else
			return false;
}
 
int Carro::operator !=(Carro &Carro)
{
	if (cor != Carro.cor)
	{
		return 0;
	}else
		return 0;
}
