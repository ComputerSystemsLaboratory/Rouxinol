#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false
 
typedef long long ll;
typedef pair<int, int> ii;

int main(){

	int n;
	cin >> n;
	
	ll ans = 100000;
	rep(i, n){
		ans *= 1.05;
		ans += 999;
		ans -= (ans % 1000);
	}

	cout << ans << endl;

	return 0;
}