#include <iostream>
#include "Points.h"
#include <iomanip>
using namespace std;

CPoint<int> read_point() {
	cout << "Input two integers: ";
	int x, y;
	cin >> x >> y;
	return CPoint<int>(x, y);
}


int main() {
	CPoint<int> A = read_point();
	CPoint<int> B = read_point();
	CPoint<int> C = read_point();

	cout << "A = " << A << '\n';
	cout << "B = " << B << '\n';
	cout << "C = " << C << '\n';

	int a = A.distance(B);
	int b = B.distance(C);
	int c = C.distance(A);

	int P = a + b + c;
	double p = P * 0.5;
	double S = sqrt(p * (p - a)*(p - b)*(p - c));
	cout << "P = " << P << "  S=" << S<<'\n';


	return 0;
}