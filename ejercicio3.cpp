/*
*programa:crear una matriz 3*3 ingresar los datos, luego mostrar la suma de las matrices en otra matriz
*fecha:23-09-2018
*elaborado por :Leidy yuliana quintero
*/
#include <stdio.h>
#include<conio.h>


int main()
{
	
	int matriz[3][3];
	int horizontal[3];
	int vertical[3];
	int fila,columna;
	int suma=0;
	int i;
	
	for(fila=0;fila<3;fila++)
	{
		for(columna=0;columna<3;columna++)
		{
			printf("Introduce un numero para la posicion %d,%d: ",fila,columna);
			scanf("%d",&matriz[fila][columna]);
		}
	}
	for(fila=0;fila<3;fila++)
	{
		suma=0;
		for(columna=0;columna<3;columna++)
		{
			suma+=matriz[fila][columna];
		}
		vertical[fila]=suma;
	}
	for(i=0;i<3;i++)
	{
		printf("%d\n",vertical[i]);
	}
	for(columna=0;columna<3;columna++)
	{
		suma=0;
		for(fila=0;fila<3;fila++)
		{
			suma+=matriz[fila][columna];
		}
		horizontal[columna]=suma;
	}
	for(i=0;i<3;i++)
	{
		printf("%d",horizontal[i]);
	}
	return 0;
}

	

