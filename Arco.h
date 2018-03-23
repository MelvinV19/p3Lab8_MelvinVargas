#ifndef ARCO_H
#define ARCO_H
#include "Item.h"

class Arco:public Item{
  private:

  public:
    int ataque;
    Arco();
    Arco(int,string,string);
    int getAtaque();
};
#endif
