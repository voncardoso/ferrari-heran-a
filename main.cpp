#include <iostream>
#include <stdio.h>
#include <string>
#include "Carro.h"
#include "Ferrari.h"
#include "FerrariMotores.h"
#include "Lamborghini.h"
#include "LambogMotores.h"
#include "LandRouver.h"
#include "LandRouverPassageiros.h"
#include "Cliente.h"
#include "ClientePcd.h"
#include "ClienteEmpresa.h"
using std::string;
using namespace std;
using std::cout;
using std::cin;


int main(int argc, char** argv) {
		int defi;
		int potencia;
		int roda;
		int cor;
		int motorTurbo;
		int opcao;
		int modeloFer;
		int modeloLamborg;
		int modeloLand;
		int multimidiaLamborg;
		int tipoMotor;
		int escapamento;
		int tetoSolar;
		int quantLugares;
		int tracao;
		int idade;
		int cnpj;
		string nomeFantasia;
		string tipoDeficiencia;
		string nome;
    	string sobreNome;
		string empresa;
	
				cout << "\n--- ESCOLHA A COR DO CARRO  ----\n";
			
				cout << "  [1] PRETO NINJA \n " ;
				
				cout << " [2] AMARELO MODERNO \n " ;
				
				cout << " [3] VERMELHO CORSA \n " ;
				
				cout << " [4] BRANCO AVUS \n " ;
				
				cin >> cor; 
				
			
				
				system ("cls");
				
	cout << "\n--- POTENCIA DO MOTOR ----\n";
			
				cout << " [1] 500 CV \n";
				
				cout << " [2] 650 CV \n";
				
				cout << " [3] 720 CV \n";
				
				cout << " [4] 1000 CV \n";
				
				cin >> potencia; 
				
				system ("cls");
				
		cout << "\n-- TIPOS DE RODA --\n ";
		
				
				cout << "[1] ARO 19 \n";
				
				cout << " [2] ARO 20 \n";
				
				cout << " [3] ARO 21 \n";
				
				cout << " [4] ARO 23 \n";
				
				cin >> roda; 
		
		system ("cls");
		
			cout << "\n ESCOLHA A MARCA \n";
			
			cout << "[1] FERRARI \n ";
			
			cout << "[2] LAMBORGUINE \n " ;
			
			cout << "[3] LANDROUVER \n";
			
			cin >> opcao;
			
		system("cls");
			if (opcao==1)
			{
				cout << " \n \n - ESCOLHA SEU MODELO DA FERRARI - \n \n " ;
		
				cout << " [1] 812 Superfast \n " ;
			
				cout << " [2] F8 Tributo \n " ;
			
				cout << " [3] Ferrari 488 Pista \n " ;
			
				cout << " [4] Ferrari 488 Pista Spider \n " ;
			
				cin >> modeloFer;
				
				system ("cls");
		
				cout << "\n--- ESCOLHA O MODELO DE FERRARI  ----\n";
			
				cout << " [1] MOTOR TURBO : 2.0 E 18V   \n";
				
				cout << " [2] MOTOR TURBO : 3.0 E 16V \n";
				
				cin >> motorTurbo; 
		
			
				system ("cls");
				
					cout << "[1] Cliente PCD \n";
					cout << "[2] Cliente normal\n";
					cout << "[3] Cliente empresa\n";
					cin  >> defi;
					if (defi==1)
					{
						cout << "\n CADASTRO \n  ";
						cout << "Digite seu nome : ";
						cin	>> nome;
		
						cout << "Digite seu sobrenome : ";
						cin	>> sobreNome;
						
						cout << "Digite sua idade: ";
						cin	>> idade;
						
						cout << "DIGITE O TIPO DE DEFICIENCIA: ";
						cin	>> tipoDeficiencia;
						
						Cliente *pcd = new ClientePcd(nome,sobreNome,idade,tipoDeficiencia);
						pcd -> Cliente::mensagem2();
						pcd -> mensagem2();
						delete pcd;
					}else
						if (defi == 2)
						{
						cout << "\n CADASTRO \n  ";
						cout << "Digite seu nome : ";
						cin	>> nome;
		
						cout << "Digite seu sobrenome : ";
						cin	>> sobreNome;
						
						cout << "Digite sua idade: ";
						cin	>> idade;
							Cliente cad(nome,sobreNome,idade);
							cad.mensagem2();
				
						}else 
							if (defi == 3)
							{
								cout << "\n CADASTRO \n  ";
								
								cout << "Digite nome da empresa : ";
								cin	>> empresa;
								cout << "Digite o nome fantasia";
								cin >> nomeFantasia; 
								cout << " Digite cnpj : ";
								cin	>> cnpj;
								 ClienteEmpresa empre(nome,sobreNome,idade,cnpj,empresa, nomeFantasia);
								 empre.mensagem2();
							}
				
				
				FerrariMotores mot(potencia,roda,cor,modeloFer, motorTurbo,0);
				mot.escolhaModelo(cor);
				mot.escolhaPotencia(potencia);
				mot.escolhaRoda(roda);
				mot.escolhaModeloFer(motorTurbo);
				mot.escolhaMotor(motorTurbo,0,potencia);
			} else 
				if (opcao==2)
				{
				cout << " \n \n - ESCOLHA SEU MODELO DA LAMBORGHINI - \n \n " ;
		
				cout << " [1] Avantador S Roadster \n " ;
			
				cout << " [2] Aventador\n " ;
			
				cout << " [3] Huracán \n " ;
			
				cout << " [4] Urus \n " ;
			
				cin >> modeloLamborg;
				
				system ("cls");
				
				cout << " \n \n - MULTIMIDIA - \n \n " ;
		
				cout << " [1] 17 polegadas, GPS e ANDROID AUTO \n " ;
			
				cout << " [2] 19 polegadas, GPS, ANDROID AUTO E CAR PLAY\n " ;
			
				cout << " [3] 20 polegadas, GPS, ANDROID AUTO E CAR PLAY\n " ;
			
				cin >> multimidiaLamborg;
				
				system ("cls");
				
				cout << " \n \n - MULTIMIDIA - \n \n " ;
		
				cout << " [1] ELETRICO DE 500 CV  \n " ;
			
				cout << " [2] DISEL DE 600 \n " ;
			
				cout << " [3] HIBRIDO 500 CV NA COMBUSTAO E 150 CV NO ELETRICO : 650 CV TOTAIS \n " ;
			
				cin >> tipoMotor;
				
				system ("cls");
				
				cout << " \n \n - ESCAPAMENTO- \n \n " ;
		
				cout << " [1] NORMAL \n " ;
			
				cout << " [2] DUPLO \n " ;
			
				cout << " [3] TRIPLO \n " ;
			
				cin >> escapamento;
				
				system ("cls");
				
					cout << "\n CADASTRO \n  ";
				cout << "Digite seu nome : ";
				cin	>> nome;
		
				cout << "Digite seu sobrenome : ";
				cin	>> sobreNome;
		
				cout << "Digite sua idade: ";
				cin	>> idade;
		
				system ("cls");
				
					cout << "[1] Cliente PCD \n";
					cout << "[2] Cliente normal\n";
					cout << "[3] Cliente empresa\n";
					cin  >> defi;
					if (defi==1)
					{
						cout << "DIGITE O TIPO DE DEFICIENCIA: ";
						cin	>> tipoDeficiencia;
						Cliente *pcd = new ClientePcd(nome,sobreNome,idade,tipoDeficiencia);
						pcd -> Cliente::mensagem2();
						pcd -> mensagem2();
						delete pcd;
					}else
						if (defi == 2)
						{
							Cliente cad(nome,sobreNome,idade);
							cad.mensagem2();
				
						}else
							if (defi == 3)
							{
								cout << "\n CADASTRO \n  ";
								
								cout << "Digite nome da empresa : ";
								cin	>> empresa;
								
								cout << "Digite nome o nome fantasia : ";
								cin	>> nomeFantasia;
		
								cout << " Digite cnpj : ";
								cin	>> cnpj;
								 ClienteEmpresa empre(nome,sobreNome,idade,cnpj,empresa,nomeFantasia);
								 empre.mensagem2();
							}
			
				system ("cls");
				
					LambogMotores lamborg(potencia,roda,cor,modeloLamborg,multimidiaLamborg, tipoMotor,escapamento);
					lamborg.escolhaModelo(cor);
					lamborg.escolhaPotencia(potencia);
					lamborg.escolhaRoda(roda);
					lamborg.escolhaLamborghini(modeloLamborg);
					lamborg.escolhaMultimidia(multimidiaLamborg);
					lamborg.escolhaTipoMotor(tipoMotor);
					lamborg.tipoEscapamento(escapamento);
				
				}else 
				
					if (opcao == 3)
					{
					cout << " \n \n - ESCOLHA SEU MODELO DE LANDROUVER - \n \n " ;
			
					cout << " [1] VELAR \n " ;
				
					cout << " [2] DISCOVERY \n " ;
				
					cout << " [3]  DISCOVERY SPORT\n " ;
				
					cout << " [4] RANGER ROUVER EVOQUE \n " ;
				
					cin >> modeloLand;
					
					system ("cls");
					
					cout << " \n \n - ESCOLHA O TETO SOLAR - \n \n " ;
			
					cout << " [1] NORMAL \n " ;
				
					cout << " [2] TETO SOLAR PANORAMICO \n " ;
					
					cin >> tetoSolar;
					
					system ("cls");
					
					cout << " \n \n - LUGARES - \n \n " ;
			
					cout << " [1] 5 LUGARES \n " ;
				
					cout << " [2] 7 LUGARES \n " ;
					
					cin >> quantLugares;
					
					system ("cls");
					
						
					cout << " \n \n - ESCOLHA TRACAO - \n \n " ;
			
					cout << " [1] Tracao : integral \n " ;
				
					cout << " [2] Tracao : 4x2 \n " ;
					
					cout << " [3] Tracao : 4x4 \n " ;
					
					 cin >> tracao;
					 
					 system ("cls");
					 
					 	cout << "\n CADASTRO \n  ";
					cout << "Digite seu nome : ";
					cin	>> nome;
			
					cout << "Digite seu sobrenome : ";
					cin	>> sobreNome;
			
					cout << "Digite sua idade: ";
					cin	>> idade;
				
					system ("cls");
					
					cout << "[1] Cliente PCD \n";
					cout << "[2] Cliente normal\n";
					cout << "[3] Cliente empresa\n";
					cin  >> defi;
					if (defi==1)
					{
						cout << "DIGITE O TIPO DE DEFICIENCIA: ";
						cin	>> tipoDeficiencia;
						Cliente *pcd = new ClientePcd(nome,sobreNome,idade,tipoDeficiencia);
						pcd -> Cliente::mensagem2();
						pcd -> mensagem2();
						delete pcd;
					}else
						if (defi == 2)
						{
							Cliente cad(nome,sobreNome,idade);
							cad.mensagem2();
				
						}else
								if (defi == 3)
							{
								cout << "\n CADASTRO \n  ";
								
								cout << "Digite nome da empresa : ";
								cin	>> empresa;
		
								cout << " Digite cnpj : ";
								cin	>> cnpj;
								 ClienteEmpresa empre(nome,sobreNome,idade,cnpj,empresa,nomeFantasia);
								 empre.mensagem2();
							}
				
					LandRouverPassageiros land(potencia,roda,cor,modeloLand,tetoSolar,quantLugares,tracao);
					land.escolhaModelo(cor);
					land.escolhaPotencia(potencia);
					land.escolhaRoda(roda);
					land.escolhaLandRouver(modeloLand);
					land.tetoSolar(tetoSolar);
					land.escolhaQuantLugares(quantLugares);
					land.escolhaTracao(tracao);
					}
	
		
				
	return 0;
}
