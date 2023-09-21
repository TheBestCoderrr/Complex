#pragma once
class Fraction {
private:
	int n;
	int d;
public:
	Fraction() : n(0), d(0) {};
	Fraction(int n, int d) : n(n), d(d) {};

	void SetN(int n);
	void SetD(int d);
	void PrintDrib() const;

	Fraction operator+(const Fraction& R);
	Fraction operator-(const Fraction& R);
	Fraction operator*(const Fraction& R);
	Fraction operator/(const Fraction& R);
	void ReduceFraction();
};