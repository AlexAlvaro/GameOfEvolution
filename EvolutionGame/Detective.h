#ifndef COOPERATIVE_H
#define COOPERATIVE_H
#include "Character.h"

class Detective : public Character{
  public:
    Cooperative(int C, bool A) : Character::Character(C, A){

    };
    void interactua();
    int get_ModeJekyll();
    void set_ModeJekyll();
    bool actuando(bool ac, int turno);
};

#include "Cooperative.h"
#endif
