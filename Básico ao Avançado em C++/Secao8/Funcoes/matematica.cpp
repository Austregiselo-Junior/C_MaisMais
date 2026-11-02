#include "Matematica.h"
#include <iostream>


double matematica::soma(char operacao, double a, double b)
{
	switch (operacao)
	{
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	default:
		std::cout << "Operacao invalida\n";
		break;
	}
	return 0;
}
