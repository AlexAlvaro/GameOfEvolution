#ifndef ABUSON_H
#define ABUSON_H
#include "Character.h"

class Abuson : public Character
{
    public:
      Abuson(int C, bool A) : Character(C, A){};
      ~Abuson(){};
      void interactua();
      bool actuando(bool ac, int turno);
};
#include "Abuson.inl"
#endif //ABUSON_H