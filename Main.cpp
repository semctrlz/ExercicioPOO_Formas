#include "Circulo.hpp"
#include "Triangulo.hpp"
#include "Retangulo.hpp"

#include <iostream>

using namespace std;


int main()
{
	Circulo circulo;
	circulo.SetRaio(15.f);

	cout << "Calculando a formula da area do " << circulo.GetNomeForma() << " que eh " << circulo.GetFormulaArea() << endl;
	cout << "Temos uma area de " << circulo.CalcularArea() << "\n\n";

	Triangulo triangulo;
	triangulo.SetBase(5.f);
	triangulo.SetAltura(3.f);

	cout << "Calculando a formula da area do " << triangulo.GetNomeForma() << " que eh " << triangulo.GetFormulaArea() << endl;
	cout << "Temos uma area de " << triangulo.CalcularArea() << "\n\n";


	Retangulo retangulo;
	retangulo.SetAltura(4.5f);
	retangulo.SetLargura(6.f);

	cout << "Calculando a formula da area do " << retangulo.GetNomeForma() << " que eh " << retangulo.GetFormulaArea() << endl;
	cout << "Temos uma area de " << retangulo.CalcularArea() << "\n\n";

	system("pause");
}