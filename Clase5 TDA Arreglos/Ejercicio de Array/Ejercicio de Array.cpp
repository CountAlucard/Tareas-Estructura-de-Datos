// Ejercicio de Array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	const int SIZE = 7;
	int myarray[SIZE] = {13, 829, 125, 52, 213, 56, 22};
	int insert_value;
	int index;

	for (int &x : myarray)	std::cout << " " << x;

	std::cout << "\nIngrese el valor a insertar: ";
	std::cin >> insert_value;
	std::cout << "Ingrese el indice(0-6) en donde lo desea insertar: ";
	std::cin >> index;

	for (int i = SIZE - 1; i > index; i--)
	{
		myarray[i] = myarray[i - 1];
	}

	myarray[index] = insert_value;

	for (int &x : myarray)	std::cout << " " << x;
	std::cout << std::endl;

}

