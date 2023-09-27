#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<vector>
#include<string>
#include<functional>
#include<set>
#include<unordered_map>
#define int long long
using namespace std;

int b[200005];
int BIT[200005];
void  tasu(int a) {
	while (a < 200005) {
		BIT[a]++;
		a += a&-a;
	}
}
int sum(int a) {
	int b = 0;
	while (a > 0) {
		b += BIT[a];
		a -= a&-a;
	}
	return b;
}
signed main(){
	int a; scanf("%lld", &a);
	set<int>S;
	for (int c = 0; c < a; c++) {
		scanf("%d", &b[c]);
		S.insert(b[c]);
	}
	unordered_map<int, int>U;
	int c = 1;
	for (auto d = S.begin(); d != S.end(); d++) {
		U[*d] = c;
		c++;
	}
	for (int c = 0; c < a; c++) {
		b[c] = U[b[c]];
	}
	int ans = 0;
	for (int i = 0; i < a; i++) {
		ans += i - sum(b[i]);
		tasu(b[i]);
	}
	cout << ans << endl;
}