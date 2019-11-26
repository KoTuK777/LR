#include <iostream>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	double M_x, M_y;
	
	cout << "M(x) = ";
	cin >> M_x;
	
	cout << "M(y) = ";
	cin >> M_y;
	
	if(M_y >= 0 && M_x <= 1 && M_y <= M_x) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}
	
	return 0;
}
