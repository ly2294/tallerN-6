
/*
*programa:almacenar en una matriz los datos de 5 personas imprimir el nombre alfabeticamente menor
*fecha:23-09-2018
*elaborado por :Leidy yuliana quintero
*/

#include<stdio.h>
#include<string.h>

void cargar(char nombres[5][41])
{
	int f;
	for(f=0;f<5;f++)
	{
		printf("Ingrese el nombre de persona:");
		gets(nombres[f]);
	}
}

void imprimir(char nombres[5][41])
{
	int f;
	printf("Listado completo de nombres\n");
	for(f=0;f<5;f++)
	{
		printf("%s\n",nombres[f]);
	}
}

void menor(char nombres[5][41])
{
	int f;
	char men[41];
	strcpy(men,nombres[0]);
	for(f=1;f<5;f++)
	{
		if (strcmp(nombres[f],men) < 0)
		{
			strcpy(men,nombres[f]);
		}
	}
	printf("Nombre menor alfabeticamente: %s",men);
}


int main()
{
	char nombres[5][41];
	cargar(nombres);
	imprimir(nombres);
	menor(nombres);
	return 0;
}

