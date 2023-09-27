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
const int dx[] = {0,1},dy[] = {1,0};

typedef long long int ll;

using namespace std;

int main(){
    while(true){
	int x,y;
	int n;
	cin >> x >> y;
	if(x == 0 && y == 0) break;
	cin >> n;
	vector< pair<int,int> > v;
	REP(i,n){
	    pair<int,int> temp;
	    cin >> temp.first >> temp.second;
	    v.PB(temp);
	}
	int map[20][20];
	REP(i,20)REP(j,20) map[i][j] = 1;
	REP(i,n){
	    map[v[i].second][v[i].first] = -1;
	}
	int ans = 0;
	queue<int> qx;
	queue<int> qy;
	qx.push(1);
	qy.push(1);
	while(!qx.empty()){
	    int tx = qx.front();
	    int ty = qy.front();
	    qx.pop();
	    qy.pop();
	    REP(i,2){
		int nx = tx + dx[i];
		int ny = ty + dy[i];
		if(nx <= 0 || x < nx || ny <= 0 || y < ny) continue;
		if(ny == y && nx == x){
		    ans++;
		    continue;
		}
		if(map[ny][nx] == 1){
		    qx.push(nx);
		    qy.push(ny);
		}
	    }
	}
	cout << ans << endl;
    }
    return 0;
}