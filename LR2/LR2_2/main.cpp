#include <iostream>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double A_x;
	double A_y;
	double B_x;
	double B_y;
	double C_x;
	double C_y;
	double D_x;
	double D_y;
	
	cout << "A(x) = ";
	cin >> A_x;
	
	cout << "A(y) = ";
	cin >> A_y;
	
	cout << "B(x) = ";
	cin >> B_x;
	
	cout << "B(y) = ";
	cin >> B_y;
	
	cout << "C(x) = ";
	cin >> C_x;
	
	cout << "C(y) = ";
	cin >> C_y;	
		
	cout << "D(x) = ";
	cin >> D_x;
	
	cout << "D(y) = ";
	cin >> D_y;
	// Точки повинні йти по колу!
	double S = fabs(A_x * B_y + B_x * C_y + C_x * D_y + D_x * A_y - B_x * A_y - C_x * B_y - D_x * C_y - A_x * D_y) / 2;
	
	cout << "S = " << S;
	return 0;
}
