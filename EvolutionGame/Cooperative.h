#ifndef COOPERATIVE_H
#define COOPERATIVE_H
#include "Character.h"

class Cooperative : public Character
{
public:
  Cooperative(int C, bool A) : Character(C, A){};
  ~Cooperative(){};
  
  void interactua();
  bool actuando(bool ac, int turno);
};

#include "Cooperative.inl"
#endif