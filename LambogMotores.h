#ifndef LAMBOGMOTORES_H
#define LAMBOGMOTORES_H
#include "Lamborghini.h"
#include "Carro.h"
using std::string;
using namespace std;
using std::cout;
using std::cin;

class LambogMotores : public Lamborghini
{
	friend ostream & operator << (ostream &, const LambogMotores &);
	public:
		
		LambogMotores (int, int, int, int, int, int, int);
		
		LambogMotores(const LambogMotores &);
		
		LambogMotores();
		
		virtual ~LambogMotores ();
		
		void escolhaTipoMotor (int);
		
		void tipoEscapamento (int);
			
		//----------- SOBRECARGA DE OPERADORES--------------------
		
		const LambogMotores operator = (const LambogMotores &);
		
		int operator != (LambogMotores &);
		
		bool operator == (const LambogMotores &);
		
	private:
		int tipoMotor;
		int escapamento;
};

#endif
