#include<iostream>
using namespace std;

int main() {
	int a[101] = {},i = 1,max = 0,tmp;

	while (cin >> tmp) {
		a[tmp]++;
		i++;
	}

	for (int j = 1; j < 100; j++) {
		if (a[j] > max) {
			max = a[j];
		}
	}

	for (int j = 1; j < 100; j++) {
		if (a[j] == max) {
			cout << j << endl;
		}
	}
	return 0;
}