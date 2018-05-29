#include <iostream> 
#include <cstring>
#include "Persona.h"
using namespace std;
int main()
{
	Persona Bot(20,'c');//Intento de que el bot inicie Cooperando 
	Persona r(Bot);
	Persona Tu(20,'e');//Tu indicas que estas enganando
	
	Tu.actuar(Bot);
	Tu.get_monedas();//Monedas actuales
	Bot.get_monedas();//monedas del Bot actuales
	
	return 0;
}