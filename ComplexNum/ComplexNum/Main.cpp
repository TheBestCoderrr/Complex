#include <iostream>
#include "Fraction.h"
#include "Complex.h"
using namespace std;

int main() {
	Fraction ResultFraction, Lfraction, Rfraction;
	int UserVariant = -1;
	int n, d;
	cout << "0 - Exit\n1 - Set Fraction\n2 - Add\n3 - Minus\n4 - Mult\n5 - Div\n6 - Print\n";
	while (UserVariant != 0) {
		cout << "Enter variant: ";
		cin >> UserVariant;
		switch (UserVariant) {
		case 0:
			break;
		case 1:
			cout << "Enter n, d: ";
			cin >> n >> d;
			Lfraction.SetN(n);
			Lfraction.SetD(d);
			cout << "Enter n, d: ";
			cin >> n >> d;
			Rfraction.SetN(n);
			Rfraction.SetD(d);
			break;
		case 2:
			ResultFraction = Lfraction + Rfraction;
			break;
		case 3:
			ResultFraction = Lfraction - Rfraction;
			break;
		case 4:
			ResultFraction = Lfraction * Rfraction;
			break;
		case 5:
			ResultFraction = Lfraction / Rfraction;
			break;
		case 6:
			ResultFraction.ReduceFraction();
			ResultFraction.PrintDrib();
			break;
		default:
			cout << "Invalid variant!" << endl;
		}
	}

	
	Complex Lcomplex, Rcomplex, ResultComplex;
	UserVariant = -1;
	double Re, Im;
	cout << "\n0 - Exit\n1 - Set complex\n2 - Add\n3 - Minus\n4 - Mult\n5 - Div\n6 - Print\n";
	while (UserVariant != 0) {
		cout << "Enter variant: ";
		cin >> UserVariant;
		switch (UserVariant) {
		case 0:
			break;
		case 1:
			cout << "Enter Re, Im: ";
			cin >> Re >> Im;
			Lcomplex.SetRe(Re);
			Lcomplex.SetIm(Im);
			cout << "Enter Re, Im: ";
			cin >> Re >> Im;
			Rcomplex.SetRe(Re);
			Rcomplex.SetIm(Im);
			break;
		case 2:
			ResultComplex = Lcomplex + Rcomplex;
			break;
		case 3:
			ResultComplex = Lcomplex - Rcomplex;
			break;
		case 4:
			ResultComplex = Lcomplex * Rcomplex;
			break;
		case 5:
			ResultComplex = Lcomplex / Rcomplex;
			break;
		case 6:
			ResultComplex.Print();
			break;
		default:
			cout << "Invalid variant!" << endl;
		}
	}
}