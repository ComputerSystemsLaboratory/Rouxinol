#include <cstdio>
#include <iostream>
using namespace std;

int total(int card[], int num) {
	int total = 0;
	for (int i = 1; i <= num; i++) {
		total += card[i];
	}
	return total;
}

int main(void) {
	for (;;) {
		int n, m;
		cin >> n >> m;
		if (n == 0 && m == 0) {
			break;
		}
		int taro[101], hanako[101];
		for (int i = 1; i <= n; i++) {
			cin >> taro[i];
		}
		for (int i = 1; i <= m; i++) {
			cin >> hanako[i];
		}
		int c1=101, c2=101;
		bool flag = false;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				int tmp = taro[i];
				taro[i] = hanako[j];
				hanako[j] = tmp;
				if ((total(taro, n) == total(hanako, m)) && (i + j < c1 + c2)) {
					flag = true;
					tmp = taro[i];
					taro[i] = hanako[j];
					hanako[j] = tmp;
					c1 = taro[i];
					c2 = hanako[j];			
				}
				else {
					tmp = taro[i];
					taro[i] = hanako[j];
					hanako[j] = tmp;
				}
			}
		}
		if (flag) {
			printf("%d %d\n", c1, c2);
		} else {
			printf("-1\n");
		}
	}
}