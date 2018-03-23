#include "Heroe.h"
#include <string>
#include "Item.h"
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
