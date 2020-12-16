#include <iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int sacveinte = 0;
int aprobados = 0;
int malpta3 = 0;

int ingresenumeroalum()
{
	int alumnos;

	cout << "ingrese numero de alumnos: ";
	cin >> alumnos;
	while (alumnos <= 0 || alumnos > 40)
	{

		cout << "ingrese numero de alumnos: ";
		cin >> alumnos;
	}return alumnos;
}
int ingreseopcionpta1()
{
	int opcion;

	cout << "ingrese opcion para la pregunta 1: ";
	cin >> opcion;
	while (opcion <= 0 || opcion > 5)
	{
		cout << "ingrese opcionpara la pregunta 1: ";
		cin >> opcion;
	}return opcion;
}
int ingreseopcionpta2()
{
	int opcion2;

	cout << "ingrese opcion de la pregunta2: ";
	cin >> opcion2;
	while (opcion2 <= 0 || opcion2 > 5)
	{
		cout << "ingrese opcion pregunta 2: ";
		cin >> opcion2;
	}return opcion2;
}

int ingreseopcionpta3()
{
	int opcion3;

	cout << "ingrese opcion de la pregunta3: ";
	cin >> opcion3;
	while (opcion3 <= 0 || opcion3 > 5)
	{
		cout << "ingrese opcion de la pregunta3: ";
		cin >> opcion3;
	}return opcion3;
}
void reporte(int cant)
{
	cout << "% de alumnos que hicieron bien el examen/total: " << (sacveinte * 100 / cant) << endl;
	cout << "cantidad de alumnos aprobados: " << aprobados << endl;
	/* Se considera aprobado a todo aquel que conteste un mínimo
	de dos preguntas correctamente, donde necesariamente una de ellas
	es la pregunta 2. ? */
	cout << "cantidad de alumnos que hizo mal la pta 3: " << malpta3 << endl;
	cout << "cantidad de alumnos que no rindieron el examen: " << 40 - cant << endl;
	/*si se sabe que la sección del profesor es de 40 alumnos.
*/
}

void calificacion(int opcion, int opcion2, int opcion3)
{
	int calificacion=0;

	if (opcion == 3 && opcion2 == 1 && opcion3 == 4)

	{
		calificacion = calificacion+20;
		sacveinte = sacveinte + 1;
	}

		 if((opcion == 3 || opcion3 == 4) && (opcion2 == 1))
		{
			calificacion = calificacion+10;
			aprobados = aprobados + 1;
		}

		 if  (opcion3 != 4)
		{
			calificacion =calificacion+ 1;
			malpta3 = malpta3 + 1;
		}
	
}

int main()
{
	int alumnos;
	int op;
	int op2;
	int op3;
	int cantidad = 0;
	int i = 1;
	alumnos = ingresenumeroalum();


	while (i <= alumnos)

	{
		cout << "para el alumno: " << i << endl;
		op = ingreseopcionpta1();
		op2 = ingreseopcionpta2();
		op3 = ingreseopcionpta3();
		calificacion(op, op2, op3);
		cantidad = cantidad + 1;
		i = i + 1;
	}

	reporte(cantidad);
	_getch();
}

