#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

static const int NMAX = 1000003; // prime

char D[NMAX][13];

int h1(long long x) {
	return x % NMAX;
}

int h2(long long x) {
	return 1 + (x % (NMAX - 1));
}

long long convert(char c[]) {
	long long cc = 0;
	for (unsigned int i = 0; i < strlen(c); i++) {
		cc *= 4;
		if (c[i] == 'A') cc += 0;
		else if (c[i] == 'C') cc += 1;
		else if (c[i] == 'G') cc += 2;
		else if (c[i] == 'T') cc += 3;
		else return -1;
	}

	return cc;
}

int myHash(long long cc, int ix) {
	int idx;

	idx = (h1(cc) + (ix * h2(cc))) % NMAX;

	return idx;
}

void insert(char c[]) {
	long long cc;
	int idx;

	cc = convert(c);
	idx = myHash(cc, 0);

	int ix = 0;
	while (strlen(D[idx]) != 0) {
		if (!strcmp(D[idx], c)) return;
		idx = myHash(cc, ++ix);
	}

	strcpy(D[idx], c);
}

bool find(char c[]) {
	long long cc;
	int idx;

	cc = convert(c);
	idx = myHash(cc, 0);

	int ix = 0;
	while (strlen(D[idx]) != 0) {
		if (!strcmp(D[idx], c)) {
			return true;
		}
		else {
			idx = myHash(cc, ++ix);
		}
	}
	return false;
}

int main() {
	int n;
	char c1[6+1], c2[12+1];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s %s", c1, c2);
		if (c1[0] == 'i') {
			insert(c2);
		}
		else if (c1[0] == 'f') {
			if (find(c2)) {
				cout << "yes" << endl;
			}
			else {
				cout << "no" << endl;
			}
		}
		else return -1;
	}

	/*
	for (int i = 0; i < NMAX; i++) {
	if (strlen(D[i]) > 0) cout << i << " : " << D[i] << endl;
	}
	*/

	return 0;
}