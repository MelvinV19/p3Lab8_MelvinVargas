#ifndef ITEM_H
#define ITEM_H
#include <string>
using namespace std;
class Item{
  private:

  public:
    string nombre;
    string color;
    Item();
    Item(string,string);
    string getNombre();
    string getColor();
    void setNombre(string);
    void setColor(string);

};
#endif
