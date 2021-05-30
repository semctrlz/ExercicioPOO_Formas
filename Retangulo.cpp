#include "Retangulo.hpp"

Retangulo::Retangulo() {
	this->formulaArea = "largura * altura";
	this->nomeForma = "Retangulo";
	this->largura = 0;
	this->altura = 0;
}

float Retangulo::CalcularArea() {
	if (this->largura == 0 || this->altura == 0)
		return 0.f;

	return this->largura * this->altura;
}

void Retangulo::SetLargura(float l) {
	this->largura = l;
}

float Retangulo::GetLargura() {
	return this->largura;
}

void Retangulo::SetAltura(float a) {
	this->altura = a;
}

float Retangulo::GetAltura() {
	return this->altura;
}