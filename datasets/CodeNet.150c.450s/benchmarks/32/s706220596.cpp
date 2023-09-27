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

	int m, nmin, nmax;
	while(cin >> m >> nmin >> nmax, m){
		vector<int> p(m);
		rep(i, m) cin >> p[i];
		
		int ans = 0;
		int maxi = 0;
		REP(i, nmin-1, nmax){
			if(maxi <= p[i] - p[i+1]){
				maxi = p[i] - p[i+1];
				ans = i + 1;
			}
		}
		cout << ans << endl;
		
	}

	return 0;
}