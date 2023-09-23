#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int main() {
	int n;
	while (scanf("%d", &n), n) {
		int Max = INT_MIN, cnt = 0;
		rep(i, n) {
			int a; scanf("%d", &a);
			if (cnt < 0)cnt = a;
			else cnt += a;
			Max = max(Max, cnt);
		}
		printf("%d\n", Max);
	}
}