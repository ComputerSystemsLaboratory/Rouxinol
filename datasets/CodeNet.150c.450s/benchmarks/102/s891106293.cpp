#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(b) - 1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)

#define PB push_back
#define MP make_pair
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a,c) memset(a,c,sizeof(a))

#define DEBUG(x) cout<<"#x"<<": "<<x<<endl

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;

const ll INF = INT_MAX/3;
const ll MOD = 1000000007;
const double EPS = 1e-14;
const int dx[] = {1,0,-1,0} , dy[] = {0,1,0,-1};

int main(){

    while(true){
	int h,w;
	cin >> w >> h;
	if(w == 0 && h == 0) break;
	vector< vector<char> > board(h+2,vector<char>(w+2,'#'));
	int sx,sy;
	int ans = 0;
	REP(i,h)REP(j,w){
	    cin >> board[i+1][j+1];
	    if(board[i+1][j+1] == '@'){
		sx = j+1;
		sy = i+1;
		board[sy][sx] = '#';
		ans++;
	    }
	}
	queue<int> qx;
	queue<int> qy;
	qx.push(sx);
	qy.push(sy);
	while(!qx.empty()){
	    int x = qx.front();
	    int y = qy.front();
	    qx.pop();
	    qy.pop();
	    REP(i,4){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(board[ny][nx] == '.'){
		    board[ny][nx] = '#';
		    qx.push(nx);
		    qy.push(ny);
		    ans++;
		}
	    }
	}
	cout << ans << endl;
    }

    return 0;
}