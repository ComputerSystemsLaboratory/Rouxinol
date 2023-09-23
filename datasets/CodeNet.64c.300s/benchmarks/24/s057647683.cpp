#include <iostream>
using namespace std;

int main(void) {
	int n;

	while (1) {
		cin >> n;
		if (n == 0) break;

		int sumA = 0, sumB = 0;
		int pointA, pointB;
		for (int i = 0; i < n; i++){

			cin >> pointA >> pointB;
			if (pointA > pointB) {
				sumA += (pointA + pointB);
			} else if (pointB > pointA) {
				sumB += (pointA + pointB);
			} else {
				sumA += pointA;
				sumB += pointA;
			}
		}
		cout << sumA << " " << sumB << endl;
	}

	return 0;
}