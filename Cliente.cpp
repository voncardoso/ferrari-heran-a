#include "Cliente.h"
#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include <string>
using std::string;
using namespace std;
using std::cout;

Cliente::Cliente()
{
	if (idade < 0)
	{
		cout << ("idade invalida");
	}
		
		this -> nome= "Desonhecido  \n";
		
		this -> sobreNome = "Desonhecido  \n";
	

}

Cliente::Cliente( const string &_nome, const string &_sobreNome, int _idade) 
:nome(_nome), sobreNome(_sobreNome), idade(_idade)
{
		
}

Cliente::Cliente(const Cliente &Cliente)
{
	this -> nome = Cliente.nome;
}


void Cliente::mensagem2( )
{
	cout << "Nome : " << nome;
	cout << "\nSobreome : " << sobreNome;
	cout << "\nIdade : " << idade;
 
	
}

const Cliente Cliente::operator =( const Cliente &Cliente)
{
	nome = Cliente.nome; 
	sobreNome = Cliente.sobreNome; 
	idade = Cliente.idade; 

}
ostream &operator << (ostream &output, const Cliente  &Cliente)
{
	output << Cliente.nome; 
	output << Cliente.sobreNome; 
	output << Cliente.idade; 
	return output;
}

bool Cliente::operator==(const Cliente &Cliente)
{
	if (nome != Cliente.nome || sobreNome != Cliente.sobreNome)
	{
		return true;
	}else
		return false;
}


int Cliente::operator!= (Cliente &Cliente )
{
	if (nome == Cliente.nome )
		return 0;
	
	if (sobreNome == Cliente.sobreNome)
		return 0;
		
	if (idade == Cliente.idade)	
		return 0;
}



Cliente::~Cliente()
{
	
}
