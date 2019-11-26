#include <iostream>
#include <math.h>
using namespace std;

void showText (int thisGoods, float thisCost, float thisSellingPrice) {
		cout << "Kil'kist' tovaru: " << thisGoods << endl;
		cout << "Cina tovaru: " << thisCost << endl;
		cout << "Vidpuskna cina: " << thisSellingPrice << endl;
	}

int main(int argc, char** argv) {
	int goods;
	float cost;
	
	cout << "Vvedit' kil'kist' tovaru: ";
	cin >> goods;
	cout << "Vvedit' cinu tovaru: ";
	cin >> cost;
	
	float sellingPrice = goods * cost;
	
	if(goods < 0 || cost < 0) {
		cout << "Vvedit' dodatni znachennya!";
	} else if(goods >= 100) {
		sellingPrice *= 0.9;
		showText (goods, cost, sellingPrice);
	} else {
		showText (goods, cost, sellingPrice);
	}
	
	return 0;
}
