#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	vector<int> vec; int n; cin >> n; int c_1 = 5; int c_2 = 7;
	cout << n << ":" << flush;
	while (n % 2 == 0) { vec.push_back(2); n = n / 2; }
	while (n % 3 == 0) { vec.push_back(3); n = n / 3; }
	while (n != 1) {
		while (n % c_1 == 0) { vec.push_back(c_1); n = n / c_1; }
		while (n % c_2 == 0) { vec.push_back(c_2); n = n / c_2; }
		c_1 = c_1 + 6; c_2 = c_2 + 6;
	}
	for (int i = 0; i < vec.size(); i++) cout << " " << vec[i] << flush;
	cout << endl;
	return 0;
}
