#include <iomanip>
#include <iostream>
#include <vector>

struct Aluno
{
	std::string nome;
	int idade;
};

void MostrarDados(std::vector<Aluno> Dado); // Passagem por Valor
void MostrarDados(std::vector<Aluno>* Dado); // Passagem por Ponteiro
void AlterarDados(std::vector<Aluno>& Dado); // Passagem por Referência
void AlterarDados(std::vector<Aluno>* Dado); // Passagem por Ponteiro

int main()
{
	std::vector<Aluno> Dado;
	Aluno aluno1{ "João", 20 };
	Dado.push_back(aluno1);

	MostrarDados(Dado);
	MostrarDados(&Dado);

	AlterarDados(Dado);
	std::cout << "************** Dados após Passagem por Referência ****************\n";
	for (auto& aluno : Dado)
	{
		std::cout << "Nome: " << aluno.nome << "\n";
		std::cout << "Idade: " << aluno.idade << "\n";
	}

	AlterarDados(&Dado);
	std::cout << "************** Dados após Passagem por Ponteiro ****************\n";
	for (auto& aluno : Dado)
	{
		std::cout << "Nome: " << aluno.nome << "\n";
		std::cout << "Idade: " << aluno.idade << "\n";
	}

	system("pause");
}

void MostrarDados(std::vector<Aluno> Dado)
{
	std::cout << "**************  Mostrar Dados do Aluno por Passagem de Valor ****************\n";

	for (auto& aluno : Dado)
	{
		std::cout << "Nome: " << aluno.nome << "\n";
		std::cout << "Idade: " << aluno.idade << "\n";
	}
}

void MostrarDados(std::vector<Aluno>* Dado)
{
	std::cout << "**************  Mostrar Dados do Aluno por Passagem de Ponteiro ****************\n";

	for (auto& aluno : *Dado)
	{
		std::cout << "Nome: " << aluno.nome << "\n";
		std::cout << "Idade: " << aluno.idade << "\n";
	}
}

void AlterarDados(std::vector<Aluno>& Dado)
{
	std::cout << "**************  Alterar Dados do Aluno por Passagem de Referência ****************\n";

	Dado[0].nome = "Maria";
	Dado[0].idade = 25;

	for (auto& aluno : Dado)
	{
		std::cout << "Nome: " << aluno.nome << "\n";
		std::cout << "Idade: " << aluno.idade << "\n";
	}
}

void AlterarDados(std::vector<Aluno>* Dado) // Dado alocado na Heap
{
	std::cout << "**************  Alterar Dados do Aluno por Passagem de Ponteiro ****************\n";

	Dado->at(0).nome = "Carlos";
	Dado->at(0).idade = 30;

	for (auto& aluno : *Dado)
	{
		std::cout << "Nome: " << aluno.nome << "\n";
		std::cout << "Idade: " << aluno.idade << "\n";
	}
}


