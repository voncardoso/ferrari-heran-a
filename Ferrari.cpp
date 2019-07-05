
#include "Ferrari.h"
#include <iostream>
#include <stdlib.h>
#include "Carro.h"
using std::string;
using namespace std;
using std::cout;
using std::cin;


Ferrari::Ferrari()
: Carro ()
{
	this -> modeloFer= 0;
}

Ferrari::Ferrari(int _potencia, int _roda, int _cor, int _modeloFer)
: Carro (_potencia,_roda,_cor)
{
	this -> modeloFer= _modeloFer;
}

Ferrari::Ferrari(const Ferrari &fer)
: Carro( static_cast< Ferrari >( fer ) )
{
	this -> modeloFer= fer.modeloFer;
}

Ferrari::~Ferrari()
{
	
}

void Ferrari::escolhaModeloFer(int modeloFer)
{
	
		cout << " \n --- MODELO --- \n " ;
	
	if (this -> modeloFer == 1 )
	{
		cout << " TIPO: 812 Superfast \n " ;
	} else
		
		if (this ->modeloFer == 2   )
		{
			cout << " TIPO: F8 Tributo \n " ;
		} else 
			
			if (this ->modeloFer == 3 )
			{
				cout << " TIPO: Ferrari 488 Pista \n " ;
			} else
				
				if (this ->modeloFer == 4 )
				{
					cout << " TIPO: Ferrari 488 Pista Spider \n " ;
				}

}
const Ferrari Ferrari:: operator = (const Ferrari &fer) 
{
	*static_cast< Carro * >( this ) = static_cast< Carro >( fer );
	this -> modeloFer = fer.modeloFer;	
	return *this;			
}

ostream &operator<<( ostream &out, const Ferrari &fer )
{
	out << 	"Carro: " << static_cast< Carro >( fer ) << '\t';
	out <<   fer.modeloFer;
}



bool Ferrari::operator == (const Ferrari &fer)
{
	if (this -> modeloFer == fer.modeloFer )
	{
		return true;
	}else 
		return false;
}

int Ferrari::operator !=(Ferrari &Fer)
{
	if (this -> modeloFer != Fer.modeloFer)
	{
		return 0;
	}else
		return 1;
}



