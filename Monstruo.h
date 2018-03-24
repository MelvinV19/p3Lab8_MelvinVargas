#ifndef MONSTRUO_H
#define MONSTRUO_H
#include "Item.h"
#include <string>
#include "Heroe.h"
using namespace std;
class Monstruo{
  private:

  public:
    string nombre;
    Item* debilidad;
    Monstruo();
    Monstruo(string,Item*);
    string getNombre();
    Item* getDebilidad();
    void setNombre(string);
    void setDebilidad(Item*);
};

#endif
