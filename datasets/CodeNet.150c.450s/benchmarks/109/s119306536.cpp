#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef pair<int, int>P;

int sum[86401];
int main() {
	int n;
	while (scanf("%d", &n), n) {
		memset(sum, 0, sizeof(sum));
		int h, m, s, h1, m1, s1;
		rep(i, n) {
			scanf("%d:%d:%d%d:%d:%d", &h, &m, &s, &h1, &m1, &s1);
			sum[h * 3600 + m * 60 + s]++; sum[h1 * 3600 + m1 * 60 + s1]--;
		}
		int Max = 0;
		rep(i, 86401) {
			if (i)sum[i] += sum[i - 1];
			Max = max(Max, sum[i]);
		}
		printf("%d\n", Max);
	}
}