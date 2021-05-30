#pragma once

#include "FormaGeometrica.hpp"

#ifndef Triangulo_hpp
#define Triangulo_hpp

class Triangulo : public FormaGeometrica {
public:
	Triangulo();
	float CalcularArea();
	void SetBase(float b);
	float GetBase();
	void SetAltura(float a);
	float GetAltura();

private:
	float base;
	float altura;
};


#endif // !Triangulo_hpp

