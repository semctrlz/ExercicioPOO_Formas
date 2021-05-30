#pragma once

#include "FormaGeometrica.hpp"

#ifndef Retangulo_hpp
#define Retangulo_hpp

class Retangulo : public FormaGeometrica {
public:
	Retangulo();
	float CalcularArea();
	void SetLargura(float l);
	float GetLargura();
	void SetAltura(float a);
	float GetAltura();

private:
	float largura;
	float altura;

};


#endif // !Retangulo_hpp



