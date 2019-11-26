#include <iostream>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double l;
	double k;
	
	cout << "l = ";
	cin >> l;
	
	cout << "k = ";
	cin >> k;
	
	double a = (l - 3 * k) / 2;
	double b = (l + k) / l;
	double c = l * k - 8;
	
	
	if (fabs(a) > 5) {
		cout << "a = " << a << endl;
		a = pow(a, 3);
		cout << "a^3 = " << a << endl;
	}
	
	if (fabs(b) > 5) {
		cout << "b = " << b << endl;
		b = pow(b, 3);
		cout << "b^3 = " << b << endl;
	}
	
	if (fabs(c) > 5) {
		cout << "c = " << c << endl;
		c = pow(c, 3);
		cout << "c^3 = " << c << endl;
	}
	
	return 0;
}
