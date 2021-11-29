#include <iostream>
#include <vector>

using namespace std;

vector<int> rem(vector<int> numbers, int x) {
	vector<int> remove;
	for (int i = 0; i < numbers.size(); ++i) {
		if (numbers[i] == x) ++i;
		else remove.push_back(numbers[i]);
	}
	numbers.clear();
	for (int i = 0; i < remove.size(); ++i) {
		numbers.push_back(remove[i]);
	}
	return numbers;
}

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

	cout << "Input number for remove: ";
	cin >> x;
	rem(numbers, x);
	for (int i = 0; i < numbers.size(); ++i) {
		cout << numbers[i] << " ";
	}
}