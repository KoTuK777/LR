#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	
	//1
	
//	float x, y, y1, e;
//	int n;
//	
////	cout << "x = ";
////	cin >> x;
////	cout << "n = ";
////	cin >> n;	
////	cout << "e = ";
////	cin >> e;
//	x = 8.03;
//	n = 8;
//	e = 0.1;
//	
//	y = x;
//	y1 = (1./n) * (x / pow(y, n-1) + (n-1)*y);
//	
//	while(fabs(y1 - y) > e) {
//		y = y1;
//		y1 = (1./n) * (x / pow(y, n-1) + (n-1)*y);
//	}
//	
//	cout << "y1 = " << y1;
	
	//2
	/*
	float x, y, x1, x0, e;
	int i;
	
//	cout << "x0 = ";
//	cin >> x0;
//	cout << "e = ";
//	cin >> e;
	x0 = 0;
	e = 0.01;	
	
	x = x0;
	x1 = x - (exp(-x) - x) / ( (-1) * (1 + exp(x0)) / (exp(x0) ));
	
	for (i = 0; fabs(x1 - x) > e; i++) {
		x = x1;
		x1 = x - (exp(-x) - x) / ( (-1) * (1 + exp(x0)) / (exp(x0) ));
	}
	
	cout << "x1 = " << x1 << endl;
	cout << "i = " << i << endl;
	*/
	
	//3
	/*
	float x, x1 = 1, e, sum, fact = 1;
	int n;
//	cout << "x = ";
//	cin >> x;
//	cout << "e = ";
//	cin >> e;

	x = 0.1;
	e = 0.01;
	
	for (n = 0; fabs(x1) > e; n++) {
		if (n != 0)	fact *= n;
		x1 = pow(-1, n) * ( pow(x, 2*n) / fact );
		sum += x1;
		cout << "fact = " << fact << endl;
	}
	
	cout << "f(x) = " << sum << endl;
	cout << "x1 = " << x1 << endl;
	cout << "n = " << n << endl;
	*/
	
	//4
	
	float e, x, y, y1, a;
	int n = 100, i, m = 1000;
	
//	cout << "x = ";
//	cin >> x;
	
	e = pow(10, -4);
	a = 1;
	x = 5;
	
	y = (1. / log(x))  - (1. / (x - 1));
	
	for(i = 1; (fabs(y1 - y) > e); i++)  {
		if ((i < n) && (fabs(y1 - y) < m)) {
			x -= .1;
			if (x > a) {
			y1 = (1. / log(x))  - (1. / (x - 1));
			} else break;
		} else {
			y1 = -1;
			break;
		}				
	}
	
	if (y1 != -1) {		
		cout << "i = " << i << endl;
		cout << "y1 = " << y1 << endl;
	} else {
		cout << "the limit does not exist";
	}
	
	return 0;
}
