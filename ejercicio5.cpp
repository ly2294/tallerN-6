
/*
*programa:crear una matriz de 3*3 ingresar los elementos tipo eentero y luego imprimir el elemento mayor

*fecha:23-09-2018
*elaborado por :Leidy yuliana quintero
*/
#include <iostream>

using namespace std;

int main() {
	int i,j,mayor;
	int M[3][3];
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			cout << "Elemento "<< i+1 << j+1 <<": " ;
			cin >> M[i][j];
		}
	}
	
	mayor = 0;
	
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			if (M[i][j] > mayor)
				mayor = M[i][j];
		}
	}
	cout << "\nEl numero mayor en el arreglo es " << mayor << endl;
	
	return 0;
}
