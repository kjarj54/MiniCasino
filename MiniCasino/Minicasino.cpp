#include "Minicasino.h"

MiniCasino::MiniCasino(){
	puntos=0;
	vec=new int[TAM];
	for(int i=0;i<TAM;i++){
		vec[i]=NULL;
	}
}

void MiniCasino::llenar(){
	int pos=0;
	srand (time(NULL));
	for(int i=0;i<(TAM/2);i++){
		pos=rand()%TAM;
		vec[pos]=rand()%10+1;			
	}
}

void MiniCasino::promediar(){
	float promedio=0;

	for(int i=0;i<TAM;i++){
		promedio=promedio+vec[i];
	}
	cout<<"El promedio es: "<<promedio/TAM<<endl;

}

void MiniCasino::adivinar(int valor,int indice){
	
	if(vec[indice]==valor && valor==0){
		puntos=puntos+1;	
	}	
	if(vec[indice]==valor){
		puntos=puntos+1;
	}	
	cout<<"Su puntuacion es:"<<puntos<<endl;	
		
}
void MiniCasino::verVec(){


	for(int i=0;i<TAM;i++){
		cout<<" "<<vec[i];
	}

	
}



