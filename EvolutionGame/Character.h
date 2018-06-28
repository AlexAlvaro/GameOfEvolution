#ifndef CHARACTER_H
#define CHARACTER_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

class Character
{
protected:
  int coins;
  bool accion;

public:
  Character(int C, bool A);
  ~Character(){};

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