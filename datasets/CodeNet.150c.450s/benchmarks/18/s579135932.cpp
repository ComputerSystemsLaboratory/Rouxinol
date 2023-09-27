#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int weeks;
	cin >> weeks;

	double debt = 100000;
	while (weeks--) {
		debt = debt + debt * 0.05;
		debt = ceil(debt / 1000) * 1000;
	}
	
	cout << int(debt) << endl;;
	return 0;
}