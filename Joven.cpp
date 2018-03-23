#include "Joven.h"


Joven::Joven(){

}
Joven::Joven(int defensa,int ataque,int especial,string nombre,int vida,Item* item,int jefesderrotados,int dinero):Heroe(nombre,vida,item,jefesderrotados,dinero){
  this->defensa=defensa;
  this->ataque=ataque;
  this->especial=especial;
}

int Joven::getDefensa(){
  return defensa;
}
int Joven::getAtaque(){
  return ataque;
}
