#pragma once
#include "Pessoa.h"
class Bibliotecario : public Pessoa
{
private:
	std::string _curso;

public:
	Bibliotecario() {}
	Bibliotecario(std::string nome, int cpf, int matricula, std::string curso) :Pessoa(nome, cpf, matricula)
	{
		_curso = curso;
	}

	void CadastrarLivros();
	void SetNome(std::string nome) override;
	void MostrarDados() override;
};

