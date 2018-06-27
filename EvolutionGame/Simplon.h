#ifndef SIMPLON_H
#define SIMPLON_H
#include "Character.h"

class Simplon : public Character
{
    private:
      int Rencor;
      bool ulti;

    public:
      Simplon(int C, bool A) : Character(C, A){
          Rencor = 0;
          ulti = 1;
      };
      ~Simplon(){};

      int get_ren();
      void set_ren(int r);
      int get_ulti();
      void set_ulti(int u);

      void interactua();
      bool actuando(bool ac, int turno);
};
#include "Simplon.inl"
#endif