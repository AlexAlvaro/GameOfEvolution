#ifndef CHARACTER_H
#define CHARACTER_H

class Character
{
  private:
    int coins;
    bool accion;

  public:
    Character(int C, bool A); 
    int get_coins(); 
    void set_coins(int C);
    int get_acc();
    void set_acc(bool acc);
    virtual void interactua();
    virtual bool actuando(bool ac, int turno);
	void Ganando();
	void Perdiendo();
	void EmpaGan();
	void EmpaPer();
};

#include "Character.inl"
#endif