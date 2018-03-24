#include "Heroe.h"
#include "Joven.h"
#include "Adulto.h"
#include "Item.h"
#include "Bumeran.h"
#include "Arco.h"
#include "Bomba.h"
#include "Monstruo.h"
#include "Jefe.h"
#include "Semijefe.h"
#include "Comun.h"
#include <string>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//metodo menu
int menu();
int menuitem();
int menumonstruo();
int menutienda();

void binHeroe(Heroe*);




int main(int argc, char const *argv[]) {
  vector<Monstruo*>monstruos;
  string nombre,nombreitem,coloritem;
  int op,opi;
  Item* item;
  Monstruo* monstruo;
  cout<<"Ingrese el nombre del Heroe: "<<endl;
  cin>>nombre;
  cout<<"Ingrese nombre de su item: "<<endl;
  cin>>nombreitem;
  cout<<"Ingrese color de su item: "<<endl;
  cin>>coloritem;
  item=new Bumeran(5,nombreitem,coloritem);
  //se crea el heroe joven
  Heroe* heroe=new Joven(2,4,0,nombre,12,item,0,0);

  while (op!=7) {
    switch (op=menu()) {
      case 1:{
        int opm,opd;
        int vida;
        string nombremonstruo;
        Item* debilidad;
        cout<<"Ingrese nombre del monstruo"<<endl;
        cin>>nombremonstruo;
        cout<<"Debilidad del monstruo"<<endl;
        //menu para la debilidad
        opd=menuitem();
        if(opd==1){
          debilidad=new Bumeran(5,nombreitem,coloritem);
        }
        if(opd==2){
          debilidad=new Arco(4,nombreitem,coloritem);
        }
        if(opd==3){
          debilidad=new Bomba(10,4,nombreitem,coloritem);
        }
        //menu para el rango del monstruo
        opm=menumonstruo();
        if(opm==1){
          srand(time(NULL));
        	vida=rand() % 40+26;
          monstruo=new Jefe(vida,2,9,nombremonstruo,debilidad);
          monstruos.push_back(monstruo);
        }
        if(opm==2){
          srand(time(NULL));
        	vida=rand() % 26+12;
          monstruo=new Semijefe(vida,1,7,nombremonstruo,debilidad);
          monstruos.push_back(monstruo);
        }
        if(opm==3){
          srand(time(NULL));
        	vida=rand() % 12+4;
          monstruo=new Comun(vida,0,5,nombremonstruo,debilidad);
          monstruos.push_back(monstruo);
        }

        break;
      }
      case 2:{
        for (int i = 0; i < monstruos.size(); i++) {
          cout<<i<<" "<<monstruos[i]->getNombre()<<endl;
        }
        int eliminar;
        cout<<"Ingrese posicion del monstruo a elminar"<<endl;
        cin>>eliminar;
        monstruos.erase(monstruos.begin()+eliminar);
        break;
      }
      case 3:{
        int opt;
        int hpactual,dineroactual;
        opt=menutienda();
        if(opt==1){
          dineroactual=heroe->getDinero();
          if(dineroactual>=200){
            hpactual=heroe->getVida();
            heroe->setVida(hpactual+4);
            heroe->setDinero(dineroactual-200);
          }else{
            cout<<"Dinero insuficiente"<<endl;
          }
        }
        if(opt==2){
          break;
        }
        break;
      }
      case 4:{
        cout<<"Elija el item que llevara a la pelea"<<endl;
        opi=menuitem();
        if(opi==1){
          item=new Bumeran(5,nombreitem,coloritem);
          heroe->setItem(item);
        }
        if(opi==2){
          item=new Arco(4,nombreitem,coloritem);
          heroe->setItem(item);
        }
        if(opi==3){
          item=new Bomba(10,4,nombreitem,coloritem);
          heroe->setItem(item);
        }
        if(monstruos.size()>0){
          cout<<"Lista de monstruos: "<<endl;
          for(int i = 0; i < monstruos.size(); i++) {
            cout<<i<<" "<<monstruos[i]->getNombre()<<endl;
          }
          bool ganador=false;
          bool turno=false;
          while (ganador==false){
            if(turno==false){
              ganador=true;
              turno==true;
            }else{
              turno==false;
            }
          }
        }else{
          cout<<"No puede pelear si no hay monstruos"<<endl;
        }
        break;
      }
      case 5:{
        binHeroe(heroe);
        break;
      }
      case 6:{


        break;
      }
      case 7:{

        break;
      }
    }
  }

  return 0;
}



int menu(){
	int bandera=0;
	int num=0;
	while(bandera==0){
		cout<<"**********Menu***********"<<endl;
    cout<<"1.Agregar Monstruo"<<endl;
    cout<<"2.Eliminar Monstruo"<<endl;
		cout<<"3.Tienda"<<endl;
    cout<<"4.Pelear"<<endl;
    cout<<"5.Salvar atributos del heroe"<<endl;
    cout<<"6.Cargar Heroe"<<endl;
    cout<<"7.salir"<<endl;
		cout<<"Ingrese numero de opcion que desea evaluar: "<<endl;
		cin>> num;
		return num;
	}
}

int menuitem(){
  int num;
  cout<<"1.Bumeran"<<endl;
  cout<<"2.Arco y Flechas"<<endl;
  cout<<"3.Bombas"<<endl;
  cout<<"Ingrese numero de Item"<<endl;
  cin>>num;
  return num;
}

int menumonstruo(){
  int num;
  cout<<"1.Jefe"<<endl;
  cout<<"2.Semijefe"<<endl;
  cout<<"3.Comunes"<<endl;
  cout<<"Ingrese numero de monstruo"<<endl;
  cin>>num;
  return num;
}

int menutienda(){
  int op;
  cout<<"*********Tienda*********"<<endl;
  cout<<"1.comprar corazon 200 Rupees"<<endl;
  cout<<"2.salir de la tienda"<<endl;
  cin>>op;
  return op;
}

void binHeroe(Heroe* heroe){
  ofstream heroes("Heroe.dat",ios::binary);
  heroe->write(heroes);
  cout<<"Heroe guardado correctamente"<<endl;
  heroes.close();
}
