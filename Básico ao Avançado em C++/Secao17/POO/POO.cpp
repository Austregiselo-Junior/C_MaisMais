#include "Bibliotecario.h"
#include "Professor.h"
#include <iostream>
int main()
{
	Professor Marcos("Pacheco", 1234546, 123456, "Udemy");
	Bibliotecario ObiWa("Rbens", 123456, 6789903, "AgoraVai");

	Marcos.MostrarDados();
	ObiWa.MostrarDados();

	ObiWa.SetNome("Ricardo");
	ObiWa.MostrarDados();

	system("Pause");
}

