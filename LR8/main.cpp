#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {
	//1
	/*
	int n = 3;
	
	float A[n][n] {
	{2.5,  -3,  6.2},
	{-0.1, 4.2, 2.8},
	{2,    7.5, -1.8}
	};
	
	float B[n][n] {
	{-2,  2.3, -7.1},
	{0.8, 3.6, -5.6},
	{3,   6,   4}
	};
	
	float C[n][n];
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (fabs(A[i][j]) > fabs(B[i][j])) {
				C[i][j] = A[i][j];
			} else {
				C[i][j] = B[i][j];
			}
		}
	}
	
	cout << "\n\tC" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << C[i][j] << "\t";
		}
		cout << "\n" << endl;
	}
	*/
	
	//2
	/*
	int m,n;
	float el;
	cout << "rows(m) = ";
	cin >> m;
	cout << "columns(n) = ";
	cin >> n;
	float A[m][n];
	float B[m][n];
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			el = rand() % 20 - 10;
			A[i][j] = el;
		}
	}
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (j > i && A[i][j] < 0) B[i][j] = pow(A[i][j], 2);
			else B[i][j] = A[i][j];
		}
	}
	
	// Виводимо А & B
	cout << endl;
	cout << "\tA"<<endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << A[i][j] << "\t";
		}
		cout << "\n" << endl;
	}	
	cout << endl;
	cout << "\tB"<<endl;	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << B[i][j] << "\t";
		}
		cout << "\n" << endl;
	}
	*/
	
	//3
	
	int m,n;
	float el;
	cout << "rows(m) = ";
	cin >> m;
	cout << "columns(n) = ";
	cin >> n;
	float A[m][n];
	float B[m][n];
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			el = rand() % 20 - 10;
			A[i][j] = el;
		}
	}
	
	for(int i = 0, k = m - 1; i < m; i++, k--) {
		for(int j = 0; j < n; j++) {
			B[i][j] = A[k][j];
		}
	}

	cout << "\n\tA" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << A[i][j] << "\t";
		}
		cout << "\n" << endl;
	}
	
	cout << "\n\tB" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << B[i][j] << "\t";
		}
		cout << "\n" << endl;
	}
	
	return 0;
}
