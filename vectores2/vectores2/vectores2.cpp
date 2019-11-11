// vectores2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	float vector1[3]; 
	float vector2[3];
	float vectorSuma[3];
	int i;

	//Perdimos los datos del primer vector
	for (i = 0; i < 3; i++)
	{
		cout << " Introduce el valor " << i << " del primer vector: ";
		cin >> vector1[i];
	}
	//Perdimos los datos del segundo vector
	for (i = 0; i < 3; i++)
	{
		cout << " Introduce el valor " << i << " del segundo vector: ";
		cin >> vector2[i];
	}
	//Calculamos la suma
	for (i = 0; i < 3; i++)
	{
		vectorSuma[i] = vector1[i] + vector2[i];
	}
	//mostramos el resultado
	cout << "El vector suma es: ";
	for (i = 0; i < 3; i++)
	{
		cout << vectorSuma[i] << " ";
	}
}


