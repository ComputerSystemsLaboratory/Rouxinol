#include <cstdio>

int main() {
	int m, f, r;
	char grade;
	
	while (true) {
	scanf("%d %d %d", &m, &f, &r);
	if (m == -1 && f == -1 && r == -1) break;
	if (m == -1 || f == -1) {
	grade = 'F';
	} else if (80 <= m + f) {
	grade = 'A';
	} else if (65 <= m + f) {
	grade = 'B';
	} else if (50 <= m + f) {
	grade = 'C';
	} else if (30 <= m + f) {
	if (50 <= r) {
	grade = 'C';
	} else {
	grade = 'D';
	}
	} else {
	grade = 'F';
	}
	printf("%c\n", grade);
    }
    return 0;
}