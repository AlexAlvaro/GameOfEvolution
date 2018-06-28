#ifndef DETECTIVE_H
#define DETECTIVE_H
#include "Character.h"

class Detective : public Character
{
  private:
    int anteriorAc;
    int Rencor;

  public:
    Detective(int C, bool A) : Character(C, A){
      anteriorAc = 1;
      Rencor = 0;
    };
    ~Detective(){};

    bool get_anterior();
    int get_ren();
    void set_ren(int r);

    void interactua();
    bool actuando(bool ac, int turno);
};

#include "Detective.inl"
#endif
