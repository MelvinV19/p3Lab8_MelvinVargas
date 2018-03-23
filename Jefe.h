#ifndef JEFE_H
#define JEFE_H
#include "Monstruo.h"
#include <string>
#include "Item.h"
using namespace std;

class Jefe:public Monstruo{
  private:

  public:
    int vida;
    int defensa;
    int ataque;
    Jefe();
    Jefe(int,int,int,string,Item*);
    int getVida();
    int getDefensa();
    int getAtaque();
};

#endif
