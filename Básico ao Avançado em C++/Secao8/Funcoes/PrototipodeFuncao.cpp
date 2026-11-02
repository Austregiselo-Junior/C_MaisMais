
#include "Matematica.h"
#include "Matematica2.h"
#include "VariavelStatica.h"
#include <iostream>
#include <Windows.h>

double n1, n2;
char operacao;

// Coerção de tipo: é a conversão de um tipo de dado para outro tipo de dado feita automáticamente pelo compilador. Chamamos isso de conversão implícita.

// O Cast é a conversão explicita de um tipo de dado para outro.

int main()
{
	SetConsoleOutputCP(65001);

	std::cout << "Digite o primeiro numero: ";
	std::cin >> n1;
	std::cout << "Digite o segundo numero: ";
	std::cin >> n2;
	std::cout << "Digite a operacao (+, -, *, /): ";
	std::cin >> operacao;

	std::cout << "\n Resultado da operação: " << matematica::soma(operacao, n1, n2) << "\n";
	std::cout << "\n Resultado da operação: " << matematica2::soma(n1, n2) << "\n";

	std::cout << "-------------------------- Variáveis estáticas -------------------------- \n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Chamada " << VariavelStatica::Contator() << "\n";
	}
	return 0;
}
