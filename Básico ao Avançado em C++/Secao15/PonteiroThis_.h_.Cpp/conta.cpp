#include "conta.h"

conta::conta()
{
	Banco = "";
	Agencia = 0;
	NumConta = 0;
	Titular = "";
	Saldo = 0;

	std::cout << "\nConstrutor do obj com endereço " << this << "foi chamado!\n";
}

conta::conta(std::string Banco, int Agencia, int NumConta, std::string Titular, double Saldo)
{
	this->Banco = Banco;
	this->Agencia = Agencia;
	this->NumConta = NumConta;
	this->Titular = Titular;
	this->Saldo = Saldo;
}

conta::~conta()
{
	std::cout << "\nDestrutor do obj com endereço " << this << "foi chamado!\n";
}

bool conta::Sacar(double valor)
{
	if (Saldo < valor)
	{
		std::cout << "\Saldo Insuficiente!\n";
		std::cout << "\Saldo atual: R$" << ConsultarSaldo() << "\n";
		return false;
	}
	Saldo -= valor;
	std::cout << "\Saldo atual: R$" << ConsultarSaldo() << "\n";
	return true;
}

void conta::Depositar(double valor)
{
	Saldo += valor;
	std::cout << "\nDeposito de R$ " << valor << " Efetuado com Sucesso!\n";
	std::cout << "\Saldo atual: R$" << ConsultarSaldo() << "\n";
}

void conta::Transferir(conta& destino, double valor)
{
	if (Saldo < valor)
	{
		std::cout << "\nSaldo Insuficiente!\n";
	} else
	{
		destino.Depositar(valor);
		Saldo -= valor;

		std::cout << "\n*****Dados*****\n";
		std::cout << "Titular: " << destino.GetTitular() << "\n";
		std::cout << "Banco: " << destino.GetBanco() << "\n";
		std::cout << "Agencia: " << destino.GetAgencia() << "\n";
		std::cout << "Conta: " << destino.GetNumConta() << "\n";

		std::cout << "Transferência Realizada com Sucesso!\n";
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
	}
}

double conta::ConsultarSaldo()
{
	return Saldo;
}

std::string conta::GetBanco()
{
	return Banco;
}

int conta::GetAgencia()
{
	return Agencia;
}

int conta::GetNumConta()
{
	return NumConta;
}

std::string conta::GetTitular()
{
	return Titular;
}

void conta::GetEnderecoThis()
{
	std::cout << "\nEndereco do objeto (this): " << this << "\n";
}

void conta::SetBanco(std::string Banco)
{
	this->Banco = Banco; // Mesma coisa que (*this).Banco = Banco, é importante por o this porque nele fica o endereço do argumento, assim o atributo Banco recebo o valor do argumento.
	// OBS: Mas o This apenas é necessário se o argumento é igual ao atributo
}

void conta::SetAgencia(int Agencia)
{
	this->Agencia = Agencia;
}

void conta::SetNumConta(int NumConta)
{
	this->NumConta = NumConta;
}

void conta::SetTitular(std::string titular)
{
	Titular = titular; // Aqui não precisa do This porque apenas é necessário se o argumento é igual ao atributo

}

// OBS: 
//	Parâmetro -> definição do que a função recebe
//	Argumento -> valor que é passado para o parâmetro
