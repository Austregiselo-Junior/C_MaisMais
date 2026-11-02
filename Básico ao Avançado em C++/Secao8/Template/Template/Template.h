#pragma once

namespace Template
{
	int soma_int(int x, int y);
	float soma_float(float x, float y);
	double soma_double(double x, double y);

	template <typename T> // Função template, que recebe qualquer tipo de dado T.
	T soma(T x, T y);
}

