#include "Bomba.h"
#include "Item.h"

Bomba::Bomba(){

}
Bomba::Bomba(int ataque,int ataque2,string nombre,string color):Item(nombre,color){
  this->ataque=ataque;
  this->ataque2=ataque2;
}

int Bomba::getAtaque(){
  return ataque;
}
int Bomba::getAtaque2(){
  return ataque2;
}
