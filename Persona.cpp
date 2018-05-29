#include "Persona.h"
#include <iostream>
using namespace std;
//contructores
Persona::Persona(){
	monedas=20;
	accion=' ';
}
Persona::Persona(const Persona &p)
{
	monedas=p.monedas;
	accion=p.monedas;
}
Persona::Persona(int m,char a){
	monedas=m;
	accion=a;
}
//Get y Set
int Persona::get_mon(){
	return monedas;
}
void Persona::set_mon(int m){
	monedas=m;
}
char get_acc(){
	return accion;
}
void set_acc(char a){
	accion=a;
}
//Acciones (Enganar y Cooperar)
int enganar(const Persona &p){
	if(accion=p.accion){//Los 2 enganaron
		cout<<"Nadie Recibe Nada"<<endl;
	}
	else{				//Enganaste
		monedas=monedas+3;
		p.monedas=p.monedas-3;
	}
}

int cooperar(const Persona &p){
	if(accion=p.accion){		//Los 2 colaboraron
		monedas=monedas+2;
		p.monedas=p.monedas+2;
	}
	else{						//Te enganaron
		monedas=monedas-3;
		p.monedas=p.monedas+3;
	}
}
		
int actuar(const Persona &p){
	char x;
	cout<<"Escoger entre enganar(e) o Cooperar (c)"<<endl;
	cin>>x;
	if(x=='e')
	{
		set_acc();
		cout<<enganar(p);
	}
	else{
		set_acc();
		cout<<enganar(p);
	}

}	