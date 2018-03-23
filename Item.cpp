#include "Item.h"


Item::Item(){

}
Item::Item(string nombre,string color){
  this->nombre=nombre;
  this->color=color;
}
string Item::getNombre(){
  return nombre;
}
string Item::getColor(){
  return color;
}
void Item::setNombre(string){
  this->nombre=nombre;
}
void Item::setColor(string){
  this->color=color;
}
