#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int ball[15], success, B[15], C[15];

void dfs(int lb, int lc, int qiu) {
	if (success)//找到一种可行方案 就可以了 不必再递归
		return ;
	//如果确定【11】 最多就【10】 说明已经确定了一种方案  现在看可不可行
	if (qiu > 10) {
		int flag = 1;
		for (int i = 0; i < lb - 1; ++i) {
			if (B[i] >= B[i + 1]) {
				flag = 0;
				break;
			}
		}
		for (int i = 0; i < lc - 1; ++i) {
			if (C[i] >= C[i + 1]) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			success = 1;
		}
		return;
	}

	B[lb] = ball[qiu];
	dfs(lb + 1, lc, qiu + 1);
	C[lc] = ball[qiu];
	dfs(lb, lc + 1, qiu + 1);

}

int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		for (int i = 1; i <= 10; ++i) {
			scanf("%d", &ball[i]);
		}
		success = 0;
		dfs(0, 0, 1);//代表现在B C没球  现在看ball【1】去哪
		if (success)
			puts("YES");
		else
			puts("NO");
	}

	return 0;
}

