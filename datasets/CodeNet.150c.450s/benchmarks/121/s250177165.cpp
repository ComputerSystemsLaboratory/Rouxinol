// g++ -std=c++11 temp.cpp
#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define EACH(itr,v) for(auto itr:v)
#define pb(s) push_back(s)
#define mp(a,b) make_pair(a,b)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<P, int> PPI;

#define INF INT_MAX/3

#define MAX_N 1000

int h,w;
string s[100];
bool used[100][100];

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

void dfs(int y, int x, char c){
	used[y][x] = true;
	REP(i,4){
		int nx = x+dx[i], ny = y+dy[i];
		if(nx>=0&&nx<w&&ny>=0&&ny<h&&!used[ny][nx]&&s[ny][nx]==c){
			dfs(ny,nx,c);
		}
	}
}

int main(){
	while(1){
		cin>>h>>w;
		if(h==0&&w==0) break;
		REP(i,h) cin>>s[i];
		REP(i,h)REP(j,w) used[i][j] = false;
		int res=0;
		REP(i,h)REP(j,w){
			if(!used[i][j]){
				res++; dfs(i,j,s[i][j]);
			}
		}
		cout<<res<<endl;
	}

	return 0;
}