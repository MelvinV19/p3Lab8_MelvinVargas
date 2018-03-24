#include "Joven.h"
#include <iostream>



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



void Joven::write(ofstream& out){
  int size=nombre.size();
  //length del nombre y contenido
  out.write(reinterpret_cast<char*>(&size),sizeof(int));
  out.write(nombre.data(),size);
  //vida
  out.write(reinterpret_cast<char*>(&vida),sizeof(int));

  //Item
  out.write(reinterpret_cast<char*>(&item),sizeof(int));

  //jefes derrotados
  out.write(reinterpret_cast<char*>(&jefesderrotados),sizeof(int));
  //dinero
  out.write(reinterpret_cast<char*>(&dinero),sizeof(int));

}
