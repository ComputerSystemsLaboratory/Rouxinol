#include <iostream>
#define N 200000
#define INF 1000000001

using namespace std;

int main() {
	int n;
	int r[N], max = -INF, min = INF;

	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> r[i];
	}

	for(int i = 0; i < n; ++i) {
		if(i >= 1 && r[i] - min > max) {
			max = r[i] - min;
		}

		if(r[i] < min) {
			min = r[i];
		}
	}

	cout << max << endl;

	return 0;
}