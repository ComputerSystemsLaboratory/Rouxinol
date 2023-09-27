#include<bits/stdc++.h>
using namespace std;

#define FOR(i,s,t) for(int i =s ; i <t ; i++)

void solve() {
	int N, M, P;
	while (cin>>N>>M>>P,N){
		vector<int>a(N);
		FOR(i, 0, N) {
			cin >> a[i];
		}
		long long sum = accumulate(a.begin(), a.end(), 0LL);
		M--;
		sum *= 100;
		if (a[M] == 0)cout << 0 << endl;
		else 		cout << max(0LL, sum *(100-P)/ a[M]/100) << endl;

	}

}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	solve();

	return 0;
}
