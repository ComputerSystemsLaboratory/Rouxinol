#include "bits/stdc++.h"

#define REP(i,n) for(int i=0;i<n;++i)
#define RREP(i,n) for(int i=n-1;i>=0;--i)
#define FOR(i,m,n) for(int i=m;i<n;++i)
#define RFOR(i,m,n) for(int i=m-1;i>=n;--i)
#define ALL(v) v.begin(),v.end()
#define PB(a) push_back(a)
#define INF 1000000001
#define MOD 1000000007

const int dx[8] = { 1,1,0,-1,-1,-1,0,1 };
const int dy[8] = { 0,1,1,1,0,-1,-1,-1 };

using namespace std;


int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	while (1) {
		cin >> n;
		int maxx = 0, minx = 0, maxy = 0, miny = 0;
		if (!n)break;
		vector<pair<int, int> > v;
		v.push_back({ 0, 0 });
		FOR(i,1, n) {
			int a, b;
			cin >> a >> b;
			int nx, ny;
			if (b == 0) nx = -1, ny = 0,minx=min(minx,v[a].first-1);
			else if (b == 1) nx = 0, ny = -1,miny = min(miny, v[a].second - 1);
			else if (b == 2) nx = 1, ny = 0,maxx=max(maxx,v[a].first+1);
			else nx = 0, ny = 1,maxy=max(maxy,v[a].second+1);
			v.push_back({ v[a].first + nx,v[a].second + ny });
		}
		cout << maxx - minx+1 << " " << maxy - miny+1 << endl;
	}
	return 0;
}