#include "Template.h"
#include <iostream>

int main()
{

	std::cout << Template::soma<int>(2, 2) << "\n";
	std::cout << Template::soma<float>(2.99f, 3.67f) << "\n";
	std::cout << Template::soma<double>(5.9999, 6.9999) << "\n";

	system("pause");
	return 0;
}