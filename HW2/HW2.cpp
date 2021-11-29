#include <iostream>
#include <vector>

using namespace std;

int main() {
	float summ = 0;
	vector<float> price {12.5, 10.0, 25.1, 72.3, 1.0, 11.5};
	vector<int> buy{0,0,4};
	for (int i = 0; i < buy.size(); ++i) {
		summ += price[buy[i]];
	}

	cout << "SUMM: " << summ;	
}