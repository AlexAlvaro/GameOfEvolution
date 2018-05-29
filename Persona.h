#include "Persona.cpp"

class Persona{
	private:
		int Monedas;
		char accion;
	public:
		Persona();//constructor por defecto
		Persona(const Persona &p);//Constructor Copia
		Persona(int,char);
		int get_mon();//Ver las monedas
		void set_mon(int);//Cambiar la cantidad
		
		char get_acc();//Ver accion Realizada
		void set_acc(char);//Cambiar la cantidad
		
		int enganar(const Persona &p);
		int cooperar(const Persona &p);
		
		int accion(const Persona &p,char);//Accion del jugador		
}