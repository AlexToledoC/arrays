/* Ejercicio: arreglos salarios
Autor: Alejandro Toledo Cuenca	
Fecha de creación: 23/03/2022
Descripción: practicar arreglos */

#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std; 
int a[5], main(), i;
double number;



int main()
{
	printf("Programa salario mensual de empleados \n");
	for (i=0; i<5; i++)
	{
		cout << "Ingrese el salario del empleado #" << i + 1 << ":\n$";
		cin >> number;
		if (number < 15558.30)
		{
			do
			{
			printf("El salario mensual debe ser mayor a $15,558.30 \n");
			cout << "Ingrese el salario del empleado #" << i + 1 << ":\n";
			cin >> number;
			}
			while (number < 15558.3);
			a[i] = number;
		}
		else
		{
			a[i] = number;
		}
	}
	printf("\nEl salario de los empleados es:  ");
	for (i=0; i<5; i++)
	{
		cout << "\nEmpleado #" << i + 1 << ": ";
		cout << "$" << a[i];
	}
}


