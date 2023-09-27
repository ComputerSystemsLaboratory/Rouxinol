#include <iostream>
#include <cstdio>

using namespace std;

void call(int n) {

	for (int i = 1; i <= n; i++) {
		int x = i;
		if (x % 3 == 0) {
			printf(" %d", i);
		}
		else if (x % 10 == 3) {
			printf(" %d", i);
		}
		else {
			while(x) {
				x /= 10;
				if (x % 10 == 3) {
					printf(" %d", i);
					break;
				}
			}
		}
	}
	printf("\n");
}

int main() {
	int n;
	cin >> n;
	call(n);

	return 0;
}