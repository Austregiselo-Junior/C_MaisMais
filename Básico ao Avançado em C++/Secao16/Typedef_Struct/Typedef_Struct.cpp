#include <iostream>

typedef struct Livro// Creação de um alias (apelido) para o struct Livro, o apelido é RegistrarLivro
{
	// OBS: Se remover o typedef, o alias RegistrarLivro vai ser apenas uma variável..
	int ID;
	float Preco;
	std::string Titulo;
	std::string Editora;
} RegistrarLivro;

int main()
{
	struct Livro livro1; // Forma tradicional de chamar o struct (Criação de uma variável do tipo struct Livro)
	RegistrarLivro livro2; // Chamando struct através do alias.

	livro2.ID = 1;
	livro2.Preco = 29.90;
	livro2.Titulo = "C++ Programming";
	livro2.Editora = "Publisher Name";

	system("pause");
}

// O Pré-processador converte o alias RegistrarLivro em struct Livro.


