#include<stdio.h>
#include<math.h>
#include<algorithm>

int main() {
	int m, f, r;
	char S;
	while (1) {
		scanf("%d %d %d", &m, &f, &r);
		if (m == -1 && f == -1 && r == -1) {
			break;
		}

		if (m == -1 || f == -1) {
			S = 'F';
		}
		else if (m + f >= 80) {
			S = 'A';
		}
		else if (m + f >= 65) {
			S = 'B';
		}
		else if (m + f >= 50) {
			S = 'C';
		}
		else if (m + f >= 30) {
			S = 'D';
			if (r >= 50) {
				S = 'C';
			}
		}
		else {
			S = 'F';
		}

		printf("%c\n", S);
	}

		return 0;
	}