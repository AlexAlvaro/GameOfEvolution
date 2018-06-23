
#include <iostream>
#include <stdio.h>  /* printf, scanf, puts, NULL */
#include <stdlib.h> /* srand, rand */
#include <time.h>   /* time */

#include "Character.h"
#include "Copycat.h"
//#include "Cooperative.h"

using namespace std;



//Class Abuson--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Abuson : public Character
{
  public:
    Abuson(int C, bool A) : Character(C, A)
    {
    }
    void interactua()
    {
        cout <<  "Soy Abuson mi Personalidad es :"<<endl<< " Siempre Engano" << endl;
    }
    bool actuando(bool ac, int turno)
    {
		string ven;
		if(ac==0){
			ven="Enganaste";
		}
		else{
			ven="Cooperaste";
		}
		cout<<endl<<"Me "<< ven <<" en el turno: "<< turno+1 <<" Igual, Siempre Te enganare" << endl;
        ac = 0;
        return ac;
    }
};

//Class Aleatorio ->--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Aleatorio : public Character
{
  public:
    Aleatorio(int C, bool A) : Character(C, A)
    {
    }
    void interactua()
    {
        cout <<  "Soy Aleatorio mi Personalidad es :"<<endl<<" Random" << endl;
    }
    bool actuando(bool ac, int turno)
    {
		string ven;
		if(ac==0){
			ven="Enganaste";
		}
		else{
			ven="Cooperaste";
		}		
        srand(time(NULL));
        ac = rand() % 2;
        return ac;
    }
};
//Class Rencoroso--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Rencoroso : public Character
{
  private:
	int Rencor;
  public:
    Rencoroso(int C, bool A) : Character(C, A)
    {
		Rencor=0;
    }
    void interactua()
    {
        cout <<  "Soy Rencoroso mi Personalidad es :"<<endl<< "Si me enganas una vez, siempre te enganare" << endl;
    }
	//Sus propios Metodos Get y set
	int get_ren()
    {
        return Rencor;
    }
    void set_ren(int r)
    {
        Rencor = r;
    }
	//Actuar
    bool actuando(bool ac, int turno)
    {
		string ven;
		if(ac==0){
			ven="Enganaste";
			cout<<"Ahora siempre te enganare"<<endl;
			set_ren(Rencor+1);
			ac=1;
			return ac; 		
		}
		else{
			ven="Cooperaste";
			if(Rencor==0){
				cout<<"Yo te cooperare tambien"<<endl;
				ac=1;
				return ac;
			}
			else{
				cout<<"Pero ya me tracionaste anteriormente"<<endl;
				ac=1;
				return ac;
			}
		}
		
    }
};

//Class Considerado--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Considerado : public Character
{
  private:
	int Rencor;
  public:
    Considerado(int C, bool A) : Character(C, A)
    {
		Rencor=0;
    }
    void interactua()
    {
        cout << "Soy Considerado mi Personalidad es :"<<endl<<"Si me enganas 2 veces te enganare Siempre" << endl;
    }
	//Sus propios Metodos Get y set
	int get_ren()
    {
        return Rencor;
    }
    void set_ren(int r)
    {
        Rencor = r;
    }
	//Actuar
    bool actuando(bool ac, int turno)
    {
		string ven;
		int x;
		x=get_ren();
		if(ac==0){
			ven="Enganaste";
			x=x+1;
			set_ren(x);
			cout<<"Me enganaste "<<get_ren()<<" Veces"<<endl;
			
			if(Rencor>1){
				cout<<"Ahora te enganare Siempre"<<endl;
				ac=0;
				return ac;
			}
			else{
				cout<<"Todavia no te enganare"<<endl;
				ac=1;
				return ac;
			}	
			
		}
		else{
			ven="Cooperaste";
			if(Rencor>1){
				cout<<"Ahora te enganare Siempre"<<endl;
				ac=0;
				return ac;
			}
			else{
				cout<<"Hare lo mismo"<<endl;
				return ac;
			}
		}
		
    }
};
//Class Simplon--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Simplon : public Character
{
  private:
	int Rencor;
	bool ulti;
  public:
    Simplon(int C, bool A) : Character(C, A)
    {
		Rencor=0;
		ulti=1;
    }
    void interactua()
    {
        cout <<  "Soy Simplon mi Personalidad es :"<<endl<< "Si tu cooperas, yo hago lo mismo como ultimo movimiento,Si vuelves a enganar, yo hago lo contrario como ultimo movimiento" << endl;
    }
	//Sus propios Metodos Get y set
	int get_ren()
    {
        return Rencor;
    }
    void set_ren(int r)
    {
        Rencor = r;
    }
	int get_ulti()
    {
        return ulti;
    }
    void set_ulti(int u)
    {
        ulti = u;
    }
	//Actuar
    bool actuando(bool ac, int turno)
    {
		string ven;
		turno=turno+1;
		int x;
		x=get_ren();
		if(turno==5)//Cambiar si es que se cambia NumTurn
		{
			cout<<"Ahora mi ultimo Movimiento ha llegado"<<endl;
			return  ulti;
			
		}
		else{
			cout<<"Estamos en el turno "<<turno<<" Todavia Falta"<<endl;
			if(ac==0){
				ven="Enganaste";
				x=x+1;
				set_ren(x);
				if(Rencor>1){
					set_ulti(1);
				}
				else{
					set_ulti(0);
					return ac;
				}
				
			}
			else{
				ven="Cooperaste";
				set_ulti(1);
				return ac;
			}	
		}
		
    }
};

