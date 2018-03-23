#include "Monstruo.h"

Monstruo::Monstruo(){

}
Monstruo::Monstruo(string nombre,Item* debilidad){
    this->nombre=nombre;
    this->debilidad=debilidad;
}
string Monstruo::getNombre(){
  return nombre;
}
Item* Monstruo::getDebilidad(){
  return debilidad;
}
void Monstruo::setNombre(string nombre){
  this->nombre=nombre;
}
void Monstruo::setDebilidad(Item*debilidad){
  this->debilidad=debilidad;
}
