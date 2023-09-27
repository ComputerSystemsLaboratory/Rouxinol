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
		map<ll, int> mp;
		rep(i, n){
			ll h, m, s;
			scanf("%ld:%ld:%ld", &h, &m, &s);
			mp[h*10000+m*100+s]++;
			scanf("%ld:%ld:%ld", &h, &m, &s);
			mp[h*10000+m*100+s]--;
		}
		
		int cnt = 0;
		int ans = 0;
		for(auto it : mp){
			cnt += it.second;
			ans = max(ans, cnt);
		}
		cout << ans << endl;
	}

	return 0;
}