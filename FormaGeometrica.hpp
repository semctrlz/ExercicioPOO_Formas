#pragma once
#ifndef FormaGeometrica_hpp
#define FormaGeometrica_hpp

#include <iostream>
#include <stdio.h>
using namespace std;

class FormaGeometrica {
public:
	virtual float CalcularArea() = 0;
	string GetFormulaArea();
	string GetNomeForma();

protected:
	string formulaArea;
	string nomeForma;
};



#endif // !FormaGeometrica_hpp

