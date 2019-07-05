#ifndef CLIENTE_H
#define CLIENTE_H
#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
using std :: string;
using  namespace  std ;
using std :: cout;

class Cliente
{

	friend ostream & operator << (ostream &, const Cliente &);
	
public:
	
    Cliente ( const string &, const string &, int);
	
	Cliente ();
	
	Cliente( const Cliente &);
    
	virtual ~Cliente ();
    
    virtual	void  mensagem2 ();
    
	void  infoCliente () const ;
   	
	//----------- SOBRECARGA DE OPERADORES-------------------- 
    
	const Cliente operator=(const Cliente &);
		
	int operator != (Cliente &);
		
	bool operator==(const Cliente &);
    

private:
	int idade;
	string nome;
	string sobreNome;
	
};

#endif
