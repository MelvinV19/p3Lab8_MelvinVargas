#ifndef BOMBA_H
#define BOMBA_H
#include "Item.h"

class Bomba:public Item{
  private:

  public:
    int ataque;
    int ataque2;
    Bomba();
    Bomba(int,int,string,string);
    int getAtaque();
    int getAtaque2();
};
#endif
