#include "LandRouverPassageiros.h"
#include "LandRouver.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include "Carro.h"
using std::string;
using namespace std;
using std::cout;
using std::cin;
LandRouverPassageiros::LandRouverPassageiros()
:LandRouver()
{
	this -> quantLugares =0; 
	this -> tracao =0;
}

LandRouverPassageiros::LandRouverPassageiros(int _potencia, int _roda, int _cor, int _modeloLand, int _tipoTetoSolar, int _quantLugares, int _tracao)
: LandRouver(_potencia,_roda,_cor,_modeloLand,_tipoTetoSolar)
{
	this -> quantLugares = _quantLugares; 
	this -> tracao = _tracao;
}

LandRouverPassageiros::LandRouverPassageiros (const LandRouverPassageiros & landP)
: LandRouver( static_cast< LandRouver >( landP ) )
{
	this -> quantLugares = landP.quantLugares; 
	this -> tracao = landP.tracao;
}

LandRouverPassageiros::~LandRouverPassageiros()
{
	
}

void LandRouverPassageiros::escolhaQuantLugares(int quantLugares)
{
	cout << " \n --- LUGARES --- \n " ;
	
	if (this ->quantLugares== 1 )
	{
		cout << " 5 LUGARES \n " ;
	} else
		
		if (this -> quantLugares == 2   )
		{
			cout << " 7 LUGARES   \n " ;
		} 
}

void LandRouverPassageiros::escolhaTracao(int tracao)
{
			cout << " \n --- ESCOLHA TRACAO--- \n " ;
	
	if (this -> tracao == 1 )
	{
		cout << " TIPO: INTEGRAL \n " ;
	} else
		
		if (this -> tracao == 2   )
		{
			cout << " TIPO: 4X2   \n " ;
		} else 
			
			if (this -> tracao == 3 )
			{
				cout << " TIPO: 4X4 \n " ;
			} 	
}

const LandRouverPassageiros LandRouverPassageiros::operator = (const  LandRouverPassageiros  &landP) 
{
	*static_cast< LandRouver * >( this ) = static_cast< LandRouver >( landP );
	
	this -> quantLugares = landP.quantLugares;
	this -> tracao = landP.tracao;

	return *this;
}

ostream &operator<<( ostream &out, const LandRouverPassageiros &landP )
{
	out << 	"Centro: " << static_cast< LandRouver >( landP ) << '\t';
	out << landP.quantLugares;
	out << landP.tracao;
}


bool LandRouverPassageiros::operator ==(const LandRouverPassageiros &landP)
{
	if (quantLugares == landP.quantLugares)
	{
		return true;
	}else 
		return false;
		
		if (tracao == landP.tracao)
		{
			return true;
		}else
			return false;
}
 
int LandRouverPassageiros::operator !=(LandRouverPassageiros &landP)
{
	if (quantLugares != landP.quantLugares)
	{
		return 0;
	}else
		return 1;
}

