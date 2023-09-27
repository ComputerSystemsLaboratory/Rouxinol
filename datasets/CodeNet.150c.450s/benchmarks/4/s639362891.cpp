#include <stdio.h>

int main(void) {
	int m = 51;
	int f = 51;
	int r = 101;
	char grade;

	do {
		if (m + f + r <= 200) {
			if (m == -1 || f == -1) {
				grade = 'F';
			} else if (m + f >= 80) {
				grade = 'A';
			} else if (m + f >= 65) {
				grade = 'B';
			} else if (m + f >= 50) {
				grade = 'C';
			} else if (m + f >= 30) {
				if (r >= 50) {
					grade = 'C';
				} else {
					grade = 'D';
				}
			} else {
				grade = 'F';
			}
			printf("%c\n", grade);
		}
		scanf("%d %d %d", &m, &f, &r);
	} while (m > -1 || f > -1 || r > -1);
	return 0;
}