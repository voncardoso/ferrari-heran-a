#include "FerrariMotores.h"
#include "Carro.h"
#include "Ferrari.h"

FerrariMotores::FerrariMotores()
:Ferrari()
{
	this -> motor =0;
	this -> aumentoPot = 0;
}

FerrariMotores::FerrariMotores(int _potencia, int _roda, int _cor, int _modeloFer, int _motor, int _aumentoPot):
	Ferrari(_potencia,_roda,_cor,_modeloFer)
{
	this -> motor = _motor;
	this -> aumentoPot = _aumentoPot;
}

FerrariMotores::FerrariMotores(const FerrariMotores &ferOut)
: Ferrari( static_cast< Ferrari >( ferOut) )
{
	this -> motor = ferOut.motor;
	
	this -> aumentoPot = ferOut.aumentoPot;
	
}

FerrariMotores::~FerrariMotores()
{
	
}

void FerrariMotores::escolhaMotor(int motor, int uamentoPot, int _potencia)
{
	if (this -> motor == 1)
	{
		if (_potencia == 1)
		{
			cout << "MOTOR TURBO : 2.0 E 18V";
			uamentoPot = 500 + 110;
			cout <<"\n Potencia final :" << uamentoPot << " CV\n ";
		}else
			if (_potencia == 2)
			{
				cout << "MOTOR TURBO : 2.0 E 18V";
				uamentoPot = 650 + 110;
				cout <<"\n Potencia final :" << uamentoPot << " CV\n ";
			}else
				if (_potencia == 2)
				{
					cout << "MOTOR TURBO : 2.0 E 18V ";
					uamentoPot = 720 + 110;
					cout <<"\n Potencia final :" << uamentoPot << " CV\n";
				}else
					if (_potencia == 4)
					{
						cout << "MOTOR TURBO : 2.0 E 18V ";
						uamentoPot = 1000 + 110;
						cout <<"\n Potencia final :" << uamentoPot << " CV\n";
					}
		}else
		if (this -> motor == 2)
		{
			if (_potencia == 1)
			{
				cout << "MOTOR TURBO : 2.0 E 18V ";
				uamentoPot = 500 + 200;
				cout <<"\n Potencia final :" << uamentoPot << " CV\n";
			}else
				if (_potencia == 2)
				{
					cout << "MOTOR TURBO : 2.0 E 18V ";
					uamentoPot = 650 + 200;
					cout <<"\n Potencia final :" << uamentoPot << " CV\n";
				}else
					if (_potencia == 3)
					{
						cout << "MOTOR TURBO : 2.0 E 18V ";
						uamentoPot = 720 + 200;
						cout <<"\n Potencia final :" << uamentoPot << " CV\n";
				}else
					if (_potencia == 4)
					{
						cout << "MOTOR TURBO : 2.0 E 18V ";
						uamentoPot = 1000 + 200;
						cout <<"\n Potencia final :" << uamentoPot << " CV \n";
					}

}
	cout << "\nVOCE TEVE UM AUMENTO NA POTENCIA\n";
}

const FerrariMotores FerrariMotores:: operator = (const FerrariMotores &ferrariMotores) 
{
	*static_cast< Ferrari * >( this ) = static_cast< Ferrari >(ferrariMotores);
	
	this -> motor = ferrariMotores.motor;	
	this -> aumentoPot = ferrariMotores.aumentoPot;		
	
	return *this;	
}

ostream &operator<<( ostream &out, const FerrariMotores &ferrariMotores )
{
	out << 	"Ferrari: " << static_cast< Ferrari >( ferrariMotores ) << '\t';
	out << "Motor :" <<ferrariMotores.motor;
	out << "Ganho na potencia" << ferrariMotores.aumentoPot;

}


bool FerrariMotores::operator == (const FerrariMotores &ferrariMotores)
{
	if (this -> aumentoPot == ferrariMotores.aumentoPot )
	{
		
		return true;
	}else 
		return false;
		
			if (this -> motor = ferrariMotores.motor)
			{
				return true;
			}else
				return false;
}

int FerrariMotores::operator !=(FerrariMotores &ferrariMotores)
{
	if (aumentoPot != ferrariMotores.aumentoPot)
	{
		return 0;
	}else
		return 1;
			if (motor != ferrariMotores.motor)
			{
				return 0;
			}else
				return 1;
}

