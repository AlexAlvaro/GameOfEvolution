#include "Character.h"
#include "Copycat.h"
#include "Cooperative.h"
#include "Aleatorio.h"
#include "Abuson.h"
#include "Rencoroso.h"
#include "Considerado.h"
#include "Simplon.h"
//#include "Detective.h" //ERROR DE COMPILACION//

int main()
{
	int NumTur = 5; //Cantidad de partidas que se jugaran
					//Los 7 Funcionan, Hay que quitarle los // para que funcionen, 1 a la vez
					//Abuson objCoop(20,0);//--Este no Funciona
	Character Tu(20, 0);

	//	DECLARACIOON DE PERSONAJES MANUAL //
	//CopyCat objCoop(20, 1);
	//Cooperative obj(20, 1);
	//Cooperative objCoop(20, 1);
	//Abuson objCoop(20, 1);
	//Detective objCoop(20, 1);
	//Aleatorio objCoop(20, 1);
	//Rencoroso objCoop(20, 1);
	//Considerado objCoop(20, 1);
	Simplon objCoop(20, 1);

	///Intento de escoger Rival
	/*
	CopyCat     objCoop1(20, 1);
	Cooperative objCoop2(20, 1);
	Abuson      objCoop3(20, 0);
    Aleatorio   objCoop4(20, 1); // Funciona //
    Rencoroso   objCoop5(20, 1);
	Considerado objCoop6(20, 1);
    Simplon     objCoop7(20, 1);
    
	cout<<"Escoje Un oponente"<<endl;
	Character *Bot;
	cin>>oponente;
	switch(oponente){ 
					case(1):{
						*Bot = &objCoop1;
						break;
					}
					case(2):{
						*Bot = &objCoop2;
						break;
					}
					case(3):{
						*Bot = &objCoop3;
						break;
					}
					case(4):{
						*Bot = &objCoop4;
						break;
					}
					case(5):{
						*Bot = &objCoop5;
						break;
					}
					case(6):{
						*Bot = &objCoop6;
						break;
					}
					case(7):{
						*Bot = &objCoop7;
						break;
					}
	
	}
	*/

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
	}
	return 0;
}
