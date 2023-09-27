#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	while (1) {
		int m, f, r;
		cin >> m >> f >> r;

		if (m == -1 && f == -1 && r == -1) {
			break;
		}

		if (m == -1 || f == -1) {
			printf("F\n");
			continue;
		}

		int total = m + f;

		if (total >= 80) {
			printf("A\n");
		}
		else if (total >= 65) {
			printf("B\n");
		}
		else if (total >= 50) {
			printf("C\n");
		}
		else if (total >= 30) {
			if (r >= 50) {
				printf("C\n");
			}
			else {
				printf("D\n");
			}
		}
		else {
			printf("F\n");
		}
	}

	return 0;
}