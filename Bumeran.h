#ifndef BUMERAN_H
#define BUMERAN_H
#include "Item.h"
class Bumeran:public Item{
  private:

  public:
    int ataque;
    Bumeran();
    Bumeran(int,string,string);
    int getAtaque();
};
#endif
