#pragma once
#include "Pessoa.h"
class Professor : public Pessoa
{
private:
	std::string _departamento;

public:
	Professor()
	{}

	Professor(std::string nome, int cpf, int matricula, std::string departamento) : Pessoa(nome, cpf, matricula)
	{
		_departamento = departamento;
	}

	void EfetuarChamada();
	void EntregarPauta();
	std::string GetDepartamento();

	void SetDepartamento(std::string departamento);
	void MostrarDados() override;
};

