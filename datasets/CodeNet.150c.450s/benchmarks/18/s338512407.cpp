

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void) {
	int n;
	double sum;

	sum = 100000;

	cin >> n;

	for (int i; i < n; i++){
		sum = ceil((sum * 1.05)/1000) * 1000;
	}

	cout << (int)sum << endl;

	return 0;
}