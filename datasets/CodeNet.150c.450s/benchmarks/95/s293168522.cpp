#include<bits/stdc++.h>
using namespace std;
#define FOR(i,s,t) for(int i = s; i < t ; i++)
using LL = long long; using VL = vector<LL>;
template<class T> using V = vector<T>; template<class T> using VV = V<V<T>>;


void solve() {
	int N;
	while (cin>>N,N){
		V<string> vs(N);
		FOR(i, 0, N) {
			cin >> vs[i];
		}
		int ans = 0;
		int L = 0, R = 0;
		int state = 0;
		FOR(i, 1, N) {
			if (vs[i] == "lu") {
				if (vs[i - 1] == "ru")ans++;
			}
			else if (vs[i] == "ru") {
				if (vs[i - 1] == "lu")ans++;
			}
			else if (vs[i] == "ld") {
				if (vs[i - 1] == "rd")ans++;
			}
			else if (vs[i] == "rd") {
				if (vs[i - 1] == "ld")ans++;
			}
		}

		cout << ans << endl;
	}

}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	solve();

	return 0;
}
