#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	int num[6];

	for (int i = 0; i < 6; i++) {
		cin >> num[i];
	}

	char com[101];
	cin >> com;

	int T = num[0];
	int R = num[2];
	int L = num[3];
	int F = num[1];
	int B = num[4];
	int D = num[5];
	int tmp;

	for (int i = 0; com[i] != '\0'; i++) {
		switch (com[i]) {
		case 'E':
			tmp = T;
			T = L;
			L = D;
			D = R;
			R = tmp;
			break;
		case 'N':
			tmp = T;
			T = F;
			F = D;
			D = B;
			B = tmp;
			break;
		case 'W':
			tmp = T;
			T = R;
			R = D;
			D = L;
			L = tmp;
			break;
		case 'S':
			tmp = T;
			T = B;
			B = D;
			D = F;
			F = tmp;
			break;
		}
	}

	printf("%d\n", T);

	return 0;
}