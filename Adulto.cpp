#include "Adulto.h"


Adulto::Adulto(){

}
Adulto::Adulto(int defensa,int ataque,int especial,string nombre,int vida,Item* item,int jefesderrotados,int dinero):Heroe(nombre,vida,item,jefesderrotados,dinero){
  this->defensa=defensa;
  this->ataque=ataque;
  this->especial=especial;
}

int Adulto::getDefensa(){
  return defensa;
}
int Adulto::getAtaque(){
  return ataque;
}
int Adulto::getEspecial(){
  return especial;
}
