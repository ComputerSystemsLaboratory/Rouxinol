// class point	の練習（クラスの高度な実装）
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>

typedef long long llong;
using namespace std;

void lower(char* x) {
	for (int i = 0; x[i] != '\0'; i++) {
		if (65 <= x[i] && x[i] <= 90)x[i] += 32;
	}
	return;
}

int main() {
	char W[20];
	char T[1100];
	int cnt = 0;
	scanf("%s", W);
	while (1) {
		scanf("%s", T);
		if (!strcmp(T,"END_OF_TEXT"))break;
		lower(T);
		if (!strcmp(W, T))cnt++;
	}
	cout << cnt << '\n';
	return 0;
}

