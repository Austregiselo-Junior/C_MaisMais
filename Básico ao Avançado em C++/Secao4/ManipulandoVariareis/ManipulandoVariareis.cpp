// ManipulandoVariareis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

	int NumComputadores = 100;
	int SerialComputadores = 11111;
	std::cout << "View\n";
	std::cout << "\tNumero de computadores: " << NumComputadores << std::endl;
	std::cout << "\tSerial dos computadores: " << SerialComputadores << std::endl;

	std::cout << "View na memória\n";
	std::cout << "\tEndereço de memória da variável 'NumComputadores': " << &NumComputadores << std::endl;
	std::cout << "\tEndereço de memória da variável 'SerialComputadores': " << &SerialComputadores << std::endl;

	std::cout << "Tamanho das variáveis em bytes:\n";
	std::cout << "\tTamanho da variável 'NumComputadores': " << sizeof(NumComputadores) << " bytes\n";
	std::cout << "\tTamanho da variável 'SerialComputadores': " << sizeof(SerialComputadores) << " bytes\n";
	system("pause");


	std::cout << "Exercicio seção 5\n";
	float Num1, Num2, Num3;

	std::cout << "Digite o primeiro número: ";
	std::cin >> Num1;
	std::cout << "Digite o segundo número: ";
	std::cin >> Num2;
	std::cout << "Digite o terceiro número: ";
	std::cin >> Num3;

	std::cout << "O resultado da soma dos três números é: " << (Num1 + Num2 + Num3)/3 << std::endl;
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
