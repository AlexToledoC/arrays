/* Ejercicio: hotel boutique
Autor: Alejandro Toledo Cuenca	
Fecha de creaci�n: 30/03/2022
Descripci�n: simular las reservaciones del hotel boutique */

#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std; 
int main(), i, seleccion, personas, habitacion, funcion_cobro(), doble[3],
subtotal, dias, total, sencilla[5], lujo[2],
contador_sencilla, contador_doble, contador_lujo, funcion_otra_reserva();//funcion_reserva();
double iva;
string otra_operacion;

int funcion_cobro(int subtotal)
{
	cout << "Cuantos días va a reservar? \n";
	cin >> dias;
	cout << "Subtotal a pagar: $" << subtotal << "\n";
	iva = subtotal * .16;
	cout << "IVA: $" << iva << "\n";
	total = subtotal + iva;
	cout << "Total a pagar: $" << total;
}


int funcion_otra_reserva()
{
	cout << "\nDesea realizar otra reservacion? Escriba si o no: \n";
	cin >> otra_operacion;
	if (otra_operacion == "si" or otra_operacion == "Si" or otra_operacion == "si ")
	{
		main();
	}
	else
	{
		printf("\nGracias por su visita.");
	}
}


int main()
{
	printf("Bienvenid@ al hotel boutique.\n \n");
	printf("Las habitaciones disponibles son: \n");
	printf("1. Sencilla (maximo 2 personas).............$2,350.00 \n");
	printf("2. Doble (maximo 4 personas)................$3,930.00 \n");
	printf("3. De lujo (maximo 6 personas)..............$9,500.00 \n");
	cout << "Escoja el tipo de habitacion ingresando el respecitvo número (1-3):\n";
	cin >> seleccion;
	switch(seleccion)
	{
		case 1:
			{
				if (sencilla[4] == 1)
				{
					printf("Ya no hay habitaciones disponibles.");
				}
				else
				{
					cout << "¿Para cuantas personas es la reservacion? \n";
					cin >> personas;
					if (personas > 2 or personas < 1)
					{
						printf("Esta habitacion no admite ese numero de personas.");
					}
					else
					{
						funcion_cobro(2350);
					}
				}
				sencilla[contador_sencilla] = 1;
				contador_sencilla += 1;
				break;
			}
		case 2:
			{
				if (doble[3] == 1)
				{
					printf("Ya no hay habitaciones disponibles.");
				}
				else
				{
					cout << "Para cuantas personas es la reservacion? \n";
					cin >> personas;
					if (personas > 4 or personas < 1)
					{
						printf("Esta habitacin no admite ese numero de personas.");
					}
					else
					{
						funcion_cobro(3930);
					}
				}
				doble[contador_doble] = 1;
				contador_doble += 1;
				break;
			}
		case 3:
			{
				if (lujo[1] == 1)
				{
					printf("Ya no hay habitaciones disponibles.");
				}
				else
				{
					cout << "¿Para cuantas personas es la reservación? \n";
					cin >> personas;
					if (personas > 6 or personas < 1)
					{
						printf("Esta habitación no admite ese número de personas.");
					}
					else
					{
						funcion_cobro(9500);
					}
				}
				lujo[contador_lujo] = 1;
				contador_lujo += 1;
				break;
		default:
			{
				printf("Por favor, ingrese una opcion valida");
			}
			break;
		}
	}
	funcion_otra_reserva();
}

