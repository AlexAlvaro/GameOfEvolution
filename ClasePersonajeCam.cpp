
#include <iostream>
using namespace std;
//class Character.h
class Character{
  private:
    int coins;
	bool accion;
  public://Converti el constructor, en una especie de constructor por defecto
    Character(int C,bool A):coins(C),accion(A)//siempre tienen 20 monedas
    {
      //coins=C;
    }
	int get_coins(){
		return coins;
	}
	void set_coins(int C){
		coins=C;
	}
	int get_acc(){
		return accion;
	}
	void set_acc(bool acc){
		accion=acc;
	}
	virtual void interactua(){
		 cout<<"lo hice!"<<endl;
	}
	virtual bool actuando(bool ac){
		 cout<<"Sino no Funciona"<<endl;
	}
};

//class CopyCat.h

class CopyCat: public Character{
  public:
    CopyCat(int C,bool A):Character(C,A){

    }
    void interactua(){
      cout<<"Se adapta al contendiente"<<endl;
    }
	bool actuando(bool ac){
			return ac;
	}
};
//class Cooperative.h
class Cooperative: public Character{
	public:
		Cooperative(int C,bool A):Character(C,A){
		}		
		void interactua(){
			cout<<"Siempre colabora"<<endl;
		}
		bool actuando(bool ac){
			ac=1;
			return ac;
		}
		
};
//Class Abuson
class Abuson: public Character{
	public:
		Abuson(int C,bool A):Character(C,A){
		}		
		void interactua(){
			cout<<"Siempre colabora"<<endl;
		}
		bool actuando(bool ac){
			ac=0;
			return ac;
		}
		
};
//Arbitro

int interactuando(bool x,bool y){
	if (x==0){
		if(y==0){
			return 1;//los 2 enganan()
		}
		else{
			return 3;//Tu enganas y el otro colabora
		}
	}
	else{
		if(y==1){
			return 4;//Tu colaboras y el otro engana
		}
		else{
			return 2;//Los 2 Colaboran
		}	
	}

}

//Main.cpp
// 0 Engana
// 1 Colabora
int main(){
	//Los 3 Funcionan, Hay que quitarle los // para que funcionen, 1 a la vez
  //Abuson objCoop(20,0);//--Este no Funciona
  CopyCat objCoop(20,1);
  //Cooperative objCoop(20,1);
  Character Tu(20,0);
	
  //Character *poblador1=&objCopy;
  Character *poblador2=&objCoop;//Coop
  Character *Yo=&Tu;
  //poblador1->interactua();//accede a las funciones
  //poblador2->interactua();
  bool Vas,bot;
  int opc,cam1,cam2;
	
  for (int i =0; i<5;i++){
    cout<<"Escoje 0 para enganar y 1 para colaborar"<<endl;
	cin>>Vas;
	Yo->set_acc(Vas);
	opc=interactuando(Yo->get_acc(),poblador2->get_acc());	
	switch(opc){ 
		case(1):{
			cout<<"Por desconfiados nadie recibe Nada"<<endl;
			//
			bot=poblador2->actuando(Vas);
			poblador2->set_acc(bot);
			break;
		};
		case(2):{
			cout<<"Colaboraron, +2 Monedas para cada Uno"<<endl;
			cam1=Yo->get_coins();
			cam1=cam1+2;
			Yo->set_coins(cam1);
			cam2=poblador2->get_coins();
			cam2=cam2+2;
			poblador2->set_coins(cam2);
			//
			bot=poblador2->actuando(Vas);
			poblador2->set_acc(bot);
			break;
		};
		case(3):{
			cout<<"Enganaste +3 para ti y -1 para tu rival"<<endl;
			cam1=Yo->get_coins();
			cam1=cam1+3;
			Yo->set_coins(cam1);
			cam2=poblador2->get_coins();
			cam2=cam2-1;
			poblador2->set_coins(cam2);
			//	
			bot=poblador2->actuando(Vas);
			poblador2->set_acc(bot);
			break;
		};
		case(4):{
		cout<<"Te Enganaron -1 para ti y +3 para tu rival"<<endl;
			cam1=Yo->get_coins();
			cam1=cam1-1;
			Yo->set_coins(cam1);
			cam2=poblador2->get_coins();
			cam2=cam2+3;
			poblador2->set_coins(cam2);
			//
			bot=poblador2->actuando(Vas);
			poblador2->set_acc(bot);
			break;
		};
	}
  }
  
  //Resultados
  cout<<"La ronda de juegos termina asi"<<endl;
  cout<<"TU con: "<<Yo->get_coins()<<" Monedas"<<endl;
  cout<<"Rival con: "<<poblador2->get_coins()<<" Monedas"<<endl;
  
  
  return 0;
}
