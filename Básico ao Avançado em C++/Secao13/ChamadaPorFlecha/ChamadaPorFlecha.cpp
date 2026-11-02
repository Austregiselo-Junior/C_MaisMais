#include <iostream>

class Casa
{

private:
	int NumQuartos{ 4 };
	float Tamanho{ 90.0f };
	bool bTemSuite{ true };

public:
	void MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
	void SetNumQuartos(int Num);

};

int main()
{
	Casa* CasaDePraia = new Casa();
	CasaDePraia->MostrarTamanho(); //Mesma coiosa que (*CasaDePraia).MostrarTamanho(), chamamos de obj dinâmico , pois alocamos na memória dinamicamente na heap.
	CasaDePraia->SetNumQuartos(6);

	std::cout << "\n Num Quartos: " << CasaDePraia->ObtenhaNumeroDeQuartos();
	std::cout << "\n Tem Suite: ";
	CasaDePraia->TemSuite() ? std::cout << "Sim" : std::cout << "Não" << "\n";
	std::cout << "\n";

	system("PAUSE");
	return 0;
}

void Casa::MostrarTamanho()
{
	std::cout << "\nTamanho: " << Tamanho;
}

int Casa::ObtenhaNumeroDeQuartos()
{
	return NumQuartos;
}

bool Casa::TemSuite()
{
	return bTemSuite;
}

void Casa::SetNumQuartos(int Num)
{
	if ((Num <= 6) && (Num >= 0))
	{
		NumQuartos = Num;
	} else
	{
		std::cout << "\nNumero de Quartos Invalidos\n";
	}

}

//OBS: Quando temos "Casa CasadePraia" estamos criando um objeto estático, ou seja, ele é criado na stack. Quando temos "Casa* CasaDePraia = new Casa()" estamos´criando objetio dinâmico que é alocado na heap. A diferença é que o objeto estático é destruído automaticamente quando sai do escopo, enquanto o objeto dinâmico precisa ser destruído manualmente usando "delete CasaDePraia;" para liberar a memória alocada.