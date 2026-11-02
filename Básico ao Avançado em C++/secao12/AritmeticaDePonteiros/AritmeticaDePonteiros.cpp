

#include <iostream>

int main()
{
	std::cout << "-----------------  Aritmetica de Ponteiros -----------------\n";

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* ptr = arr;

	std::cout << "[ ";
	for (int i = 0; i < 10; i++)
	{
		std::cout << ptr[i] << " "; // Usando aritmética de ponteiros para acessar os elementos do array, é a mesmca coisa que fazer *(ptr + i) e *(arr + i)
	}
	std::cout << "] ";
	system("pause");
}


