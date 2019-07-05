#ifndef FERRARI_H
#define FERRARI_H
#include "Carro.h"
#include "Ferrari.h"
using std::string;
using namespace std;
using std::cout;
using std::cin;

class Ferrari : public Carro
{
	friend ostream & operator << (ostream &, const Ferrari &);
	public:
	
		Ferrari (int, int, int, int);
	
		 Ferrari (const Ferrari &);
		
		 Ferrari ();
		 
		virtual ~Ferrari ();
		
		 void escolhaModeloFer(int);
		
		//----------- SOBRECARGA DE OPERADORES--------------------
		
		const Ferrari operator = (const Ferrari &);
		
		int operator != (Ferrari &);
		
		bool operator == (const Ferrari &);
	
	private:
		
	int modeloFer;

		
};

#endif


