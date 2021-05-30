#include "Circulo.hpp"

Circulo::Circulo() {
	this->formulaArea = "2 * pi * raio";
	this->nomeForma = "Circulo";
	this->raio = 0;
}

float Circulo::CalcularArea() {
	if (this->raio == 0)
		return 0.f;

	float piAproximado = 3.14159f;

	return 2 * piAproximado * this->raio;
}

void Circulo::SetRaio(float r) {
	this->raio = r;
}

float Circulo::GetRaio() {
	return this->raio;
}

