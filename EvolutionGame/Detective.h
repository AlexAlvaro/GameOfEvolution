#ifndef DETECTIVE_H
#define DETECTIVE_H
#include "Character.h"

class Detective : public Character
{
  private:
    int anteriorAc;

  public:
    Detective(int C, bool A) : Character(C, A){
      anteriorAc = 1;
    };
    ~Detective(){};

    bool get_anterior();

    void interactua();
    bool actuando(bool ac, int turno);
};

#include "Detective.inl"
#endif
