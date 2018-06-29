#include "Character.h"
#include "Copycat.h"
#include "Cooperative.h"
#include "Aleatorio.h"
#include "Abuson.h"
#include "Rencoroso.h"
#include "Considerado.h"
#include "Simplon.h"
#include "Detective.h"
#include <vector>
using namespace std;
int main()
{
	/*
	int NumTur = 5; //Cantidad de partidas que se jugaran
					//Los 7 Funcionan, Hay que quitarle los // para que funcionen, 1 a la vez
					//Abuson objCoop(20,0);//--Este no Funciona
	Character Tu(20, 0);

	//	DECLARACIOON DE PERSONAJES MANUAL //
	//CopyCat objCoop(20, 1);
	//Cooperative obj(20, 1);
	//Cooperative objCoop(20, 1);
	//Abuson objCoop(20, 1);
	Detective objCoop(20, 1);
	//Aleatorio objCoop(20, 1);
	//Rencoroso objCoop(20, 1);
	//Considerado objCoop(20, 1);
	//Simplon objCoop(20, 1);

	//Character *poblador1=&objCopy;
	Character *Bot = &objCoop;
	Character *Yo = &Tu;
	//poblador1->interactua();//accede a las funciones

	Bot->interactua(); //Presentacion de cada personaje

	bool Vas, mente;
	int opc, cam1, cam2;

	for (int i = 0; i < NumTur; i++)
	{
		cout << "Escoje 0 para enganar y 1 para colaborar" << endl;
		cin >> Vas;
		Yo->set_acc(Vas);
		if (Yo->get_acc() == 0) //Tu enganas
		{
			if (Bot->get_acc() == 0) //Tu y el Bot enganan
			{
				cout << "Tu : " << endl;
				Yo->EmpaPer();
				cout << "Rival : " << endl;
				Bot->EmpaPer();
			}
			else //Tu enganas, el Bot Colabora
			{
				cout << "Tu : " << endl;
				Yo->Ganando();
				cout << "Rival : " << endl;
				Bot->Perdiendo();
			}
		}
		else //Tu colaboras
		{
			if (Bot->get_acc() == 0) //Tu Colaboras y el Bot engana
			{
				cout << "Tu : " << endl;
				Yo->Perdiendo();
				cout << "Rival : " << endl;
				Bot->Ganando();
			}
			else //Los 2 Colaboran
			{
				cout << "Tu : " << endl;
				Yo->EmpaGan();
				cout << "Rival : " << endl;
				Bot->EmpaGan();
			}
		}
			//Resultados
		cout << "En la ronda " << i + 1 << " Va de siguiente manera" << endl;
		cout << "TU con: " << Yo->get_coins() << " Monedas" << endl;
		cout << "Rival con: " << Bot->get_coins() << " Monedas" << endl;
			//system("pause");
			//system("cls");
		mente = Bot->actuando(Vas, i);
		Bot->set_acc(mente);
	}*/
	
	CopyCat 		Copy(20,1);
	Cooperative 	Coop(20, 1);
	Abuson 			Abu(20, 0);
	Detective 		Detec(20, 1);
	Aleatorio 		Alea(20, 1);
	Rencoroso 		Renc(20, 1);
	Considerado 	Consi(20, 1);
	Simplon 		Sim(20, 1);
	
	Character *Bot1 = &Copy;
	Character *Bot2 = &Coop;
	Character *Bot3 = &Abu;
	Character *Bot4 = &Detec;
	Character *Bot5 = &Alea;
	Character *Bot6 = &Renc;
	Character *Bot7 = &Consi;
	Character *Bot8 = &Sim;
	
	vector <Character> Ronda; ///Creando la ronda
	int ron,sum=0,opc; //Definir manualmente hasta que el problema sea solucionado
	//cout<<"Cuantos integrantes Tendra la Ronda??"<<endl;
	//cin>> ron; //Todavia no
	char fin;
	int nCopy,nCoop,nAbu,nDetec,nAlea,nRenc,nConsi,nSim;
	do{
		cout<<"Que cantidades quieres crear??"<<endl;
		cout<<"1.-Copiones"<<endl<<"2.-Cooperativos"<<endl<<"3.-Abusones"<<endl<<"4.-Detectives"<<endl<<"5.-Aleatorios"<<endl<<"6.-Rencorosos"<<endl<<"7.-Considerados"<<endl<<"8.-Simplones"<<endl;
		cin>>opc;
		switch(opc)
		{
			case(1):{
				cout<<"Agregar Cierta cantidad de rivales Copiones"<<endl;
				cin>>nCopy;		
				for (int i =0; i<nCopy;i++)
				{
					Ronda.push_back(*Bot1);
				}
				sum=sum+nCopy;
				break;
			}
			case(2):{
				cout<<"Agregar Cierta cantidad de rivales Coopeartivos"<<endl;
				cin>>nCoop;		
				for (int i =0; i<nCopy;i++)
				{
					Ronda.push_back(*Bot2);
				}
				sum=sum+nCoop;
				break;
			}
			case(3):{
				cout<<"Agregar Cierta cantidad de rivales Abusones"<<endl;
				cin>>nAbu;		
				for (int i =0; i<nCopy;i++)
				{
					Ronda.push_back(*Bot3);
				}
				sum=sum+nAbu;
				break;
			}
			case(4):{
				cout<<"Agregar Cierta cantidad de rivales Detectives"<<endl;
				cin>>nDetec;		
				for (int i =0; i<nCopy;i++)
				{
					Ronda.push_back(*Bot4);
				}
				sum=sum+nDetec;
				break;
			}
			case(5):{
				cout<<"Agregar Cierta cantidad de rivales Aleatorios"<<endl;
				cin>>nAlea;		
				for (int i =0; i<nCopy;i++)
				{
					Ronda.push_back(*Bot5);
				}
				sum=sum+nAlea;
				break;
			}
			case(6):{
				cout<<"Agregar Cierta cantidad de rivales Rencorosos"<<endl;
				cin>>nRenc;		
				for (int i =0; i<nCopy;i++)
				{
					Ronda.push_back(*Bot6);
				}
				sum=sum+nRenc;
				break;
			}
			case(7):{
				cout<<"Agregar Cierta cantidad de rivales Considerados"<<endl;
				cin>>nConsi;		
				for (int i =0; i<nCopy;i++)
				{
					Ronda.push_back(*Bot7);
				}
				sum=sum+nConsi;
				break;
			}
			case(8):{
				cout<<"Agregar Cierta cantidad de rivales Simplones"<<endl;
				cin>>nSim;		
				for (int i =0; i<nCopy;i++)
				{
					Ronda.push_back(*Bot8);
				}
				sum=sum+nSim;
				break;
			}
			default:{
				cout<<"Creo que ese numero no esta el la lista de opciones"<<endl;
			}
		}
		cout<<"En total tienes "<<sum<<" de integrantes en tu Ronda"<<endl;
		cout<<"Agregar mas??  y/n"<<endl;
		cin>>fin;
	}while(fin=='y');
	
	//Mostrando
	for (int i=0; i<sum;i++)//Ronda.size()  Use esto y se volvia infinito
	{
		Ronda[i].interactua(); 
	}
	
	return 0;
}
