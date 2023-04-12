#include <iostream>
#include <string>
#include "Monom.h"
#include "CircleList.h"
#include "Polynomial.h"

using namespace std;

int main()
{
	int maxPr=10;
	int count=5;

	Polinom Polinom1("x2*x3^4+x1^4+x4^5", maxPr, count);
	Polinom Polinom2("2*x2^2*x3^4+5", maxPr, count);

	cout << "Polinom 1: " << Polinom1.getPolinom() << endl;
	cout << "Polinom 2: " << Polinom2.getPolinom() << endl;

	cout << endl;
	cout <<"Polinom 1 - Polinom 2: " << (Polinom1 - Polinom2).getPolinom() << endl;

	cout << endl;
	cout << "Polinom 1 * Polinom 2: "<<(Polinom1 * Polinom2).getPolinom() << endl;
	
	cout << endl;
	cout << "Polinom 2 * 3: " << (Polinom2 * 3).getPolinom() << endl;

	Polinom Polinom3(Polinom1);
	cout << endl;
	cout <<"Polinom3: " << Polinom3.getPolinom() << endl;

	Polinom Polinom4;
	Monom Monom1("x1^3x2x3x4x5", maxPr, count);

	Polinom4 = Polinom2;

	Polinom3.AddMonom(Monom1);
	Polinom4.AddMonom(Monom1);

	cout << endl;
	cout << "Polinom 3: " << Polinom3.getPolinom() << endl;
	
	cout << endl;
	cout << "Polinom 4: " << Polinom4.getPolinom() << endl;

	return 0;
}