#include <iostream>
#include "Fraction.h"

void Fraction::SetN(int n) {
	this->n = n;
}
void Fraction::SetD(int d) {
	this->d = d;
}

Fraction Fraction::operator+(const Fraction& R) {
	return Fraction(n * R.d + R.n * d, d * R.d);
}

Fraction Fraction::operator-(const Fraction& R) {
	return Fraction(n * R.d - R.n * d, d * R.d);
}

Fraction Fraction::operator*(const Fraction& R) {
	return Fraction(n * R.n, d * R.d);
}

Fraction Fraction::operator/(const Fraction& R) {
	return Fraction(n * R.d, d * R.n);
}


void Fraction::ReduceFraction() {
	int copyn = n;
	int copyd = d;
	int tempnum;
	while (copyd != 0) {
		tempnum = copyd;
		copyd = copyn % copyd;
		copyn = tempnum;
	}

	n /= copyn;
	d /= copyn;
}

void Fraction::PrintDrib() const {
	std::cout << n << '/' << d << std::endl;
}