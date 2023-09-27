#include <iostream>
#include <stdio.h>
using namespace std;

int main(void) {
	int N;
	int min = 0, max = 0;
        long sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		sum += tmp;
		if (i == 0) {
			min = max = tmp;
			continue;
		}
		if (tmp < min) min = tmp;
		if (tmp > max) max = tmp;
	}
	cout << min << " " << max << " " << sum << endl;
	return 0;
}


