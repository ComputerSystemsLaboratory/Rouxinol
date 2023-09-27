// class point	の練習（クラスの高度な実装）
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>

typedef long long llong;
using namespace std;

int main() {
	char strin[1010];
	int a, b;
	int q;
	char querin[10];
	char repin[1100];
	char revin[1100];

	scanf("%s", strin);
	getchar();
	cin >> q;
	for (int i = 0; i < q; i++) {
		scanf("%s %d %d", querin, &a, &b);
		if (!strcmp(querin, "replace")) {
			scanf("%s", repin);
			for (int j = a; j <= b; j++) {
				strin[j] = repin[j - a];
			}
		}
		else if (!strcmp(querin, "print")) {
			for (int j = a; j <= b; j++) {
				printf("%c", strin[j]);
			}
			cout << '\n';
		}
		else if (!strcmp(querin, "reverse")) {
			for (int j = a; j <= b; j++) {
				revin[j - a] = strin[j];
			}
			for (int j = b; j >= a; j--) {
				strin[a + b - j] = revin[j - a];
			}
		}
	}

	return 0;
}

