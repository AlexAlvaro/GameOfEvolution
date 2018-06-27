#ifndef CONSIDERADO_H
#define CONSIDERADO_H
#include "Character.h"

class Considerado : public Character
{
    private:
      int Rencor;

    public:
      Considerado(int C, bool A) : Character(C, A){
        Rencor = 0;
      };
      ~Considerado(){};

      int get_ren();
      void set_ren(int r);

      void interactua();
      bool actuando(bool ac, int turno);
};
#include "Considerado.inl"
#endif
