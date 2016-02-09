// Ejercicio de Pilas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

typedef struct Nodo {
	int data;
	struct Nodo* next;
}Stack;

Stack *pfirst;
Stack *plast;

void Push(int data);
Stack *Pop();
void printElements();
int countElements();
Stack *find(int data);

int main()
{
	std::cout << "Test Push" << std::endl;
	Push(5);
	Push(12);
	Push(3123);
	std::cout << "Actualmente hay: " << countElements() << " elementos en el stack."<< std::endl;
	printElements();
	Stack *test = Pop();
	std::cout <<"Popped out: " <<test->data << std::endl;
	std::cout << "Actualmente hay: " << countElements() << " elementos en el stack." << std::endl;
	printElements();
	

    return 0;
}

void Push(int data)
{
	int t;
	Stack *item;
	item = (Stack*)malloc(sizeof(Stack));
	if(!item)
	{
		std::cout << "Memory problem..." << std::endl;
	}

	item->data = data;

	if(pfirst == nullptr && plast == nullptr)
	{
		item->next = nullptr;
		pfirst = item;
		plast = item;
		std::cout << "Pushed: " << item->data << std::endl;
	}else
	{
		item->next = pfirst;
		pfirst = item;
		std::cout << "Pushed: " << item->data << std::endl;
	}
}

Stack * Pop() //Se define la funcin para darle pop al elemento del Stack.
{
	if(countElements()>0)
	{
		Stack*temp, *del;
		if(countElements()==1)
		{
			del = pfirst;
			pfirst = nullptr;
			plast = nullptr;
		}else
		{
			temp = pfirst;
			pfirst = pfirst->next;
			del = temp;
			temp = nullptr;
		}
		return del;
	}
	return nullptr;
}

void printElements()//Funcion para imprimir todos los elementos del Stack
{
	Stack *i;
	i = pfirst;
	if(countElements()>0)
	{
		while(i!=nullptr)
		{
			std::cout << i->data << std::endl;
			i = i->next;
		}
	}
	else
		std::cout << "Este elemento no existe.\n";
}

int countElements()//Funcion para contar cuantos elementos se encuentran en el Stack;
{
	Stack *i;
	int t = 0;
	i = pfirst;
	while(i!=NULL)
	{
		t = t + 1;
		i = i->next;
	}
	return t;
}

Stack * find(int data)//Funcion para encontrar un elemento en el Stack.
{
	Stack *t = pfirst;
	int f = 0;
	while (t != NULL)
	{
		if (t->data == data) f = 1;
		t = t->next;
	}
	if (f != 0) return t;
	return nullptr;
}
