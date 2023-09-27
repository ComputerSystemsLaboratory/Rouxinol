#include "bits/stdc++.h"
//#define int long long
#define range(i, a, b) for(int i = a; i < b; i++)
#define rep(i, a) range(i, 0, a)
#define all(a) (a).begin(),(a).end()
using namespace std;
const int MOD = 1e9 + 7, INF = 1e9;
using vi = vector <int>;
using vvi = vector <vi>;
//g++ -std==c++14

signed main(){
	int n, m;
	cin >> n >> m;
	vi c(m);
	rep(i, m)cin >> c[i];
	
	vi va(n + 1, INF);
	va[0] = 0;
	
	rep(i, m){
		rep(j, n + 1){
			if(va[j] == INF || j + c[i] > n)continue;
			va[j + c[i]] = min(va[j + c[i]], va[j] + 1);
		}
	}

	cout << va[n] << endl;
}