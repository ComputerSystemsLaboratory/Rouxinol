#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include<stdio.h>

int main() {
	int m, f, r;
	char rank[5][2] = {"A", "B", "C", "D", "F"};
	int flug;
	while (1) {
		scanf("%d%d%d", &m, &f, &r);
		if (m + f + r == -3)break;
		if (m + f >= 80) flug = 0;
		else if (m + f >= 65) flug = 1;
		else if (m + f >= 50) flug = 2;
		else if (m + f >= 30 && r >= 50) flug = 2;
		else if (m + f >= 30 && r <= 50) flug = 3;
		else flug = 4;
if(m==-1||f==-1) flug = 4;
		printf("%s\n", rank[flug]);
	}
	return 0;
}