#include "Bumeran.h"
#include "Item.h"

Bumeran::Bumeran(){

}
Bumeran::Bumeran(int ataque,string nombre,string color):Item(nombre,color){
  this->ataque=ataque;
}

int Bumeran::getAtaque(){
  return ataque;
}
