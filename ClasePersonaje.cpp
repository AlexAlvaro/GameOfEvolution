
#include <iostream>
using namespace std;
class Character{
  private:
    int coins;

  public:
    Character(int C):coins(C)
    {
      //coins=C;
    }


    virtual void interactua(){
      cout<<"lo hice!"<<endl;
    }
};
class CopyCat: public Character{
  public:
    CopyCat(int C):Character(C){

    }
    void interactua(){
      cout<<"Se adapta al contendiente"<<endl;
    }
};
class Cooperative: public Character{
  public:
    Cooperative(int C):Character(C){

    }
  void interactua(){
    cout<<"Siempre colabora"<<endl;
  }
};
int main(){
  CopyCat objCopy(20);
  Cooperative objCoop(20);

  Character *poblador1=&objCopy;
  Character *poblador2=&objCoop;

  poblador1->interactua();
  poblador2->interactua();
  return 0;
}
