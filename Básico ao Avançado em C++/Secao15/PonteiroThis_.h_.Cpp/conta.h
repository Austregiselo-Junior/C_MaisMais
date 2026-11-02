#pragma once
#include <iostream>
#include <string>
class conta
{
private:
	std::string Banco;
	int Agencia;
	int NumConta;
	std::string Titular;
	double Saldo;

public:
	conta();
	conta(std::string Banco, int Agencia, int NumConta, std::string Titular, double Saldo);

	~conta();

	bool Sacar(double valor);
	void Depositar(double valor);
	void Transferir(conta& destino, double valor);
	double ConsultarSaldo();
	std::string GetBanco();
	int GetAgencia();
	int GetNumConta();
	std::string GetTitular();
	void GetEnderecoThis();
	void SetBanco(std::string banco);
	void SetAgencia(int agencia);
	void SetNumConta(int numConta);
	void SetTitular(std::string titular);
};

