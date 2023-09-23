#include <iostream>

using namespace std;

int main() {
	int n, R[200000], max, min;
	cin >> n;
	for (int i = 0;i < n;i++)
		cin >> R[i];
	min = R[0];
	max = R[1] - R[0];
	for (int i = 1;i < n-1;i++) {
		if (R[i]<min) { min = R[i]; }
		if (R[i + 1] - min>max) {max = R[i + 1] - min;}
	}
	cout << max << endl;
}