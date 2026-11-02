

#include <iostream>
struct Data // Se não setar a visibilidade por padrão é público
{
	static int contador; //  variáveis de uma struct são inicializadas em tempo de execução por isso dar ero se tentar iniciar dentro do struct.
	int id;
	int dia, mes, ano;

	Data()
	{
		id = contador++;
		std::cout << "Construtor chamado (" << id << ")\n";
	}
	~Data() { std::cout << "Destrutor chamado (" << id << ")\n"; }
};

int Data::contador = 0;

int main()
{
	Data Agenda1;
	Agenda1.dia = 1;
	Agenda1.mes = 1;
	Agenda1.ano = 2021;
	{
		Data Agenda2;
		Agenda2.dia = 2;
		Agenda2.mes = 2;
		Agenda2.ano = 2022;
	}
	{
		Data Agenda2;
		Agenda2.dia = 22;
		Agenda2.mes = 22;
		Agenda2.ano = 2022;
	}
	Data* Agenda3 = new Data(); // Alocação dinâmica, como tá na heap , não é destruído automaticamente, precisa de delete.
	Agenda3->dia = 3;
	Agenda3->mes = 3;
	Agenda3->ano = 2023;

	std::cout << "\nStruct Vs Class\n";
	//Struct: Quando queremos uma coleção sempre públicas ou tipod abstratos como vetor 3d e coordenadas.
	//Class: Quando queremos modelar formas mais complexas.

}
// OBS: Structs são por padrão públicas, enquanto classes por padrão são privadas.

