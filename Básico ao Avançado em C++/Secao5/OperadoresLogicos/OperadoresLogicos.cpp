// OperadoresLogicos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <clocale>
#include <cstdio>
#include <iostream>
#include <string>
#include <tchar.h>
#include <vector>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	std::cout << "Operadores lógicos\n";

	float numero1, numero2, numero3;
	float media;
	char resultado;

	do
	{
		std::cout << "Digite o primeiro número: ";
		std::cin >> numero1;
		std::cout << "Digite o segundo número: ";
		std::cin >> numero2;
		std::cout << "Digite o terceiro número: ";
		std::cin >> numero3;

		media = (numero1 + numero2 + numero3) / 3;


		std::cout << "A média é: " << media << std::endl;
		std::cout << "Deseja calcular novamente?" << std::endl;

		std::cin >> resultado;
	} while (resultado == 's' || resultado == 'S');

	std::cout << "\nSaindo do programa...";
	system("Pause");

	std::cout << "\n---------------------  Usando %C, %s, %d, %l e %f  ----------------------------------\n";

	std::string Texto{ "Olá, mundo!\n" };
	float nReal{ 3.14159 };
	char letra{ 'A' };

	std::printf("Valores: %c, %s, %d, %f.2\n", letra, Texto.c_str(), 10, nReal);

	std::string s = "hello";
	printf("%s\n", s.c_str());    // OK
	std::cout << s << '\n';

	std::string Texto1{ "\n-------------  Pré e pós fixado  -------------------\n" };
	std::cout << Texto1;

	//pós fixado
	int num1 = 20;
	num1++;
	std::cout << num1;

	//pré - fixado
	int num2 = 20;
	++num2;
	std::cout << num2;

	std::string Texto2{ "\n-------------  Pré e pós fixado com cout  -------------------\n" };
	std::cout << Texto2;

	//pós fixado
	int num3 = 20;
	std::cout << num3++;

	//pré - fixado
	int num4 = 20;
	std::cout << ++num4;

	return 0;


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
