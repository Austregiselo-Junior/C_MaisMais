// EstruturaDeRepeticao.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdlib>
#include <iostream>

int main()
{
	std::cout << "----------------------  While Loop  ----------------------\n";

	int i = 0;
	while (i <= 50)
	{
		i++;
		std::cout << "Número: " << i << std::endl;
	}
	std::cout << "Número maior que 50: " << i << std::endl;

	std::cout << "\n---------------------- Do-While Loop  ----------------------\n";
	int j = 0;
	do
	{
		j++;
		std::cout << "Número: " << j << std::endl;
	} while (j <= 50);
	std::cout << "Número maior que 50: " << j << std::endl;

	std::cout << "\n---------------------- For Loop  ----------------------\n";
	int soma = 0;
	for (int k = 0; k <= 50; k++)
	{
		std::cout << "Número: " << k << std::endl;
		soma += k;
	}
	std::cout << "Soma dos números: " << soma << std::endl;

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
