#ifndef ADULTO_H
#define  ADULTO_H
#include "Heroe.h"
#include <string>
#include "Item.h"
using namespace std;

class Adulto:public Heroe{
  private:

  public:
    int defensa;
    int ataque;
    int especial;
    int getDefensa();
    int getAtaque();
    int getEspecial();
    Adulto();
    Adulto(int,int,int,string,int,Item*,int,int);

};

#endif
