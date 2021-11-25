#include <iostream>
#include <vector>
using namespace std;

vector<int> remove(vector<int> robots, int index) {
	vector<int> removeRobots{ 0 };
	for (int i = 0; i < robots.size() && robots.size() > 2; ++i) {
		if (index == 0) {
			if (i > 0) removeRobots.resize(removeRobots.size() + 1);
			if(i == 0) i = 1;
			removeRobots[i - 1] = robots[i];
		}
		else if (i == index) {
			++i;
		}
		if (i < index) {
			if (i > 0) removeRobots.resize(removeRobots.size() + 1);
			removeRobots[i] = robots[i];
		}
		else if (i >= index) {
			if (i > 0) removeRobots.resize(removeRobots.size() + 1);
			removeRobots[i-1] = robots[i];
		}
	}
	if (robots.size() == 2) {
		if (index == 1) {
			robots.resize(robots.size() - 1);
		}
		else if (index == 0) {
			robots[0] = robots[1];
			
		}
	}
	else if (robots.size() == 1 && index == 0) {
		robots.resize(robots.size() - 1);
		return robots;
	}
	robots.resize(robots.size() - 1);
	for (int i = 0; i < robots.size(); ++i) {
		robots[i] = removeRobots[i];
	}
	return robots;
}

int main() {
	vector <int> robots{ 0 };
	int number = 0;
	for (int i = 0; number >= 0; ++i) {
		cout << "Input number of robot: " << endl;
		cin >> number;
		if (number >= 0 && i > 0) robots.resize(robots.size() + 1);
		else if (number < 0) break;
		robots[i] = number;
	}

	int index;
	do {
		cout << "Input index of robot: ";
		cin >> index;
		if (index < 0) break;
		robots = remove(robots, index);
		for (int i = 0; i < robots.size(); ++i) {
			cout << robots[i] << endl;
		}
	} while (index >= 0 && robots.size() >= 1 && robots[0] != 0);
	if (robots.size() == 0) {
		cout << "Sorry, but all robots sold out.";
	}
	return 0;
}