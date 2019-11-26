#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	
	// 1 =============================		
	
	/*
	float y, sum, n, j, k, p, mul = 1, l, l_max;
	
	cout << "k = ";
	cin >> k;
	
	cout << "j = ";
	cin >> j;
	
	cout << "l = ";
	cin >> l;
	
	cout << "l_max = ";
	cin >> l_max;
	
	for(n = k; n < j; n++) {
		y = (n + 3) / ((n + 5) * (n + 6));
		sum += y;
	}
	
	for (l = l; l < l_max; l++) {
		p = (l + 5) / (2 * l);
		mul *= p;
	}
	
	cout << "sum = " << sum << endl;
	cout << "mul = " << mul << endl;
	*/
	
	// 2 =============================
	
	/*
	float mul = 1, first_num, last_num;
	
	cout << "first_num = ";
	cin >> first_num;
	
	cout << "last_num = ";
	cin >> last_num;
	
	for (int i = first_num; i <= last_num; i++) {
		if (i % 5 == 0) {
			mul *= i;
		}
	}
	
	cout << "mul = " << mul << endl;
	cout << "first_num = " << first_num << endl;
	cout << "last_num = " << last_num << endl;
	*/

	// 3 =============================
	
	
	float s, main_s, t, i, i_max, del_s, sum, s_last, s_next, y;
	
//	cout << "t = ";
//	cin >> t;
//	
//	cout << "i_max = ";
//	cin >> i_max;
//	
//	cout << "s_1 = ";
//	cin >> main_s;
//	
//	cout << "del_s = ";
//	cin >> del_s;
	
	t = 8;
	i_max = 22;
	main_s = -25.4;
	del_s = 3.3;
	
	for(i = t; i < i_max; i++) {
		s_last = main_s + del_s * (i - 1);
		s_next = main_s + del_s * (i + 1);
		s = main_s + del_s * i;		
		
		y = fabs( (s_last * s_next) / (s + s_last) );
		
		sum += y;
	}
	
		//3_2
//	i = t;
//	while (i < i_max) {
//		s_last = main_s + del_s * (i - 1);
//		s_next = main_s + del_s * (i + 1);
//		s = main_s + del_s * i;		
//		
//		y = fabs( (s_last * s_next) / (s + s_last) );
//		
//		sum += y;
//		i++;
//	}
	
//	do {
//		s_last = main_s + del_s * (i - 1);
//		s_next = main_s + del_s * (i + 1);
//		s = main_s + del_s * i;		
//		
//		y = fabs( (s_last * s_next) / (s + s_last) );
//		
//		sum += y;
//		i++;
//	} 
//	while (i < i_max);
	
	cout << sum << endl;
	
	
	return 0;
}
