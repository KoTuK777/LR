#include <iostream>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double x;
	cin >> x;
	
	if (x <= -10) {
		cout << 0;
	} else if (x > -10 && x <= 0) {
		cout << "X = " << x << endl;
		cout << cos( (x-1) / exp(1) ) / sin ( (x-1) / exp(1) ) << endl;
	} else if (x >= 10) {
		cout << "X = " << x << endl;
		cout << log(x) << endl;
	} else if (x > 0 && x < 10) {
		cout << "X = " << x << endl;
		cout << sqrt(pow(x, 3)) << endl;
	} 
	
	return 0;
}
