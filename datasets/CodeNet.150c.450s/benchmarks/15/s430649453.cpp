#include <bits/stdc++.h>
#define rep(i,from,to) for(int i=from;i<(int)to;++i)
#define REP(i,from,to) for(int i=from;i<=(int)to;++i)
#define ll long long
using namespace std;
const int MAX = 10100;
int n, q, T;
int S[MAX];
void solve() {
	int ans = 0;
	cin >> n;
	rep(i,0,n)
	{
		cin >> S[i];

	}

	cin >> q;
	rep(i,0,q)
	{
		cin >> T;
		S[n] = T;

		int j = 0;

		while (S[j] != T) {

			j++;
		}
		if(j!=n)ans++;

	}
	cout << ans << endl;
}
int main() {
	solve();
	return 0;
}