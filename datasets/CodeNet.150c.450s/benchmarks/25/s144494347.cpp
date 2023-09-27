#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <math.h>

using namespace std;

typedef long long ll;

int main() {
	int m[26] = {0};
	char c;
	while ( scanf("%c", &c) != EOF ) {
		if ('a' <= c && c <= 'z') m[c-'a']++;
		else if ('A' <= c && c <= 'Z') m[c-'A']++;
	}
	for (int i = 0; i < 26; ++i) {
		printf("%c : %d\n", (char)(i+'a'), m[i]);
	}
}