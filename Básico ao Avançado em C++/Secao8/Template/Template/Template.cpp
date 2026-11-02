#include "Template.h"


//Quando uma mesma função se repete podemos criar uma função template, que é uma função genérica, que pode receber qualquer tipo de dado.


int Template::soma_int(int x, int y)
{
	return x + y;
}

float Template::soma_float(float x, float y)
{
	return x + y;
}

double Template::soma_double(double x, double y)
{
	return x + y;
}

template <typename T> // Função template, que recebe qualquer tipo de dado T.
T Template::soma(T x, T y)
{
	return x + y;
}

// Instanciações explícitas para que o linker gere os símbolos necessários
template int Template::soma<int>(int, int);
template float Template::soma<float>(float, float);
template double Template::soma<double>(double, double);
