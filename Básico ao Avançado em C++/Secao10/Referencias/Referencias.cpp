// Referencias.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::cout << "\n---------------  Ponteiro X Referência  -----------------\n";
	int Numero{ 1024 };
	int Numero2{ 2048 };
	std::cout << "\n---------------  Ponteiro  -----------------\n";
	int* ptr = &Numero;
	*ptr = 4048;
	std::cout << "\nValor de Numero: " << *ptr << std::endl;
	std::cout << "\nValor de ptr: " << ptr << std::endl;
	std::cout << "\nValor de Numero: " << Numero << std::endl;

	ptr = &Numero2;
	std::cout << "\nValor de ptr: " << ptr << std::endl;

	*ptr = Numero + 2000;
	std::cout << "\nValor de Numero2: " << Numero2 << std::endl;
	std::cout << "\nValor de *ptr: " << *ptr << std::endl;

	std::cout << "\n---------------  Referência  -----------------\n";
	int& RefNumero{ Numero2 }; // Referencia a Numero	
	RefNumero = 5000; // Modifica o valor de Numero2
	std::cout << "\nValor de RefNumero: " << RefNumero << std::endl;
	std::cout << "\nReferência de RefNumero: " << &RefNumero << std::endl;
	std::cout << "\nValor de Numero2: " << Numero2 << std::endl;
	std::cout << "\nReferência de Numero2: " << &Numero2 << std::endl;

	// Ponteiro: Variável que garda um endereço de memória de outra variável.
	// Referência: Variável que é um apelido para outra variável.


	system("pause");


}




// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
