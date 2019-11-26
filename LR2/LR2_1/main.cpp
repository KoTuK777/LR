#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	const double a = 6.45;
	double x = exp(-M_PI) + pow(M_PI, -exp(1));
	double y = log10(pow(a, 3)) - atan(a);
	double f = ( pow(x, exp(1)) - exp(-x) + 0.12 ) / ( sqrt(fabs(sin(y-1))) );
	
	cout << "x = "<< x << "\ty = " << y << "\nf = " << f << endl;
	
	return 0;
}
