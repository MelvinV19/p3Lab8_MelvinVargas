#ifndef JOVEN_H
#define  JOVEN_H
#include "Heroe.h"
#include <string>
#include "Item.h"
#include "Monstruo.h"
#include <fstream>
using namespace std;

class Joven:public Heroe{
  private:

  public:
    int defensa;
    int ataque;
    int especial;
    int getDefensa();
    int getAtaque();
    Joven();
    Joven(int,int,int,string,int,Item*,int,int);
    void write(ofstream&);
    

};

#endif
