La estructura de datos de esta Pila es almacenar valores int.

En la estructura de datos de un Stack, agregar y remover elementos es un proceso LIFO (Last In, First Out). Permite que los elementos sean agregados al inicio de la lista y que sean removidos del inicio de la lista.

En este ejercicio vamos a construir un Stack para almacenar datos de tipo int. Cada elemento del Stack contiene dos atributos -- el dato y una conexion. 
La parte del dato es para almacenar el valor del int y la parte de la conexion es un apuntador para almacenar la direccion de el siguiente elemento.
Los elementos del Stack estan encadenados por apuntadores(o conexiones). Tambien tenemos dos conexiones importantes utilizadas para apuntar al primer elemento(pfirst) y al ultimo elemento(plast) que nos ayudan con la mayoria de las funciones.

Funciones utilizadas:
void Push(int data); //Funcion que nos permite agregar un elemento al Stack.
Stack *Pop(); //Funcion que nos permite remover/obtener el primer elemento en el Stack.
void printElements(); //Funcion que nos permite imprimir todos los elementos que se encuentran en el Stack.
int countElements(); //Funcion que nos retorna la cantidad de elementos que se encuentran en el Stack.
Stack *find(int data); Funcion que nos permite encontrar -x- valor dentro del Stack;