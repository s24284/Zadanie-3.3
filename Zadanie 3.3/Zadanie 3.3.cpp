// Zadanie 3.3.cpp :
//

#include <iostream>
#include <iomanip>

int main()
{
	float A, B, C, pierwiastek1, pierwiastek2, pierwiastek0, delta;


    std::cout << "Oblicze dla ciebie rownanie kwadratowe. Ma ono postac: Ax2 + Bx + C = 0, ale A nie moze byc rowna 0.\n\n";

	do {
		std::cout << "Podaj liczbe A: \n";
		std::cin >> A; 			

		std::cout << "Podaj liczbe B:\n";
		std::cin >> B;

		std::cout << "Podaj liczbe C:\n";
		std::cin >> C;	

		if (A == 0) //reaguje, gdy A rowna sie 0
		{
			std::cout << "A nie moze byc rowna 0.\n";

		}

	} 

	while (A == 0);

	std::cout << "Rownanie kwadratowe dla podanych przez ciebie liczb ma postac:\n\n" << A << "x2 + " << B << "x + " << C << " = 0\n\n";

	delta = B * B - 4 * A * C;

	if (delta > 0) //przy delta większej od 0, mamy dwa miejsca zerowe

	{
		delta = sqrt(delta); //wyznaczamy pierwiastki z delty

		pierwiastek1 = (-B - delta) / (2 * A);

		pierwiastek2 = (-B + delta) / (2 * A);

		std::cout << "Sa dwa pierwiastki rownania kwadratowego dla podanych przez ciebie liczb:\n\n " << pierwiastek1 << " i " << pierwiastek2 << "\n\n";
	}

	else

		if (delta == 0)

		{
			pierwiastek0 = -B / (2 * A);

			std::cout << "Jest jeden pierwiastek rownania kwadratowego dla podanych przez ciebie liczb:\n\n " << pierwiastek0 << "\n\n";
		}

		else

			std::cout << "Nie ma pierwiastkow dla rownania kwadratowego z podanymi przez ciebie liczbami.\n\n";

	return 0;
}

