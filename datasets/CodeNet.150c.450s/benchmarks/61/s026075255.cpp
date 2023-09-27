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

	int n, a, b, c, x;
	while(cin >> n >> a >> b >> c >> x){
		if(n ==0 && a == 0 && b == 0 && c == 0 && x == 0) break;
		
		vector<int> y(n);
		rep(i, n) cin >> y[i];
		vector<bool> used(c);
		
		int ans;
		int pos = 0;
		bool flag = false;
		for(ans = 0; ans <= 10000; ans++){
			if(x == y[pos]) pos++;
			if(pos == n) {
				flag = true;
				break;
			}
			x = (a * x + b) %c;
		}
		
		if(flag) cout << ans << endl;
		else cout << -1 << endl;
	}

	return 0;
}