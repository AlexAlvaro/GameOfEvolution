#ifndef RENCOROSO_H
#define RENCOROSO_H
#include "Character.h"

class Rencoroso : public Character
{
  private:
    int Rencor;

  public:
    Rencoroso(int C, bool A) : Character(C, A){
        Rencor = 0;
    };
    ~Rencoroso(){};

    int get_ren();
    void set_ren(int r);

    void interactua();
    bool actuando(bool ac, int turno);
};
#include "Rencoroso.inl"
#endif