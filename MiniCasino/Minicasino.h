#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
#define TAM 11
#if !defined(_MINICASINO_H)
#define _MINICASINO_H
class MiniCasino{
private:
	int *vec;
	int puntos;
public:	
	MiniCasino();
	void llenar();
	void promediar();
	void adivinar(int valor,int indice);
	void verVec();
};


#endif
