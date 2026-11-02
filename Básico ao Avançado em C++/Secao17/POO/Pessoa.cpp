#include "Pessoa.h"

void Pessoa::AcessarSistema()
{
	std::cout << "------- Acessar Sistemma ---------" << "\n";
}

std::string Pessoa::GetNome()
{
	return _nome;
}

int Pessoa::GetCPF()
{
	return _cPF;
}

int Pessoa::GetMatricula()
{
	return _matricula;
}

void Pessoa::SetNome(std::string nome)
{
	if (!nome.empty())
	{
		_nome = nome;
	}
}

void Pessoa::SetCPF(int cpf)
{
	_cPF = cpf;
}

void Pessoa::SetMatricula(int matricula)
{
	_matricula = matricula;
}

void Pessoa::MostrarDados()
{
	std::cout << "****DADOS****" << "\n";
	std::cout << "Nome: " << GetNome() << "\n";
	std::cout << "CPF: " << GetCPF() << "\n";
	std::cout << "Matricula: " << GetMatricula() << "\n";
}


