#include "iostream"
#include "stdio.h"
#include "string"

using namespace std;

int main()
{
	string* titulos = nullptr; //Se inicializa el cursor(inicia en null)
	string* autores = nullptr; //Se inicializa el cursor (inicia en null)

	int size; //Se inicializa la variable

	cout << "Cuantos libros desea ingresar?";

	string entrada;

	getline(cin, entrada); //Se asigna el valor ingresado

	size = stoi(entrada); //Se transforma la entrada en n�mero

	titulos = new string[size]; //Declaramos un arreglo del tama�o ingresado para los titulos
	autores = new string[size]; //Declaramos un arreglo del tama�o ingresado para los autores

	cout << "Por favor ingrese la siguiente informaci�n de los Libros: \n";
	for (int i = 0; i < size; i++)
	{
		cout << "\n******* Libro " << i + 1 << "********:\n";
		cout << "Titulo: ";

		getline(cin, titulos[i]);
		cout << "Autor: ";
		
		getline(cin, autores[i]);
	}

	//Liberamos la memoria de ambos punteros
	delete[] titulos;
	delete[] autores;
	titulos = nullptr;
	autores = nullptr;

	system("pause");

	return 0;
}