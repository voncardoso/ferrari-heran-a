#include "LandRouver.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include "Carro.h"
LandRouver::LandRouver()
: Carro ()
{
	this -> modeloLand = 0;
	this -> tipoTetoSolar =0;
}

LandRouver::LandRouver(int _potencia, int _roda, int _cor, int _modeloLand, int _tipoTetoSolar)
: Carro (_potencia,  _roda,  _cor)
{
	this -> modeloLand = _modeloLand;
	this -> tipoTetoSolar = _tipoTetoSolar;
}

LandRouver::LandRouver(const LandRouver &land )
: Carro( static_cast< LandRouver >( land ) )
{

	this -> modeloLand = land.modeloLand;
	this -> tipoTetoSolar = land.tipoTetoSolar;
	
}

LandRouver::~LandRouver()
{
	
}

void LandRouver::escolhaLandRouver(int modeloLand)
{
		cout << " \n --- MODELO --- \n " ;
	
	if (this -> modeloLand == 1 )
	{
		cout << " TIPO: VELAR \n " ;
	} else
		
		if (this -> modeloLand == 2   )
		{
			cout << " TIPO: DISCOVERY   \n " ;
		} else 
			
			if (this -> modeloLand == 3 )
			{
				cout << " TIPO: DISCOVERY SPORT \n " ;
			} else
				
				if (this -> modeloLand == 4 )
				{
					cout << " TIPO: RANGER ROUVER EVOQUE  \n " ;
				}
}

void LandRouver::tetoSolar(int tipoTetoSolar)
{
			cout << " \n --- TETO SOLAR --- \n " ;
	
	if (this -> tipoTetoSolar == 1 )
	{
		cout << " TIPO: teto solar normal \n " ;
	} else
		
		if (this -> tipoTetoSolar == 2   )
		{
			cout << " TIPO: teto solar panoramico \n " ;
		} 
}

const LandRouver LandRouver:: operator = (const LandRouver &land) 
{

	*static_cast< Carro * >( this ) = static_cast< Carro >( land );	
	this -> modeloLand = land.modeloLand;
	this -> tipoTetoSolar = land.tipoTetoSolar;
	
	return *this;
}

ostream &operator<<( ostream &out, const LandRouver &land )
{
	out << 	"Carro: " << static_cast< Carro >( land ) << '\t';
	out << land.tipoTetoSolar;
	out << land.modeloLand;
}


bool LandRouver::operator ==(const LandRouver &land)
{
	if (modeloLand == land.modeloLand)
	{
		return true;
	}else 
		return false;
		if (tipoTetoSolar == land.tipoTetoSolar)
		{
			return true;
		}else
			return false;
}
 
int LandRouver::operator !=(LandRouver &land)
{
	if (modeloLand != land.modeloLand)
	{
		return 0;
	}else
		return 0;
}

