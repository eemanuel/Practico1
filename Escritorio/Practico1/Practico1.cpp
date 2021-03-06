// Practico1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

#define SUMA(A, B) ((A)+(B))

using namespace std;

float otro_num_p_sumar(float, float);
char controlador_fin(char);

int main()
{
	char fin = 's';
	float parcial = 0, num_a_sumar = 0;
	cout << "SE CALCULARA LA SUMA DE DOS O MAS NUMEROS";
	cout << "\n\n\n-------------------------------------------------------------\n";
	cout << "\nPrimero, ingrese un numero\n";
	cin >> parcial;
	parcial = otro_num_p_sumar(parcial, num_a_sumar);
	fin = controlador_fin(fin);

	while (fin == 's')
	{
		parcial = otro_num_p_sumar(parcial, num_a_sumar);
		fin = controlador_fin(fin);
	}

	cout << "\n\n\n\n\n\n\nEl RESULTADO FINAL de la sumatoria es:   [ " << parcial << " ]\n";
	getchar();
	getchar();
	return 0;
}

float otro_num_p_sumar(float parcial_func, float num_a_sumar_func)
{
	cout << "\n\n\n-------------------------------------------------------------\n";
	cout << "\nIngrese otro numero para sumarlo al anterior\n";
	cin >> num_a_sumar_func;
	parcial_func = parcial_func + num_a_sumar_func;
	cout << "\n\nEl resultado de la sumatoria actual es: [ " << parcial_func << " ]\n";
	cout << "\nIngresara otro numero para sumar al resultado anterior? (s/n)\n";
	return parcial_func;
}

char controlador_fin(char fin_func)
{
	cin >> fin_func;
	while (fin_func != 's' && fin_func != 'n')
	{
		cout << "\n\n\n_________________________   ERROR  _________________________\n";
		cout << "Debe ingresar 's' (SI) o 'n' (NO), otro caracter es invalido\n";
		cin >> fin_func;
	}
	return fin_func;
}