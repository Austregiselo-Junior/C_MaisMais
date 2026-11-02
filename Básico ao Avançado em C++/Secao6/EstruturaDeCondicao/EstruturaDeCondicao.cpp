// EstruturaDeCondicaoERepeticao.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::cout << "--------------------------  Operador Ternário  -------------------------------\n";

	std::cout << "Digite um número: ";
	int n1;
	std::cin >> n1;

	std::cout << "Digite outro número: ";
	int n2;
	std::cin >> n2;

	int MNumero = (n1 > n2) ? n1 : n2;
	std::cout << "O maior número é: " << MNumero << std::endl;

	(n1 > n2) ? std::cout << "O n1 é maior.\n" : std::cout << "O n2 é maior.\n";

	std::cout << "--------------------------  Switch/Case  -------------------------------\n";

	int n3, n4;
	char op;
	std::cout << "\nDigite um número: ";
	std::cin >> n3;
	std::cout << "Digite outro número: ";
	std::cin >> n4;
	std::cout << "Digite uma operação (+, -, *, /): ";
	std::cin >> op;

	switch (op) {
	case '+':
		std::cout << "Soma: " << n3 + n4 << std::endl;
		break;
	case '-':
		std::cout << "Subtração: " << n3 - n4 << std::endl;
		break;
	case '*':
		std::cout << "Multiplicação: " << n3 * n4 << std::endl;
		break;
	case '/':
		if (n4 != 0) {
			std::cout << "Divisão: " << n3 / n4 << std::endl;
		}
		else {
			std::cout << "Erro: Divisão por zero!" << std::endl;
		}
		break;
	default:
		std::cout << "Operação inválida!" << std::endl;
	}

	system("pause");

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
