#include "VariavelStatica.h"

int VariavelStatica::Contator()
{
	static int contador = 0; // Variável estática, só é inicializada uma vez e o valor permacene entre as chamadas da função.
	contador++;
	return contador;
}
