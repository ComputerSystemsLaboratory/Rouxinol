#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
 
typedef long long ll;
typedef pair<int, int> ii;

#define EPS 1e-10

int main(){

	int n;
	while(cin >> n, n){
		vector<int> a(n);
		rep(i, n) cin >> a[i];
		
		ll sum = 0;
		ll ans = -LLINF;
		rep(i, n){
			sum += a[i];
			ans = max(ans, sum);
			if(sum < 0) sum = 0;
		}
		
		cout << ans << endl;
	}
	return 0;
}