// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

class nodo {
public:
	string name;
	list<nodo> adj;
	int grupo = 0;
};

nodo grafo[];
int grupoActual = 1;

nodo buscar(nodo grafo[])
{
	for (int x = 0; x < sizeof(grafo); x++)
	{
		if (grafo[x].grupo == 0)
		{
			return grafo[x];
		}
		else
			nullptr;
	}
}

void asignar(nodo actual)
{
	actual.grupo = grupoActual;
}

void buscarPermitidos(nodo grafo[])
{
	for (int x = 0; x < sizeof(grafo); x++)
	{
		if (grafo[x].grupo == 0)
		{
			bool flag = true;
			int size = grafo[x].adj.size();
			for (int y = 0; y < size; y++)
			{
				if (grafo[x].grupo == grupoActual)
					flag = false;
			}
			if (flag)
				asignar(grafo[x]);
		}
	}
}

int main()
{
	for (int x = 0; x < sizeof(&grafo); x++)
	{
		if (&grafo[x] != NULL)
		{
			nodo actual = grafo[x];
			asignar(actual);
			buscarPermitidos(&grafo[x]);
			grupoActual++;
		}
	}

    return 0;
}

