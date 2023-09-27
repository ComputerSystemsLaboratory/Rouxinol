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
		vector<string> s(n);
		rep(i, n) cin >> s[i];
		int ans = 0;
		rep(i, n-1){
			if(s[i][1] == s[i+1][1]) ans++;
		}
		cout << ans << endl;
	}

	return 0;
}