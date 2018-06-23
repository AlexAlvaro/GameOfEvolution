#ifndef DETECTIVE_H
#define DETECTIVE_H
#include "Character.h"

class Detective : public Character
{
public:
  Detective(int C, bool A) : Character(C, A){

  };
  ~Detective(){

  };
  void interactua();
  int get_ModeJekyll();
  void set_ModeJekyll();
  bool actuando(bool ac, int turno);
};

#include "Detective.inl"
#endif
