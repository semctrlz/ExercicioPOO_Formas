#pragma once

#include "FormaGeometrica.hpp"

#ifndef Circulo_hpp
#define Circulo_hpp

class Circulo : public FormaGeometrica {
public:
	Circulo();
	float CalcularArea();	
	void SetRaio(float r);
	float GetRaio();

private:
	float raio;

};


#endif // !Circulo_hpp



