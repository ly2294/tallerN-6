
/*
*programa:crear una matriz de 2*5..
*fecha:23-09-2018
*elaborado por :Leidy yuliana quintero
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int fila,columna,matriz[2][5];
	
	for(fila=0;fila<2;fila++){
		cout<<"\n\n";
		for(columna=0;columna<5;columna++){
			cout<<"Ingrese numero para la posicion"<<" "<<fila<<" "<<columna<<":";
			cin>>matriz[fila][columna];
		}
	}
	cout<<"\n\n";
	system("pause");
	for(fila=0;fila<2;fila++){
		cout<<"\n";
		cout<<"\t";
		for(columna=0;columna<5;columna++){
			cout<<matriz[fila][columna];
		}
	}
}

