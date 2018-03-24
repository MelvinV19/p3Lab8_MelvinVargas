#ifndef HEROE_H
#define HEROE_H
#include "Item.h"
#include "Monstruo.h"
#include <string>
#include <fstream>
using namespace std;

class Heroe{
  private:

  public:
    string nombre;
    int vida;
    Item* item;
    int jefesderrotados;
    int dinero;
    Heroe();
    Heroe(string,int,Item*,int,int);
    string getNombre();
    int getVida();
    Item* getItem();
    int getJefesDerrotados();
    int getDinero();
    void setNombre(string);
    void setVida(int);
    void setItem(Item*);
    void setJefesDerrotados(int);
    void setDinero(int);
    void write(ofstream&);
    void read(ifstream&);
    //void read(ifstream&);
};

#endif
