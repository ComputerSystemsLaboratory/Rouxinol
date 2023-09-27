#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(b) - 1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)

#define PB push_back
#define INF (1<<29)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define CLR(a) memset(a,0,sizeof(a))
const int dx[] = {-1,0,0,1},dy[] = {0,1,-1,0};

typedef long long int ll;

using namespace std;

int main(){
    while(true){
	int n,k;
	cin >> n >> k;
	if(n == 0 && k == 0) break;
	ll a[100001];
	REP(i,n){
	    cin >> a[i];
	}
	REP(i,n-1){
	    a[i+1] += a[i];
	}
	ll ans = -1000000000000000;
	FOR(i,k,n){
	    ans = max(ans,a[i] - a[i-k]);
	}
	cout << ans << endl;
    }
    return 0;
}