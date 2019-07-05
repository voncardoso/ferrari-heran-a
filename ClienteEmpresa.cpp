#include "ClienteEmpresa.h"
#include "Cliente.h"
#include "ClientePcd.h"
#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include <string>
using std::string;
using namespace std;
using std::cout;

ClienteEmpresa::ClienteEmpresa()
: Cliente()
{
	this -> cnpj = 0;
	this -> empresa = "Desconhecido";
	this -> nomeFantasia = "Desconhecido";
}

ClienteEmpresa::ClienteEmpresa ( const string &_nome, const string &_sobreNome, int _idade, float _cnpj, const string & _empresa, const string & _nomeFantasia)
: Cliente(_nome, _sobreNome,_idade)
{
	this -> cnpj = _cnpj;
	this -> empresa = _empresa;
	this -> nomeFantasia = _nomeFantasia;
	
}

ClienteEmpresa::ClienteEmpresa(const ClienteEmpresa &cli_Empre)
: Cliente ( static_cast <Cliente> (cli_Empre))
{
	this -> cnpj = cli_Empre.cnpj;
	this -> empresa = cli_Empre.empresa;
	this -> nomeFantasia = cli_Empre.nomeFantasia;
}

ClienteEmpresa::~ClienteEmpresa()
{
	
}

void ClienteEmpresa::mensagem2( )
{
	cout << "\n Nome da empresa: " << empresa;
	cout << "\n Nome Fantasia:" << nomeFantasia; 
	cout << "\n CNPJ: " << cnpj ;
}

const ClienteEmpresa ClienteEmpresa::operator =( const ClienteEmpresa &cli_Empre)
{
	* static_cast <Cliente *> ( this ) = static_cast <Cliente> (cli_Empre);
	cnpj = cli_Empre.cnpj; 
	empresa = cli_Empre.empresa;
	nomeFantasia = cli_Empre.nomeFantasia;
	return *this;
}

ostream &operator << (ostream &out, const ClienteEmpresa &cli_Empre)
{
	out << 	 " Centro: " << static_cast <Cliente> (cli_Empre) << '\t';
	out << cli_Empre.cnpj; 
	out << cli_Empre.empresa;
	out << cli_Empre.nomeFantasia;
	return out;
}

bool ClienteEmpresa::operator==(const ClienteEmpresa &cli_Empre)
{
	if (cnpj == cli_Empre.cnpj)
	{
		return true;
	}else
		return false;
		
		if (empresa == cli_Empre.empresa)
		{
			return true;
		}else
			return false;
				
				if (nomeFantasia == cli_Empre.nomeFantasia)
				{
					return true;
				}else
					return false;
}


int ClienteEmpresa::operator!= (ClienteEmpresa &cli_Empre )
{
	if (cnpj == cli_Empre.cnpj )
		return 0;
	else
		return 1;
}


