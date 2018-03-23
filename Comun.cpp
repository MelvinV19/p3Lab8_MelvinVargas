#include "Comun.h"
#include "Monstruo.h"
#include <string>

Comun::Comun(){

}
Comun::Comun(int vida,int defensa,int ataque,string nombre,Item* debilidad):Monstruo(nombre,debilidad){
  this->vida=vida;
  this->defensa=defensa;
  this->ataque=ataque;
}

int Comun::getVida(){
  return vida;
}
int Comun::getDefensa(){
  return defensa;
}
int Comun::getAtaque(){
  return ataque;
}
