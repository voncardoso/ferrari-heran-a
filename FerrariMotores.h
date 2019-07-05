#ifndef FERRARIMOTORES_H
#define FERRARIMOTORES_H
#include "Carro.h"
#include "Ferrari.h"


class FerrariMotores : public Ferrari
{
	friend ostream & operator << (ostream &, const FerrariMotores &);
	public:
		FerrariMotores (int , int, int, int , int, int);
		
		FerrariMotores (const FerrariMotores &);
		
		FerrariMotores ();
		
		virtual ~FerrariMotores();
		
		void escolhaMotor (int,int, int);
	
		//----------- SOBRECARGA DE OPERADORES--------------------
			
		const FerrariMotores operator = (const FerrariMotores &);
		
		int operator != (FerrariMotores &);
		
		bool operator == (const FerrariMotores &);

	private:
		int motor;
		int aumentoPot;
};

#endif
