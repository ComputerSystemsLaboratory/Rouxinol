#include "bits/stdc++.h"

#define debug(x) cout<<#x<<": "<<x<<endl
#define rep(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for (int i=(a);i<=(b);i++)
#define all(a) (a).begin(),(a).end()
using namespace std;
typedef vector<int> VI;
typedef vector<vector<int>> VVI;
typedef long long ll;

VI memo;
int fib(int i){
	if (memo[i]) return memo[i];
	
	return memo[i] = fib(i - 1) + fib(i - 2);
	
}


void solve(){
#ifdef _WIN32
	istream &cin = ifstream("input.txt");
#endif
	int n;
	cin >> n;
	memo.resize(n + 2);
	memo[0] = memo[1] = 1;
	
	cout << fib(n) << endl;
}


int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);


	solve();
	return 0;
}