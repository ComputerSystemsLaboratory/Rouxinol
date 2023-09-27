#include<stdio.h>
#include<algorithm>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <vector>
#include <iostream>
#include <functional>
#include <time.h>
using namespace std;
clock_t fi, endtime;

const int r_c = 0;
const int r_t = 1;
const int MAX_V = 10;
const int MAX_E = 45;
const int MAX_D = 100;
const int MIN_D = 0;

const int INF = MAX_V * MAX_E * MAX_D;

int main()
{
	while (1) {
		int wf[MAX_V][MAX_V];
		int sum[MAX_V] = { 0 };
		int ansi,ans;
		int n, a, b, c, m;
		m = 0;
		scanf("%d", &n);
		if (n == 0) break;
		for (int i = 0; i < MAX_V; ++i) {
			for (int j = 0; j < MAX_V; ++j) {
				wf[i][j] = INF;
				if (i == j) wf[i][j] = 0;
			}
		}
		for (int i = 0; i < n; ++i) {
			scanf("%d %d %d", &a, &b, &c);
			if (a > m) m = a;
			if (b > m) m = b;
			wf[a][b] = c; wf[b][a] = c;
		}
		for (int k = 0; k <= m; ++k) {
			for (int i = 0; i <= m; ++i) {
				for (int j = 0; j <= m; ++j) {
					if (wf[i][j] > wf[i][k] + wf[k][j])
						wf[i][j] = wf[i][k] + wf[k][j];
				}
			}
		}
		for (int i = 0; i <= m; ++i) {
			sum[i] = 0;
			for (int j = 0; j <= m; ++j) {
				sum[i] += wf[i][j];
			}
			if (i == 0) {
				ans = sum[0]; ansi = 0;
			}
			if (ans > sum[i]) {
				ans = sum[i]; ansi = i;
			}
		}
		printf("%d %d\n", ansi, ans);
	}
}