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
    int n;
    ll a[102][21];
    REP(i,102)REP(j,21) a[i][j] = 0;
    cin >> n;
    a[0][0] = 1;
    int temp;
    cin >> temp;
    a[1][temp] = 1;
    FOR(i,1,n){
	int m;
	cin >> m;
	REP(j,21){
	    if(j+m <= 20){
		a[i+1][j+m] += a[i][j];
	    }
	    if(j-m >= 0){
		a[i+1][j-m] += a[i][j];
	    }
	}
    }
    cout << a[n][0] << endl;
    return 0;
}