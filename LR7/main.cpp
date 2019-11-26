#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	
	//1
	/*
	const int num = 8;
	
	float y[num] = {-7.9, 1.0, 1.1, -2.2, 5.0, -1.1, 2.0};
	
	for(int i = 0; i < num; i++) {
		if(y[i] < 0) 
		cout << "i = " << i + 1 << endl;
	}
	*/
	
	//2
	/*
	const int n = 8;
	float sum_p, sum_m, a=0, result;
	float A[n] = {
	1.1, -3.3, -6.9, 1.3, 5.3, 6.3, -3.2, 8.1
	};
	
	for (int i = 0; i < n; i++) {
		if(A[i] < 0) {
			sum_m += A[i];
			a++;
		} else {
			sum_p += A[i];
		}
	}
	
	result =  (sum_m / a) - (sum_p / (n - a));
	cout << "result: " << result << endl;
	*/
	
	//3
	/*
	int n, num;
	cout << "n = ";
	cin >> n;

	float A[n] {};
	
	for (int i = 0; i < n; i++) {
		cout << "A[" << i + 1 << "] = ";
		cin >> A[i];
	}
	
	float min = -999999;
	
	for (int i = 0; i < n; i++) {
		if(A[i] < 0 && min < A[i]) {
			min = A[i];
			num = i + 1;
		}
	}
	
	cout << "min = " << min << endl;
	cout << "num = " << num << endl;
	*/
	
	//4
	
	int m;
	
	cout << "m = ";
	cin >> m;

	float S[m] {};
	
	for (int i = 0; i < m; i++) {
		cout << "S[" << i << "] = ";
		cin >> S[i];
	}
	
	for (int i = 0; i < m; i++) {
		if (S[i] < 0) {
			cout << "credit = " << S[i] << endl;
		}
	}
	
	for (int i = 0; i < m; i++) {
		if (S[i] > 0) {
			cout << "debit = " << S[i] << endl;
		}
	}
	
	return 0;
}
