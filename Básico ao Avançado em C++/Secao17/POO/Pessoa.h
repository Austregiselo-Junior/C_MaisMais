#pragma once
#include <iostream>
#include <string>

class Pessoa
{
private:
	std::string _nome;
	int _cPF;
	int _matricula;

public:
	Pessoa() :_nome(""), _cPF(0), _matricula(0) {}

	Pessoa(std::string nome, int cpf, int matricula)
	{
		_nome = nome;
		_cPF = cpf;
		_matricula = matricula;
	}

	void AcessarSistema();
	std::string GetNome();
	int GetCPF();
	int GetMatricula();

	virtual void SetNome(std::string nome);
	void SetCPF(int cpf);
	void SetMatricula(int matricula);
	virtual void MostrarDados();
};

