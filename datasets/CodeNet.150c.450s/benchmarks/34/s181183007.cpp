#include <iostream>
using namespace std;
/*
x?????????????????????????????????calc(x)
calc(0) = 1
calc(i) = calc(i - 1) * calc(i - 2) + calc(i - 3)
*/
int answer[30] = {};

int calc(int n) {
	for (int i = 0; i <= n; i++) {
		if (i == 0) answer[i] = 1;
		else if (i == 1) answer[i] = 1;
		else if (i == 2) answer[i] = 2;
		else answer[i] = answer[i - 1] + answer[i - 2] + answer[i - 3];
	}
	return (answer[n] / 3650) + ((answer[n] % 3650 > 0) ? 1 : 0);
}

int main() {
	int n;
	while (true) {
		cin >> n;
		if (n == 0) return 0;
		cout << calc(n) << endl; 
	}
}