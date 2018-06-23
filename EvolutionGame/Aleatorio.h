#ifndef ALEATORIO_H
#define ALEATORIO_H
#include <stdio.h>  /* printf, scanf, puts, NULL */
#include <stdlib.h> /* srand, rand */
#include <time.h>   /* time */
#include "Character.h"

class Aleatorio : public Character
{
    public:
      Aleatorio(int C, bool A) : Character(C, A){

                                 };
      ~Aleatorio(){

      };
      void interactua();
      bool actuando(bool ac, int turno);
};
#include "Aleatorio.inl"
#endif