//Arbitro--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*
int interactuando(bool x, bool y)
{
    if (x == 0)
    {
        if (y == 0)
        {
            return 1; //los 2 enganan()
        }
        else
        {
            return 3; //Tu enganas y el otro colabora
        }
    }
    else
    {
        if (y == 1)
        {
            return 4; //Tu colaboras y el otro engana
        }
        else
        {
            return 2; //Los 2 Colaboran
        }
    }
}
*/
//Main.cpp--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// 0 Engana
// 1 Colabora
int main()
{
	int NumTur=5;//Cantidad de partidas que se jugaran
    //Los 7 Funcionan, Hay que quitarle los // para que funcionen, 1 a la vez
    //Abuson objCoop(20,0);//--Este no Funciona
	
    CopyCat obj(20, 1); // Funciona //
    //Cooperative objCoop(20,1);
    //CopyCat objCoop(20, 1);
    Character Tu(20, 0);
	
	
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
    Character *Bot = &obj;
    Character *Yo = &Tu;
    //poblador1->interactua();//accede a las funciones
	
    Bot->interactua();//Presentacion de cada personaje
	
    bool Vas, mente;
    int opc, cam1, cam2;

    for (int i = 0; i < NumTur; i++)
    {
        cout << "Escoje 0 para enganar y 1 para colaborar" << endl;
        cin >> Vas;
        Yo->set_acc(Vas);
        if(Yo->get_acc()==0)//Tu enganas
		{
			if(Bot->get_acc()==0)//Tu y el Bot enganan
			{
				cout<<"Tu : "<<endl;
				Yo->EmpaPer();
				cout<<"Rival : "<<endl;
				Bot->EmpaPer();
			}
			else//Tu enganas, el Bot Colabora
			{
				cout<<"Tu : "<<endl;
				Yo->Ganando();
				cout<<"Rival : "<<endl;
				Bot->Perdiendo();
			}
		}        
		else//Tu colaboras
		{
			if(Bot->get_acc()==0)//Tu Colaboras y el Bot engana
			{
				cout<<"Tu : "<<endl;
				Yo->Perdiendo();
				cout<<"Rival : "<<endl;
				Bot->Ganando();
			}
			else//Los 2 Colaboran
			{
				cout<<"Tu : "<<endl;
				Yo->EmpaGan();
				cout<<"Rival : "<<endl;
				Bot->EmpaGan();
			}
		}
		//Resultados
		cout << "En la ronda "<< i+1 <<" Va de siguiente manera"<< endl;
		cout << "TU con: " << Yo->get_coins() << " Monedas" << endl;
		cout << "Rival con: " << Bot->get_coins() << " Monedas" << endl;
		//system("pause");
		//system("cls");
		mente=Bot->actuando(Vas,i);
		Bot->set_acc(mente);
		
    } 
    return 0;
}
