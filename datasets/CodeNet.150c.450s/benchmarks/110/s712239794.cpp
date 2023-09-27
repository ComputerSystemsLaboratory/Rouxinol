#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <functional>


using namespace std;

#define pb(n)	push_back(n)
#define mp(n,m) make_pair(n,m)
#define fi 	first
#define se 	second
#define all(r) (r).begin(),(r).end()

#define REP(i,s,e)	for(int i=(s); i<(e); i++)
#define rep(i,n)	REP(i,0,n)


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

typedef vector<vi> vii;


const int INF = 100000000;
const double EPS = 1e-10;
int mod=1000000007;

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int h, w, n;
vector<string> s;

bool outOfRange(int y, int x){
	if(x < 0 || x >= w || y < 0 || y >= h) return true;
	return false;	
}

int calc(int y, int x, int c, int num){
	//cout<<y<<x<<" "<<c<<" "<<num<<endl;
	if(num == n) return c;
	queue<pair<int, pii> > q;
	vector<vi> v(h, vi(w, -1));
	v[y][x] = 0;
	pair<int, pii> p(c, mp(y, x));
	q.push(p);
	while(!q.empty()){
		//cout<<"  "<<q.size()<<endl;
		p = q.front(); q.pop();
		int tx = p.se.se, ty = p.se.fi, tc = p.fi;
		for(int i = 0; i < 4; i++){
			int nx = tx + dx[i], ny = ty + dy[i];
			if(outOfRange(ny, nx) || s[ny][nx] == 'X' || v[ny][nx] != -1) continue;
			//cout<<ny<<" "<<nx<<endl;
			if(s[ny][nx] == '1' + num){
				//q = queue<pair<int, pii> >;
				//cout<<"AAA"<<endl;
				return calc(ny, nx, tc + 1, num + 1);
			}
			//cout<<" "<<nx<<" "<<ny<<endl;
			v[ny][nx] = tc + 1;
			q.push(mp(tc + 1, mp(ny, nx)));
		}
	}
	return -1;
}

int main(){
	cin>>h>>w>>n;
	//cout<<h<<" "<<w<<" "<<n<<endl;
	s = vector<string>(h);
	rep(i, h) cin>>s[i];
	//rep(i, h) cout<<s[i]<<endl;
	//cout<<s[2][2]<<endl;
	int sx, sy;
	rep(i, h) rep(j, w){
		if(s[i][j] == 'S'){
			sy = i; sx = j;
		}
	}
	//cout<<sy<<" "<<sx<<endl;
	cout<<calc(sy, sx, 0, 0)<<endl;
}