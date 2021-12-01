#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> numbers;
	int x;

	do {
		cout << "Input amount of numbers: ";
		cin >> x;
	} while (x < 1);
	
	cout << "Input numbers: " << endl;

	for(int i = 1; i <= x;++i){
		int number;
		cout << i << ": ";
		cin >> number;
		numbers.push_back(number);
	}

	cout << "Input number for delete: ";
	cin >> x;

	int n = 0;

	for (int i = 0; i < numbers.size(); ++i) {
		if (numbers[i] != x) numbers[i - n] = numbers[i];
		else {
			for (n; numbers[i] == x; ++n) ++i;
			--i;
		}
	}

	numbers.resize(numbers.size() - n);

	for (int i = 0; i < numbers.size(); ++i) {
		cout << numbers[i] << " ";
	}
}