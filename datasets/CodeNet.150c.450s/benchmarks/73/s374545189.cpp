#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<functional>
#include<map>
#include<cstring>
using namespace std;

int BIT[100005];
int sum(int a) {
	int k = 0;
	while (a > 0) {
		k += BIT[a];
		a -= a&(-a);
	}
	return k;
}
void add(int a,int b) {
	while (a <= 100005) {
		BIT[a] += b;
		a += a&(-a);
	}
}
signed main() {
	int a, b; cin >> a >> b;
	for (int c = 0; c < b; c++) {
		int d, e, f; scanf("%d%d%d", &d, &e, &f);
		if (d) {
			cout << sum(f) - sum(e - 1) << endl;
		}
		else {
			add(e, f);
		}
	}
}