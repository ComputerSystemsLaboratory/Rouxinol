#include <cstdio>
#include <iostream>
using namespace std;

#define MAX_NUMBER 1000001
int main(void) {
	bool sosu[MAX_NUMBER];

	for (int i = 1; i < MAX_NUMBER; i++) {
		sosu[i] = true;
	}

	sosu[1] = false;
	for (int i = 2; i < MAX_NUMBER/2; i++) {
		for (int j = 2; i*j < MAX_NUMBER; j++) {
			sosu[i*j] = false;
		}
	}

	for (;;) {
		int a, d, n;
		cin >> a >> d >> n;
		if (a == 0 && d == 0 && n == 0)
			break;

		int cnt = 0;
		for (int i = 1; a+(i-1)*d < MAX_NUMBER; i++) {
			int num = a + (i - 1)*d;
			if (sosu[num]) {
				cnt++;
			}
			if (cnt == n) {
				printf("%d\n", num);
				break;
			}
		}
	}
	return 0;
}