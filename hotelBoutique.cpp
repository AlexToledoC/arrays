/* Ejercicio: hotel boutique
Autor: Alejandro Toledo Cuenca	
Fecha de creacion: 30/03/2022
Descripcion: simular las reservaciones del hotel boutique */

#include <iostream>
#include <conio.h>

using namespace std; 
int main(), i, seleccion, personas, habitacion, funcion_cobro(), doble[3],
subtotal, subtotal2, subtotal3, dias, total, sencilla[5], lujo[2],
disponible_sencilla = 5, disponible_doble = 3, disponible_lujo = 2,
contador_sencilla, contador_doble, contador_lujo, funcion_otra_reserva();
double iva;
string otra_operacion;

int funcion_cobro(int subtotal, int personas)
{
	cout << "Cuantos dias va a reservar? \n";
	cin >> dias;
	subtotal2 = subtotal * dias * personas;
	iva = subtotal2 * .16;
	subtotal3 = subtotal2 - iva;
	cout << "Subtotal: $" << subtotal3 << "\n";
	cout << "IVA: $" << iva << "\n";
	cout << "Total a pagar: $" << subtotal2;
}


int funcion_otra_reserva()
{
	cout << "\nDesea realizar otra reservacion? Escriba si o no: \n";
	cin >> otra_operacion;
	if (otra_operacion == "si" or otra_operacion == "Si" or otra_operacion == "si ")
	{
		system("cls");
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
	printf("1. Sencilla (maximo 2 personas).............$2,350.00 p/persona \n");
	cout << "     habitaciones disponibles: " << disponible_sencilla << endl;
	printf("2. Doble (maximo 4 personas)................$3,930.00 p/persona \n");
	cout << "     habitaciones disponibles: " << disponible_doble << endl;
	printf("3. De lujo (maximo 6 personas)..............$9,500.00 p/persona \n");
	cout << "     habitaciones disponibles: " << disponible_lujo << endl;
	printf("4. Salir \n");
	cout << "Escoja el tipo de habitacion a reservar ingresando el respecitvo numero (1-3):\n";
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
					funcion_cobro(2350, personas);
					sencilla[contador_sencilla] = 1;
					contador_sencilla += 1;
					disponible_sencilla -= 1;
				}
			}
			break;
		}
		case 2:
			{
				if (doble[2] == 1)
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
						funcion_cobro(3930, personas);
						doble[contador_doble] = 1;
						contador_doble += 1;
						disponible_doble -= 1;
					}
				}
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
					cout << "¿Para cuantas personas es la reservacion? \n";
					cin >> personas;
					if (personas > 6 or personas < 1)
					{
						printf("Esta habitacion no admite ese numero de personas.");
					}
					else
					{
						funcion_cobro(9500, personas);
						lujo[contador_lujo] = 1;
						contador_lujo += 1;
						disponible_lujo -= 1;
					}
				}
				break;
			}
		case 4:
			{
				printf("Gracias por su visita");
				break;
			}
		default:
			{
				printf("Por favor, ingrese una opcion valida");
			}
			break;	
	}
	if (seleccion == 4)
	{
		printf(" Vuelva pronto");
		getch();
	}
	else
	{
		funcion_otra_reserva();
	}
}

