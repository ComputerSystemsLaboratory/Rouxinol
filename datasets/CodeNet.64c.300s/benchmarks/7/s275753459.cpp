#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int n;

	cin >> n;

	char pic[54];
	int num[54];

	for (int i = 0; i < n; i++) {
		cin >> pic[i] >> num[i];
	}

	for (int i = 1; i <= 13; i++) {
		int flag = 0;
		for (int j = 0; j < n; j++) {
			if ( pic[j] == 'S' && num[j] == i) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			printf("S %d\n", i);
		}
	}

	for (int i = 1; i <= 13; i++) {
		int flag = 0;
		for (int j = 0; j < n; j++) {
			if (pic[j] == 'H' && num[j] == i) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			printf("H %d\n", i);
		}
	}

	for (int i = 1; i <= 13; i++) {
		int flag = 0;
		for (int j = 0; j < n; j++) {
			if (pic[j] == 'C' && num[j] == i) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			printf("C %d\n", i);
		}
	}

	for (int i = 1; i <= 13; i++) {
		int flag = 0;
		for (int j = 0; j < n; j++) {
			if (pic[j] == 'D' && num[j] == i) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			printf("D %d\n", i);
		}
	}

	return 0;
}