#include "Arco.h"
#include "Item.h"

Arco::Arco(){

}
Arco::Arco(int ataque,string nombre,string color):Item(nombre,color){
  this->ataque=ataque;
}

int Arco::getAtaque(){
  return ataque;
}
