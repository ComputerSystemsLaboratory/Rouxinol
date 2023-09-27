#include<bits/stdc++.h>
#define MOD 1000000007
#define EPS (1e-10)
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3f
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;

int a[100];
int main() {
	int n; scanf("%d", &n);
	rep(i, n) {
		scanf("%d", &a[i]);
	}
	int cnt = 0;
	rep(i, n) {
		int id = i;
		for (int j = i; j < n; j++) {
			if (a[j] < a[id])id = j;
		}
		if (id != i) {
			cnt++; swap(a[i], a[id]);
		}
	}
	rep(i, n) {
		if (i)printf(" ");
		printf("%d", a[i]);
	}
	printf("\n%d\n", cnt);
}