#include <iostream>
#include "Complex.h"

void Complex::SetRe(double Re) {
	this->Re = Re;
}
void Complex::SetIm(double Im) {
	this->Im = Im;
}

Complex Complex::operator+(const Complex& R) {
	return Complex(Re + R.Re, Im + R.Im);
}

Complex Complex::operator-(const Complex& R) {
	return Complex(Re - R.Re, Im - R.Im);
}

Complex Complex::operator*(const Complex& R) {
	return Complex(Re * R.Re - Im * R.Im, Re * R.Im + Im * R.Re);
}

Complex Complex::operator/(const Complex& R) {
	return Complex((Re * R.Re + Im * R.Im) / (R.Re * R.Re + R.Im * R.Im), (Im * R.Re - Re * R.Im) / (R.Re * R.Re + R.Im * R.Im));
}

void Complex::Print() const{
	if(Im >= 0)
		std::cout << Re << " + " << Im << 'i' << std::endl;
	else
		std::cout << Re << " - " << Im * -1 << 'i' << std::endl;
}