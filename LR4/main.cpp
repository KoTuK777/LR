#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
	
	
// =============================================
// 		1

// a
//	float del_x, x, x_min, x_max, y;	
//	
//	cout << "del_x = ";
//	cin >> del_x;
//
//	cout << "x_min = ";
//	cin >> x_min;
//
//	cout << "x_max = ";
//	cin >> x_max;
//
//  
//  	x = x_min;
//	
//	while (x_min <= x && x <= x_max)
//	{	
//		y = ( 2.5 * pow(x, 3) ) / ( exp(2 * x) + 2 );
//		
//		cout << "x = " << x;
//		cout.width(15);
//		cout <<"y = " << y << endl;
//		
//		x += del_x;
//		x = round(x * 10) / 10;
//	}
	// b
//	float del_x, x, x_min, y;
//	int n, i;
//	
//	cout << "del_x = ";
//	cin >> del_x;
//
//	cout << "x_min = ";
//	cin >> x_min;
//
//	cout << "n = ";
//	cin >> n;
//
//  	x = x_min;
//	
//	for (i = 0; i < n && x >= x_min; i++)
//	{
//		y = ( 2.5 * pow(x, 3) ) / ( exp(2 * x) + 2 );
//		cout << "i = " << i << "\t";
//		cout << "x = " << x << "\t";
//		cout <<"y = " << y << endl;
//		x += del_x;
//	}
	
// =============================================
// 		2

	float t, del_t, t_min1, t_max1, t_min2, t_max2, u;
	
	// t_min1 = -2;
	// t_max1 = 0;
	// t_max2 = 5;
	// del_t = 0.8;
	cout << "del_t = ";
	cin >> del_t;

	cout << "t_min1 = ";
	cin >> t_min1;

	cout << "t_max1 = ";
	cin >> t_max1;

	cout << "t_max2 = ";
	cin >> t_max2;	
	
	t = t_min1;	
	t_min2 = t_max1;
	
	while(t_min1 <= t && t <= t_max1) 
	{
		u = 0.2 * t + atan(t);
		cout << "t = " << t;
		cout.width(15);
		cout << "u = " << u << endl;		
		t += del_t;
	}
	
	while(t_min2 < t && t <= t_max2) 
	{
		u = asin(0.25 * t);
		cout << "t = " << t;
		cout.width(15);
		cout <<"u = " << u << endl;
		t += del_t;
	}

// =============================================
// 		3
//	float x, y, z, x_min, x_max, y_min, y_max, del_x, del_y, y_help;
//	cout << "x = ";
//	cin >> x;
//	
//	cout << "y = ";
//	cin >> y;
//	
//	cout << "del_x = ";
//	cin >> del_x;
//	
//	cout << "del_y = ";
//	cin >> del_y;
//	
//	cout << "x_min = ";
//	cin >> x_min;
//	
//	cout << "x_max = ";
//	cin >> x_max;
//	
//	cout << "y_min = ";
//	cin >> y_min;
//	
//	cout << "y_max = ";
//	cin >> y_max;
//	
////	x = -0.5;
////	y = -0.5;
////	del_x = 0.1;
////	del_y = 0.1;
////	x_min = -0.8;
////	x_max = 0;
////	y_min = -1;
////	y_max = 1;
//	
//	y_help = y;
//	
//	while(x_min <= x && x <= x_max)
//	{
//		while(y_min <= y && y <= y_max)
//		{
//			z = exp(cos(x)) + exp(sin(y));
//			cout << "z = " << z << "\t";
//			cout.width(15);
//			cout << "y = " << y << "\t";			
//			cout.width(15);
//			cout << "x = " << x << endl;
//			y += del_y;
//			y = round(y * 10) / 10;
//		}
//		y = y_help;
//		x += del_x;
//		x = round(x * 10) / 10;
//		
//	}
		
// =============================================
	
	
	return 0;
}
