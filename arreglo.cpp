#include "StdAfx.h"
#include "Arreglo.h"


Arreglo::Arreglo(void)
{
	tamano=0;
}


void Arreglo::Tamano(int){

	tamano=t;

}
int Arreglo::Tamano(){

	return tamano;

}
int Arreglo::Arreglito(int pos){

	return arreglito[pos];


}
void Arreglo::Arreglito(int pos , int valor){

	arreglito[pos]=valor;

}
void Arreglo:: Insertar( int pos , int valor){

	int i=tamano;
	while(i>=pos)
	{

		arreglito[i]=arreglito[i-1]
		i--;
	}

	arreglito[pos]=valor;

}
int Arreglo::Eliminar(int ){




}
void Arreglo::Ordenar(){





}
