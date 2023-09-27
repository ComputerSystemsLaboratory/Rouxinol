#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

#define M 1046527

long long T[M];
//???????????\??¢??°
long long h1(long long key) { return key % M; }

long long h2(long long key) { return 1 + (key % (M - 1)); }

long long h(long long key, long long i) { return ((h1(key)) + i*h2(key)) % M; }

void insert(long long key)
{
	long long i = 0;
	while (1) {
		int j = h(key, i);
		if (!T[j]) {
			T[j] = key;
			return;
		}
		else i++;
	}
	return;
}

bool find(long long key)
{
	long long i = 0;
	while (1) {
		int j = h(key, i);
		if (T[j] == key) return 1;
		else if (!T[j]) return 0;
		else i++;
	}
}

long long getKey(char *p)
{
	long long key = 0;
	for (long long i = (strlen(p) - 1); i >= 0; i--) {
		long long x;
		switch (p[i])
		{
		case 'A':
			x = 1; break;
		case 'C':
			x = 2; break;
		case 'G':
			x = 3; break;
		case 'T':
			x = 4; break;
		default:
			break;
		}
		key += x * pow(10, i);
	}
	return key;
}

int main()
{
	int n;
	char order[10], word[15];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s %s", order, word);
		if (order[0] == 'i') insert(getKey(word));
		else if (find(getKey(word))) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}