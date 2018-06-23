#include <iostream>
using namespace std;

Character::Character(int C, bool A) //: coins(C), accion(A)
{
	coins = C;
	accion = A;
}
int Character::get_coins()
{
	return coins;
}
void Character::set_coins(int C)
{
	coins = C;
}
int Character::get_acc()
{
	return accion;
}
void Character::set_acc(bool acc)
{
	accion = acc;
}
void Character::interactua()
{
	cout << "lo hice!" << endl;
}
bool Character::actuando(bool ac, int turno)
{
	cout << "Sino no Funciona" << endl;
}
void Character::Ganando()
{
	int y;
	y = get_coins();
	y = y + 3;
	set_coins(y);
	cout << "Ganaste 3 Monedas" << endl;
}
void Character::Perdiendo()
{
	int y;
	y = get_coins();
	y = y - 1;
	set_coins(y);
	cout << "Perdiste 1 Moneda" << endl;
}
void Character::EmpaGan()
{
	int y;
	y = get_coins();
	y = y + 2;
	set_coins(y);
	cout << "Ganaste 2 Monedas" << endl;
}
void Character::EmpaPer()
{
	cout << "No se te dara nada Por desconfiado" << endl;
}
