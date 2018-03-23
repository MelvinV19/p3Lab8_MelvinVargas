#include "Jefe.h"
#include "Monstruo.h"
#include <string>

Jefe::Jefe(){

}
Jefe::Jefe(int vida,int defensa,int ataque,string nombre,Item* debilidad):Monstruo(nombre,debilidad){
  this->vida=vida;
  this->defensa=defensa;
  this->ataque=ataque;
}

int Jefe::getVida(){
  return vida;
}
int Jefe::getDefensa(){
  return defensa;
}
int Jefe::getAtaque(){
  return ataque;
}
