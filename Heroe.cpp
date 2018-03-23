#include "Heroe.h"
#include <string>
#include "Item.h"
#include <fstream>
using namespace std;

Heroe::Heroe(){

}

Heroe::Heroe(string nombre,int vida,Item* item,int jefesderrotados,int dinero){
  this->vida=vida;
  this->nombre=nombre;
  this->item=item;
  this->jefesderrotados=jefesderrotados;
  this->dinero=dinero;
}

string Heroe::getNombre(){
  return nombre;
}
int Heroe::getVida(){
  return vida;
}
Item* Heroe::getItem(){
  return item;
}
int Heroe::getJefesDerrotados(){
  return jefesderrotados;
}
int Heroe::getDinero(){
  return dinero;
}
void Heroe::setNombre(string nombre){
  this->nombre=nombre;
}
void Heroe::setVida(int vida){
  this->vida=vida;
}
void Heroe::setItem(Item* item){
  this->item=item;
}
void Heroe::setJefesDerrotados(int jefesderrotados){
  this->jefesderrotados=jefesderrotados;
}
void Heroe::setDinero(int dinero){
  this->dinero=dinero;
}

void Heroe::write(ofstream& out){
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
