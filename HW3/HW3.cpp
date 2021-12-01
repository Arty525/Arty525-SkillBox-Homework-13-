#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> numbers;
	int n;

	do {
		cout << "Input number: ";
		cin >> n;
		if(n != -1){
			if (numbers.size() == 20) {
				for (int i = 0; i < numbers.size(); ++i) {
					if (i < numbers.size() - 1) numbers[i] = numbers[i + 1];
					else numbers[i] = n;
				}
			}
			else numbers.push_back(n);
		}
	} while (n != -1);

	for (int i = 0; i < numbers.size(); ++i) {
		cout << numbers[i] << " ";
	}

	return 0;
}