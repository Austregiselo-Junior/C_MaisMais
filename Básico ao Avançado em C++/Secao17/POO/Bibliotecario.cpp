#include "Bibliotecario.h"

void Bibliotecario::CadastrarLivros()
{
	std::cout << "Livros Cadastrados" << "\n";
}

void Bibliotecario::SetNome(std::string nome)
{
	Pessoa::SetNome(nome);
}

void Bibliotecario::MostrarDados()
{
	Pessoa::MostrarDados();
}
