#include <iostream>
using namespace std;

int main() {
	int n, i, p[100], t;
	int max, min, maxi, mini;
	cin >> n;
	
	while (n != 0){
		max = 0; min = 1000; t = 0;

		for (i = 0; i < n; i++) {
			cin >> p[i];
		}

		for (i = 0; i < n; i++) {
			t += p[i];

			if (p[i] > max) {
				maxi = i;
				max = p[i];
			}

			if (p[i] < min) {
				mini = i;
				min = p[i];
			}
		}

		cout << (t - p[maxi] - p[mini]) / (n - 2) << endl;

		cin >> n;
	}
}