/* Ejercicio: suma de matrices
Autor: Alejandro Toledo Cuenca	
Fecha de creaci�n: 25/04/2022
Descripci�n: sumar los �ndices de las matrices introducidas por el usuario */

//Bibliotecas
#include <iostream>

//Uso de memoria est�ndar
using namespace std;

//Declaraci�n de variables y funciones
const int dim=3;
int i,j;
int Matriz_A[4][3];
float Matriz_B[4][3];
double respuesta[4][3];
	
int main()
{	//Matriz A
	cout<<("Introduzca los datos de la Matriz A:\n");
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=3; j++)
        {
            cout << (i,j); 
            cout << ". ";
			cin >> (Matriz_A[i][j]);
        }
    }
	//Matriz B
	cout << ("\n\nIntroduzca los datos de la Matriz B:\n");
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=3; j++)
        {
            cout << (i,j); 
            cout << ". ";
			cin >> (Matriz_B[i][j]);
        }
    }
    
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=3; j++)
		{
			respuesta[i][j] = Matriz_A[i][j] + Matriz_B[i][j]; //Se guarda el resultado de la multiplicacion en la matriz A y B en res
		}
    }
    
    cout<<("\n\nLa matriz resultado es:  \n\n  ");
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=3; j++) 
		cout << (respuesta[i][j]);
		cout << ("\v");
		cout << ("\t");
		cout << ("\n");
    }
    return 0;
}
