#include "Triangulo.hpp"

Triangulo::Triangulo() {
	this->formulaArea = "(base * altura) / 2";
	this->nomeForma = "Triangulo";
	this->base = 0;
	this->altura = 0;
}

float Triangulo::CalcularArea() {
	if (this->base == 0 || this->altura == 0)
		return 0.f;

	return (this->base * this->altura) / 2;
}

void Triangulo::SetBase(float b) {
	this->base = b;
}

float Triangulo::GetBase() {
	return this->base;
}

void Triangulo::SetAltura(float a) {
	this->altura = a;
}

float Triangulo::GetAltura() {
	return this->altura;
}