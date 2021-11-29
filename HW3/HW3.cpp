#include <iostream>
#include <vector>

using namespace std;

vector<int> remove(vector<int> numbers) {
	reverse(numbers[0], numbers[numbers.size() - 1]);
	numbers.pop_back();
	reverse(numbers[0], numbers[numbers.size() - 1]);
	return numbers;
}

int main() {
	vector<int> numbers;
	int n;

	do {
		cout << "Input number: ";
		cin >> n;
		if (numbers.size() == 21) {
			numbers = remove(numbers);
		}
		numbers.push_back(n);
	} while (n != -1);

	for (int i = 0; i < numbers.size(); ++i) {
		cout << numbers[i] << " ";
	}

	return 0;
}