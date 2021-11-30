#include <iostream>
#include <vector>

using namespace std;

vector<int> remove(vector<int> numbers) {
	vector<int> renumbers;
	for (int i = 0; i < numbers.size(); ++i) {
		renumbers.push_back(numbers[numbers.size() - 1 - i]);
	}
	renumbers.pop_back();
	numbers.clear();
	for (int i = 0; i < renumbers.size(); ++i) {
		numbers.push_back(renumbers[renumbers.size() - 1 - i]);
	}
	return numbers;
}

int main() {
	vector<int> numbers;
	int n;

	do {
		cout << "Input number: ";
		cin >> n;
		if(n != -1){
			if (numbers.size() == 20) {
				numbers = remove(numbers);
			}
			numbers.push_back(n);
		}
	} while (n != -1);

	for (int i = 0; i < numbers.size(); ++i) {
		cout << numbers[i] << " ";
	}

	return 0;
}