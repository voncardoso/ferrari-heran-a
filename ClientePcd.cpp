#include "ClientePcd.h"
#include "Cliente.h"
#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include <string>
using std::string;
using namespace std;
using std::cout;

ClientePcd::ClientePcd()
: Cliente()
{
	
}

ClientePcd::ClientePcd ( const string &_nome, const string &_sobreNome, int _idade, const string &_tipoDeficiencia ):
	Cliente(_nome, _sobreNome,_idade)
{
	this -> tipoDeficiencia = _tipoDeficiencia;
}

ClientePcd::ClientePcd(const ClientePcd &cli_Pcd)
: Cliente ( static_cast <Cliente> (cli_Pcd))
{
	this -> tipoDeficiencia = cli_Pcd.tipoDeficiencia;
}

ClientePcd::~ClientePcd()
{
	
}

void ClientePcd::mensagem2( )
{
	cout << "\n Deficiencia: " << tipoDeficiencia ;
}

const ClientePcd ClientePcd::operator =( const ClientePcd &cli_Pcd)
{
* static_cast <Cliente *> ( this ) = static_cast <Cliente> (cli_Pcd);
	this -> tipoDeficiencia	= cli_Pcd.tipoDeficiencia; 
	
	return *this;
}

ostream &operator << (ostream &out, const ClientePcd &cli_Pcd)
{
	out << 	 " Cliente: " << static_cast <Cliente> (cli_Pcd) << '\t' ;
	out<< cli_Pcd.tipoDeficiencia; 
	return out;
}

bool ClientePcd::operator==(const ClientePcd &cli_Pcd)
{
	if (tipoDeficiencia == cli_Pcd.tipoDeficiencia)
	{
		return true;
	}else
		return false;
}


int ClientePcd::operator!= (ClientePcd &cli_Pcd )
{
	if (tipoDeficiencia == cli_Pcd.tipoDeficiencia )
		return 0;
	else
		return 1;
}


