#include <iostream>

void funcao01();
void funcao02();
void funcao03();
void funcao04();

int varGlobal{ 10 }; // variável global é armazenada na static/global da RAM

int main()
{
	int varMain{ 00 }; // Como é uma variável local, ela é armazenada na pilha (stack/Pilha) da RAM, sendo restritas ao escopo da função.

	funcao01();

	system("pause");
	return 0;
}

void funcao01()
{
	int var01{ 01 }; // Como é uma variável local, ela é armazenada na pilha (stack/Pilha) da RAM, sendo restritas ao escopo da função.
	static int var01_static{ 20 }; //variável static é Armazenada na static/global da Ran

	std::cout << "funcao01: " << std::endl;
	std::cout << "var01: " << var01 << std::endl;

	var01_static++;
	std::cout << "var01_static: " << var01_static << std::endl;

	funcao02();
}

void funcao02()
{
	int var02{ 02 }; // Como é uma variável local, ela é armazenada na pilha (stack/Pilha) da RAM, sendo restritas ao escopo da função.
	std::cout << "funcao02: " << std::endl;
	std::cout << "var02: " << var02 << std::endl;

	funcao03();
}

void funcao03()
{
	int var03{ 03 }; // Como é uma variável local, ela é armazenada na pilha (stack/Pilha) da RAM, sendo restritas ao escopo da função.
	std::cout << "funcao03: " << std::endl;
	std::cout << "var03: " << var03 << std::endl;

	funcao04();
}

void funcao04()
{
	int var04{ 04 }; // Como é uma variável local, ela é armazenada na pilha (stack/Pilha) da RAM, sendo restritas ao escopo da função.
	std::cout << "funcao04: " << std::endl;
	std::cout << "var04: " << var04 << std::endl;
}

//OBS: Quando temos "Casa CasadePraia" estamos criando um objeto estático, ou seja, ele é criado na stack. Quando temos "Casa* CasaDePraia = new Casa()" estamos´criando objetio dinâmico que é alocado na heap. A diferença é que o objeto estático é destruído automaticamente quando sai do escopo, enquanto o objeto dinâmico precisa ser destruído manualmente usando "delete CasaDePraia;" para liberar a memória alocada.
