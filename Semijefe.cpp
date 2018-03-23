#include "Semijefe.h"
#include "Monstruo.h"
#include <string>

Semijefe::Semijefe(){

}
Semijefe::Semijefe(int vida,int defensa,int ataque,string nombre,Item* debilidad):Monstruo(nombre,debilidad){
  this->vida=vida;
  this->defensa=defensa;
  this->ataque=ataque;
}

int Semijefe::getVida(){
  return vida;
}
int Semijefe::getDefensa(){
  return defensa;
}
int Semijefe::getAtaque(){
  return ataque;
}
