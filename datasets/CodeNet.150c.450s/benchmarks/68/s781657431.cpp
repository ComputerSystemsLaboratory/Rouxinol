#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
#define pb push_back
int dy[]={0, 0, 1, -1, 1, 1, -1, -1};
int dx[]={1, -1, 0, 0, 1, -1, -1, 1};

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define mp make_pair
#define fi first
#define sc second
ll n,a[2000];
bool solve(){
	cin >> n;
	if(n == 0)
		return false;
	REP(i,n) 
		cin >> a[i];


	ll ans = 100000000;
	REP(i,n) {
		FOR(j,i + 1,n)  {
			ans = min(ans,abs(a[i] - a[j]));
		}
	}
	cout << ans << endl;
	return true;
}

int main(void) {
	while(solve());
	return 0;
}

