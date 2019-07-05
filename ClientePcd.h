#ifndef CLIENTEPCD_H
#define CLIENTEPCD_H
#include "Cliente.h"
#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include <string>
using std::string;
using namespace std;
using std::cout;

class ClientePcd : public Cliente
{
	friend ostream & operator << (ostream &, const ClientePcd &);
	
	public:
		ClientePcd (const string &, const string &, int, const string &);
		
		ClientePcd ();
		
		ClientePcd (const ClientePcd &);
		
		virtual	~ClientePcd	 ();
		
		void  mensagem2 ();
    
		void  infoCliente () const ;
	   
	  	//----------- SOBRECARGA DE OPERADORES--------------------  
	   
	    const ClientePcd operator=(const ClientePcd &);
			
		int operator != (ClientePcd &);
			
		bool operator==(const ClientePcd &);
	
		private:
			string tipoDeficiencia;

		
};

#endif
