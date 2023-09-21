#pragma once
#include "Fraction.h"
class Complex
{
private:
	double Re;
	double Im;
public:
	Complex() : Re(0), Im(0) {};
	Complex(double Re, double Im) : Re(Re), Im(Im) {};

	void SetRe(double Re);
	void SetIm(double Im);

	Complex operator+(const Complex& R);
	Complex operator-(const Complex& R);
	Complex operator*(const Complex& R);
	Complex operator/(const Complex& R);

	void Print() const;
};

