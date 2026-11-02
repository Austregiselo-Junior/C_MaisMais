// TipoDePassagemDeParametro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "TipoDePassagemDeParametro.h"
#include <iostream>

void PassagemPorValor(int Numero1, int Numero2)
{
	auto temp{ Numero1 };
	Numero1 = Numero2;
	Numero2 = temp;

	std::cout << "\n---------------  Passagem de parâmetro por valor  -----------------\n";
	std::cout << "\nValor de Numero1: " << Numero1 << "\n";
	std::cout << "\nValor de Numero2: " << Numero2 << "\n";
}

void PassagemPorReferencia(int& Numero1, int& Numero2)
{
	auto temp{ Numero1 };
	Numero1 = Numero2;
	Numero2 = temp;

	std::cout << "\n---------------  Passagem de parâmetro por referência  -----------------\n";
	std::cout << "\nValor de Numero1: " << Numero1 << "\n";
	std::cout << "\nValor de Numero2: " << Numero2 << "\n";
}

void PassagemPorReferenciaPonteiro(int* Numero1, int* Numero2)
{
	auto temp{ *Numero1 };
	*Numero1 = *Numero2;
	*Numero2 = temp;

	std::cout << "\n---------------  Passagem de parâmetro por referência (ponteiro)  -----------------\n";
	std::cout << "\nValor de Numero1: " << *Numero1 << "\n";
	std::cout << "\nValor de Numero2: " << *Numero2 << "\n";
}



int main()
{
	setlocale(LC_ALL, "Portuguese");
	int Numero1{}, Numero2{};
	std::cout << "\nDigite o valor de Numero1:\n";
	std::cin >> Numero1;
	std::cout << "\nValor de Numero1: " << Numero1 << "\n";

	std::cout << "\nDigite o valor de Numero2:\n";
	std::cin >> Numero2;
	std::cout << "\nValor de Numero2: " << Numero2 << "\n";

	PassagemPorValor(Numero1, Numero2);
	PassagemPorReferencia(Numero1, Numero2);
	PassagemPorReferenciaPonteiro(&Numero1, &Numero2);


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
