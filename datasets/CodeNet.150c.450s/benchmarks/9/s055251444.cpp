// class point	の練習（クラスの高度な実装）
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>

typedef long long llong;
using namespace std;

int main() {
	char IPT[210];
	char BUF[210];
	int m;
	int h;
	int IPTlen;

	while (1) {
		scanf("%s", IPT);
		if (IPT[0] == '-')break;
		IPTlen = strlen(IPT);
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> h;
			for (int j = 0; j + h <= IPTlen; j++) {
				BUF[j] = IPT[j + h];
				IPT[j + h] = '\0';
			}
			strcat(BUF, IPT);
			strcpy(IPT, BUF);
		}
		cout << IPT << '\n';

	}
	return 0;
}

