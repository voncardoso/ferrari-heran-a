#include "LambogMotores.h"
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

LambogMotores::LambogMotores()
:Lamborghini()
{
	this -> escapamento = 0;
	
	this -> tipoMotor = 0;
}

LambogMotores::LambogMotores (int _potencia, int _roda, int _cor, int _modeloLamborg, int _multimidia,int _tipoMotor, int _escapamento):
Lamborghini ( _potencia,_roda, _cor,_modeloLamborg,_multimidia)
{
	this -> escapamento = _escapamento;
	
	this -> tipoMotor = _tipoMotor;

}

LambogMotores::LambogMotores(const LambogMotores & lamborgM )
: Lamborghini ( static_cast< Lamborghini >( lamborgM ))
{
	this -> escapamento = lamborgM.escapamento;
	
	this -> tipoMotor = lamborgM.tipoMotor;
}

void LambogMotores::escolhaTipoMotor(int tipoMotor){
		cout << " \n --- TIPO DE MOTOR --- \n " ;
	
	if (this -> tipoMotor == 1 )
	{
		cout << " TIPO:  ELETRICO DE 500 CV \n " ;
	} else
		
		if (this -> tipoMotor == 2   )
		{
			cout << " TIPO: DISEL DE 600 \n " ;
		} else 
			
			if (this -> tipoMotor == 3 )
			{
				cout << " TIPO: HIBRIDO 500 CV NA COMBUSTAO E 150 CV NO ELETRICO\n " ;
			} 
}

void LambogMotores::tipoEscapamento(int escapamento)
{
		cout << " \n --- ESCAPAMENTO --- \n " ;
	
	if (this -> escapamento == 1 )
	{
		cout << "ESCAPAMENTO: NORMAL \n " ;
	} else
		
		if (this -> escapamento == 2   )
		{
			cout << "ESCAPAMENTO: DUPLO \n " ;
		} else 
			
			if (this -> escapamento== 3 )
			{
				cout << "ESCAPAMENTO : TRIPLO \n " ;
			} 
}

const LambogMotores LambogMotores:: operator = (const LambogMotores & LambogM) 
{
	*static_cast< Lamborghini * >( this ) = static_cast< Lamborghini >( LambogM );
	this -> tipoMotor = LambogM.tipoMotor;
	this -> escapamento=LambogM.escapamento;
	
	return *this;			
}

ostream &operator <<( ostream &out, const LambogMotores &lamborgM)
{
	out << 	"Centro: " << static_cast< Lamborghini >( lamborgM ) << '\t';
	out << lamborgM.tipoMotor;
	out << lamborgM.escapamento;
	
}


bool LambogMotores::operator ==(const LambogMotores &LambogMotores)
{
	if (escapamento == LambogMotores.escapamento)
	{
		return true;
	}else 
		return false;
		if (tipoMotor == LambogMotores.tipoMotor)
		{
			return true;
		}else
			return false;
}
 
int LambogMotores::operator !=(LambogMotores &LambogMotores)
{
	if (escapamento != LambogMotores.escapamento)
	{
		return 0;
	}else
		return 1;
		
			if (tipoMotor != LambogMotores.tipoMotor)
			{
				return 0;
			}else
				return 1;
}
LambogMotores::~LambogMotores()
{
	
}
