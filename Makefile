mu.o: main.o Adulto.o Arco.o Bomba.o Bumeran.o Heroe.o Item.o Joven.o Monstruo.o Jefe.o Semijefe.o Comun.o
	g++ main.o Adulto.o Arco.o Bomba.o Bumeran.o Heroe.o Item.o Joven.o Monstruo.o Jefe.o Semijefe.o Comun.o -o mu

main.o: main.cpp Adulto.h Arco.h Bomba.h Bumeran.h Heroe.h Item.h Joven.h Monstruo.h Jefe.h Semijefe.h Comun.h
	g++ -c main.cpp

Adulto.o: Adulto.cpp Adulto.h Heroe.h Item.h
	g++ -c Adulto.cpp

Arco.o: Arco.cpp Arco.h Item.h
	g++ -c Arco.cpp

Bomba.o: Bomba.cpp Bomba.h Item.h
	g++ -c Bomba.cpp

Bumeran.o: Bumeran.cpp Bumeran.h Item.h
	g++ -c Bumeran.cpp

Heroe.o: Heroe.cpp Heroe.h Item.h
	g++ -c Heroe.cpp

Item.o: Item.cpp Item.h
	g++ -c Item.cpp

Joven.o: Joven.cpp Joven.h Heroe.h Item.h
	g++ -c Joven.cpp

Monstruo.o:  Monstruo.cpp Monstruo.h Item.h
	g++ -c Monstruo.cpp

Jefe.o: Jefe.cpp Jefe.h Monstruo.h Item.h
	g++ -c Jefe.cpp

Semijefe.o: Semijefe.cpp Semijefe.h Monstruo.h Item.h
	g++ -c Semijefe.cpp

Comun.o: Comun.cpp Comun.h Monstruo.h Item.h
	g++ -c Comun.cpp
