#ifndef COPYCAT_H
#define COPYCAT_H
#include "Character.h"

class CopyCat : public Character
{
public:
  CopyCat(int C, bool A) : Character(C, A){

  };
  ~CopyCat()
  {

  };
  void interactua();
  bool actuando(bool ac, int turno);
};
#include "Copycat.inl"
#endif