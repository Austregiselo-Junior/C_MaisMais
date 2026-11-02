// Vector_ForEach_Mascara.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <vector>

float media(std::vector<float> velocidades)
{
	float soma = 0;
	for (float velocidade : velocidades) {
		soma += velocidade;
	}
	return soma / velocidades.size();
}


int main()
{
	std::cout << "---------------------------------  Exercicio ForEach  -------------------------------\n";
	std::vector<std::string> nomes = { "João", "Maria", "José", "Ana" }; // vactor é um array dinâmico que pode trocar de tamanho durante a execução do programa.

	nomes.push_back("Batisla Lima"); // Adiciona um novo nome ao vetor
	for (std::string nome : nomes) {
		std::cout << nome << std::endl;
	}

	std::cout << "---------------------------------  Exercicio 2 ForEach  -------------------------------\n";
	std::vector<float> velocidades = { 10.5, 20.3, 15.8, 12.1 };
	std::cout << "Média das velocidades: " << media(velocidades) << std::endl;
	return 0;
	system("pause");

}

