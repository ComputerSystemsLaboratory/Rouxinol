#include <bits/stdc++.h>
// g++ test.cpp && ./a.out < in
#pragma GCC optimize("O3")
using namespace std;
#define fi first
#define se second
#define pb push_back
#define loop(i, a, b) for (int i=a; i<(b); i++)
typedef long long ll;
typedef pair<int,int> pi;
const int INF = 1e9;
const int MOD = 1000000007;



void test_case() {
	int n; cin>>n;
	vector<int> ans(n+1, 0);
	for(int i=1;i<105;i++)
		for(int j=1;j<105;j++)
			for(int k=1;k<105;k++){
				int v = i*i+j*j+k*k+i*j+j*k+k*i;
				if(v <=n ) ans[v]++;
			}
	for(int i=1;i<=n;i++) cout<<ans[i]++<<endl;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	for (int i = 1; i <= t; i++) {
		test_case();
	}
	return 0;
}