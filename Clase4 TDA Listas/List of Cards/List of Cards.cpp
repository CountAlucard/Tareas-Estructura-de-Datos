// List of Cards.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
	int mycards[] = { 8, 4, 9, 10, 10, 4, 4, 1, 11, 7 };

	std::list<int> mylist(mycards, mycards + 10);

	std::cout << "Mis Cartas:";
	for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';


	mylist.sort();             //  1, 4, 4, 4, 7,
							   //  8, 9, 10, 10, 11

	mylist.unique();           //  1, 4, 7, 8, 9,
							   //  10, 11

	std::cout << "Mis Cartas (Sin Duplicadas):";
	for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	return 0;
}

