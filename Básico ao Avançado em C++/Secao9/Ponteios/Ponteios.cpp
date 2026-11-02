// Ponteios.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	std::cout << "------------------  Ponteiros  -------------------------\n\n";

	int numero{ 450 };
	std::cout << "Valor da variável numero: " << numero << "\n";
	std::cout << "Valor do endereço da variável &numero: " << &numero << "\n";
	std::cout << "-------------------------------------------\n\n";

	int* ptr{ nullptr };
	std::cout << "Valor da variável ptr: " << ptr << "\n";
	std::cout << "Valor do endereço da variável &ptr: " << &ptr << "\n";
	std::cout << "-------------------------------------------\n\n";

	/* -- Atribuindo o endereço de numero ao ponteiro ptr --
		  ptr ganha o endereço e o valor de numero*/
	ptr = &numero;
	std::cout << "Valor da variável ptr: " << ptr << "\n";
	std::cout << "Valor do endereço da variável &ptr: " << &ptr << "\n";
	std::cout << "Valor apontado pelo ponteiro *ptr: " << *ptr << "\n";
	std::cout << "-------------------------------------------\n\n";

	int numero2{ 450 };
	int* ptr2{ nullptr };
	int* ptr3{ nullptr };
	ptr2 = &numero2;
	ptr3 = ptr2;

	*ptr3 = (*ptr2 + 100);
	std::cout << "Valor da variável ptr2: " << ptr2 << "\n";
	std::cout << "Valor do endereço da variável &ptr2: " << &ptr2 << "\n";
	std::cout << "Valor apontado pelo ponteiro *ptr2: " << *ptr2 << "\n";
	std::cout << "Valor da variável ptr3: " << ptr3 << "\n";
	std::cout << "Valor do endereço da variável &ptr3: " << &ptr3 << "\n";
	std::cout << "Valor apontado pelo ponteiro *ptr3: " << *ptr3 << "\n";
	std::cout << "-------------------------------------------\n\n";

	std::cout << "------------------  Ponteiros Genéricos  -------------------------\n\n";
	void* ptrG{ nullptr }; // Necessário quando não se sabe o tipo de dado que será apontado pelo ponteiro
	std::cout << "Valor da variável ptrG: " << ptrG << "\n";
	std::cout << "Valor do endereço da variável &ptrG: " << &ptrG << "\n";

	std::cout << "------------------   Conversão explícita para int*  -------------------------\n\n";
	int numeroG{ 450 };
	ptrG = &numeroG;
	std::cout << "Valor da variável ptrG: " << ptrG << "\n";
	std::cout << "Valor do endereço da variável &ptrG: " << &ptrG << "\n";
	std::cout << "Valor apontado pelo ponteiro *(int*)ptrG: " << *(int*)ptrG << "\n"; // Conversão explícita para int*

	std::cout << "------------------   Conversão explícita para char*  -------------------------\n\n";
	char Letra{ 'A' };
	ptrG = &Letra;
	std::cout << "Valor da variável ptrG: " << ptrG << "\n";
	std::cout << "Valor do endereço da variável &ptrG: " << &ptrG << "\n";
	std::cout << "Valor apontado pelo ponteiro *(char*)ptrG: " << *(char*)ptrG << "\n"; // Conversão explícita para char*



	std::cout << "------------------   Exercicio  -------------------------\n\n";
	int nEx{ 234 };
	int* ptrEx{ nullptr };

	ptrEx = &nEx;
	*ptrEx = 1456;
	nEx = *ptrEx;
	std::cout << "Valor da variável nEx: " << nEx << "\n";
	std::cout << "Endereço da variável &nEx: " << &nEx << "\n";
	std::cout << "Endereço da variável &ptrEx: " << &ptrEx << "\n";

	int* ptrOutro{ nullptr };
	ptrOutro = &nEx;
	std::cout << "Endereço da variável &ptrOutro: " << &ptrOutro << "\n";

	*ptrEx = (200 + nEx);
	*ptrOutro = *ptrEx;
	std::cout << "Valor de número através do ponteiro ptrOutro: " << *ptrOutro << "\n";

	char* ptrt;
	char LetraA{ 'A' };
	ptrt = &LetraA;
	*ptrt = 'B'; // Alterando o valor de LetraA através do ponteiro ptrt porque ptrt aponta para o endereço de LetraA
	std::cout << "Valor de LetraA: " << LetraA << "\n";
	std::cout << "Valor de LetraA através do ponteiro ptrt: " << *ptrt << "\n";

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
