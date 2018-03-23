#ifndef SEMIJEFE_H
#define SEMIJEFE_H
#include "Monstruo.h"
#include <string>
#include "Item.h"
using namespace std;

class Semijefe:public Monstruo{
  private:

  public:
    int vida;
    int defensa;
    int ataque;
    Semijefe();
    Semijefe(int,int,int,string,Item*);
    int getVida();
    int getDefensa();
    int getAtaque();
};

#endif
