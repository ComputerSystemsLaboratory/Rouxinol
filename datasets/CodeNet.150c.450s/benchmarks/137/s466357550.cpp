#include<iostream>
#include<stdio.h>
#include<string.h>

#define M 1046527
#define NIL (-1)
#define L 14

char H[M][L];

int makeint(char ch) {
	if (ch == 'A')return 1;
	else if (ch == 'C')return 2;
	else if (ch == 'G')return 3;
	else if (ch == 'T')return 4;
	else return 0;
}

long long makekey(char str[]) {
	long long sum = 0, p = 1, i;
	for (i = 0; i < strlen(str); i++) {
		sum += p*(makeint(str[i]));
		p *= 5;
	}
	return sum;
}

int h1(int key) { return key%M; }
int h2(int key) { return 1 + (key % (M - 1)); }

int find(char str[]) {
	long long key, i, h;
	key = makekey(str);
	for (i = 0; ; i++) {
		h = (h1(key) + i*h2(key)) % M;
		if (strcmp(H[h], str) == 0) return 1;
		else if (strlen(H[h]) == 0) return 0;
	}
	return 0;
}

int insert(char str[]) {
	long long key, i, h;
	key = makekey(str);
	for (i = 0; ; i++) {
		h = (h1(key) + i*h2(key)) % M;
		if (strcmp(H[h], str) == 0) return 1;
		else if (strlen(H[h]) == 0) {
			strcpy(H[h], str);
			return 0;
		}
	}
	return 0;
}

int main()
{
	int i, n, h;
	char str[L], c[9];
	for (i = 0; i < M; i++) H[i][0] = '\0';
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s %s", c,str);
		if (c[0] == 'i') {
			insert(str);
		}
		else if (c[0] == 'f') {
			if (find(str)) {
				printf("yes\n");
			}
			else {
				printf("no\n");
			}
		}
	}
    return 0;
}