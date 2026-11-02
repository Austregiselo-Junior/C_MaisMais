

#include <iostream>
void DuplicarVetor(int* Array, int Tamanho);
int* InverterVetor(int* Array, int Tamanho);
void MostraVetor(int* Array, int Tamanho);

int main()
{
	std::cout << "--------  Mostrando valores e referências percorrendop um vetor ------\n";
	int Vetor[]{ 1,23,-78,900,234 };
	int* ptr;

	ptr = Vetor; // Mesma coisa que ptr = &Vetor[0];

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Valor:[" << i << "]  Endereco: " << &Vetor[i] << "  Valor: " << Vetor[i] << std::endl;
	}

	std::cout << "\n--------  Endereço com Aritmética de Ponteiros ------\n";

	std::cout << "Endereco de 'ptr' igual a '&Vetor[0]': " << ptr << std::endl;

	std::cout << "(ptr + 0) Endenreço: " << (ptr + 0) << "  Valor: " << *(ptr + 0) << std::endl;
	std::cout << "(ptr + 1) Endenreço: " << (ptr + 1) << "  Valor: " << *(ptr + 1) << std::endl;
	std::cout << "(ptr + 2) Endenreço: " << (ptr + 2) << "  Valor: " << *(ptr + 2) << std::endl;
	std::cout << "(ptr + 3) Endenreço: " << (ptr + 3) << "  Valor: " << *(ptr + 3) << std::endl;
	std::cout << "(ptr + 4) Endenreço: " << (ptr + 4) << "  Valor: " << *(ptr + 4) << std::endl;

	std::cout << "\n--------  Adicionando valores em ptr ------\n";

	std::cout << "Valor de ptr antes de 'ptr++': " << ptr << std::endl;
	ptr++; // Igual a ptr = ptr + 1, ou seja ptr mais um inteiro que é o tipo do vedor.
	std::cout << "Valor de ptr apos 'ptr++': " << ptr << std::endl;

	ptr = &Vetor[3];
	std::cout << "\nValor apontado por 'ptr' depois de 'ptr = &Vetor[3]': " << *ptr << std::endl;

	ptr--;
	std::cout << "Valor apontado por 'ptr' depois de 'ptr--': " << *ptr << std::endl;


	std::cout << "\n--------  Funções que retornam Arrays Invertidos ------\n";
	int Numeros[]{ 1,2,3,4,5,6,7,8,9,10 };
	int Tamanho = sizeof(Numeros) / sizeof(int);

	std::cout << "sizeOf(Numero): " << sizeof(Numeros) << "Bytes\n" << std::endl;
	std::cout << "sizeOf(int): " << sizeof(int) << "Bytes\n" << std::endl;
	std::cout << "Tamanho do vetor: " << Tamanho << std::endl;

	MostraVetor(Numeros, Tamanho);
	DuplicarVetor(Numeros, Tamanho);
	MostraVetor(Numeros, Tamanho);
	MostraVetor(InverterVetor(Numeros, Tamanho), Tamanho);

	std::cout << "\n Pressione Enter para sair...";
	std::cin.get();
}

void DuplicarVetor(int* Array, int Tamanho)
{
	for (int i = 0; i < Tamanho; i++)
	{
		Array[i] *= 2;
	}
}

int* InverterVetor(int* Array, int Tamanho)
{
	int j = 0;
	static int ArraiInvertido[10];
	for (int i = Tamanho - 1; i >= 0; i--)
	{
		ArraiInvertido[j] = Array[i];
		j++;
	}
	return ArraiInvertido;
}

void MostraVetor(int* Array, int Tamanho)
{
	std::cout << "\n[";
	for (int i = 0; i < Tamanho; i++) {
		std::cout << Array[i] << "";
	}
	std::cout << "]\n";
}
