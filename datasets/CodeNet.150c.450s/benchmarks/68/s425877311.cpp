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

	int n;
	while(cin >> n, n){
		vector<int> a(n);
		rep(i, n) cin >> a[i];
		
		int ans = IINF;
		rep(i, n){
			REP(j, i+1, n){
				ans = min(ans, abs(a[i] - a[j]));
			}
		}
		
		cout << ans << endl;
		
	}

	return 0;
}