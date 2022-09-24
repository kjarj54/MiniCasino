#include"Minicasino.h"
#define INTENTOS 10
int main(int argc, char** argv) {
	cout<<"" 
        "\n" 
        "\n"
        "\n"
        "\nProfesor: " 
        "\n\n"
	<<endl;
	int valor;
	int indice=0;
	MiniCasino *MC=new MiniCasino();
	MC->llenar();
	MC->promediar();
	//MC->verVec();
	for(int i=0;i<INTENTOS;i++){
		cout<<"Digite un valor de 1 a 10\n";
		cin>>valor;
		cout<<"Digite una pocicion de 0 a "<<TAM-1<<endl;
		cin>>indice;
		MC->adivinar(valor,indice);
	}
	 
	
	return 0;
}
