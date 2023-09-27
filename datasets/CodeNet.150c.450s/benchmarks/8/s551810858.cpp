// class point	の練習（クラスの高度な実装）
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>

typedef long long llong;
using namespace std;

int main() {
	int n;
	char taro[110];
	char hana[110];
	int score_t = 0;
	int score_h = 0;
	int cmp;

	scanf("%d", &n);


	for (int i = 0; i < n; i++) {
		scanf("%s", taro);
		getchar();
		scanf("%s", hana);
		cmp = strcmp(taro, hana);
		if (cmp > 0)score_t+=3;
		else if (cmp == 0) {
			score_h++; score_t++;
		}
		else if (cmp < 0)score_h+=3;
	}

	printf("%d %d\n", score_t, score_h);

	return 0;
}


