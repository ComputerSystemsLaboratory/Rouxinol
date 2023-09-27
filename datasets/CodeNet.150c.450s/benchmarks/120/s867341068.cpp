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
	int r,c;
	int d[11][10001];
	int cs[10001];
	cin >> r >> c;
	if(r==0 && c == 0) break;
	REP(i,r)REP(j,c){
	    cin >> d[i][j];
	}
	int ans = 0;
	REP(i,(1<<r)){
	    int td[11][10001];
	    memset(cs,0,sizeof(cs));
	    REP(k,r)REP(j,c){
		td[k][j] = d[k][j];
	    }
	    REP(j,r){
		if( ((1<<j) & i) != 0){
		    REP(k,c){
			if(td[j][k] == 0) td[j][k] = 1;
			else td[j][k] = 0;
		    }
		}
	    }
	    REP(k,c)REP(j,r){
		cs[k] += td[j][k];
	    }
	    int temp = 0;
	    REP(k,r)REP(j,c){
		temp += td[k][j];
	    }
	    REP(j,c){
		temp = max(temp, temp - cs[j] + (r-cs[j]) );
	    }
	    ans = max(ans,temp);
	}
	cout << ans << endl;
    }
    return 0;
}