#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

const unsigned long M = 1046527;
const int L = 14;

char H[M][L];

long long getChar(char ch)
{
	if (ch == 'A') return 1;
	else if (ch == 'C') return 2;
	else if (ch == 'G') return 3;
	else if (ch == 'T') return 4;
	else return 0;
}

long long getKey(char str[])
{
	long long sum = 0, p = 1;
	for (int i = 0; i < strlen(str); ++i) {
		sum += p * getChar(str[i]);
		p *= 5;
	}
	return sum;
}

int h1(long long key) { return key % M; }
int h2(long long key) { return 1 + (key % (M - 1)); }

int find(char str[])
{
	long long key, h;
	key = getKey(str);
	for (long long i = 0;; ++i) {
		h = (h1(key) + i * h2(key)) % M;
		if (strcmp(H[h], str) == 0) return 1;
		else if (strlen(H[h]) == 0) return 0;
	}
}

int insert(char str[])
{
	long long key, h;
	key = getKey(str);
	for (long long i = 0;; ++i) {
		h = (h1(key) + i * h2(key)) % M;
		if (strcmp(H[h], str) == 0) return 1;
		else if (strlen(H[h]) == 0) {
			strcpy(H[h], str);
			return 0;
		}
	}
}

int main()
{
	for (int i = 0; i < M; ++i) H[i][0] = '\0';

	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; ++i) {
		char cmd[L];
		char wrd[L];
		scanf("%s %s", cmd, wrd);

		if (cmd[0] == 'i') {
			insert(wrd);
		} else {
			cout << (find(wrd) ? "yes" : "no") << endl;
		}
	}

	return 0;
}