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


int main() {

	ll n, m, p;
	while(cin >> n >> m >> p){
		if(n == 0 && m == 0 && p == 0) break;
		vector<ll> vec(n);
		ll sum = 0;
		rep(i, n){
			cin >> vec[i];
			sum += vec[i];
		}
		
		if(vec[m-1] == 0) cout << 0 << endl;
		else cout << sum * (100 - p) / (vec[m-1]) << endl;
	}

	return 0;
}