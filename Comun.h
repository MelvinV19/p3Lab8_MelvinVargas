#ifndef COMUN_H
#define COMUN_H
#include "Monstruo.h"
#include <string>
#include "Item.h"
using namespace std;

class Comun:public Monstruo{
  private:

  public:
    int vida;
    int defensa;
    int ataque;
    Comun();
    Comun(int,int,int,string,Item*);
    int getVida();
    int getDefensa();
    int getAtaque();
};

#endif
