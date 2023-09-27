#include<iostream>
#include<math.h>

using namespace std;


int GetMaximumDifference(const int*Array, const int Num) {
	int min = *Array;
	int max = *(Array + 1) - min;

	for (int i = 1; i < Num; i++) {
		if (max < *(Array + i) - min)max = *(Array + i) - min;
		if (min > *(Array + i))min = *(Array + i);
	}
	return max;
}

int main() {
	int n;
	int R[200000];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> R[i];
	}

	cout << GetMaximumDifference(R, n) << endl;

	return 0;
}