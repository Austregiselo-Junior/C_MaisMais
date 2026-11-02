// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <array>
#include <clocale>
#include <iostream>
#include <locale>

void AlterarVetor(int array[], int tamanho); // protótipo da função AlterarVetor
void VetorComForEach(int* Ptr_Array);

int main()
{
	std::cout << "--------------------------------  Verores(arrays)  --------------------------------------------\n";

	setlocale(LC_ALL, "Portuguese");
	float Notas[5]{ 0.0f }; // Inicia todos os elementos do array com 0.0f
	float Media{ 0.0f }, Soma{ 0.0f };
	std::string NomeAluno;

	for (int i = 0; i <= 4; i++)
	{
		std::cout << "Digite a nota " << (i + 1) << " do aluno: ";
		std::cin >> Notas[i];

		Soma += Notas[i];
		system("cls");
	}

	Media = Soma / 5.0f;

	std::cout << "A média do aluno " << NomeAluno << " é: " << Media << std::endl;

	std::cout << "--------------------------------  Exercicio 1 (Varrendo um array)  ------------------------------------------\n";

	int Numeros[]{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	int numeroMaximo{ 0 }, numeroMinimo{ 0 };
	std::cout << "Digite 20 números inteiros: \n";

	for (int i = 0; i < 20; i++)
	{
		std::cout << "Digite o número " << (i + 1) << ": ";
		std::cin >> Numeros[i];

		if (Numeros[i] > numeroMaximo)
		{
			numeroMaximo = Numeros[i];
			std::cout << "Número máximo até agora é: " << numeroMaximo << std::endl;
		}
		if (Numeros[i] < numeroMinimo)
		{
			numeroMinimo = Numeros[i];
			std::cout << "Número mínimo até agora é: " << numeroMinimo << std::endl;
		}
	}

	std::cout << "---------------------------------  Tamanho do vetor  --------------------------------------------\n";
	std::cout << "O tamanho do vetor é: " << sizeof(Numeros) / sizeof(int) << std::endl; // A divisão é necessário porque o sizeof(Numeros) retorna o tamanho em bytes do array, e sizeof(int) retorna o tamanho em bytes de um elemento do array. Dividindo os dois, obtemos o número de elementos no array.

	std::cout << "O tamanho do vetor é: " << std::size(Numeros) << std::endl; // Aqui não preisa da divisão a partir do C++17, pois a função std::size() retorna o número de elementos no array.

	std::cout << "---------------------------------  vetor/ponteiros  --------------------------------------------\n";
	AlterarVetor(Numeros, std::size(Numeros)); //AlterarVetor(&Numeros[0], std::size(Numeros));

	return 0;
}

void AlterarVetor(int array[], int tamanho) // Note que o vetor vai ser alterado, porque por padrão ele é passado por referência.
// Seria a mesma coisa que mudar a assinatura para isso AlterarVetor(int *Ptr_Array, int tamanho).
{
	for (int i = 0; i < tamanho; i++)
	{
		array[i] = array[i] * 2;
	}
}




