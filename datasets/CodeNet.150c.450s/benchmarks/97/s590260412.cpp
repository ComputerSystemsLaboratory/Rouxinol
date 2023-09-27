#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <functional>
#include <sstream>
#include <complex>
#include <climits>
using namespace std;

#define REP(i,a,n) for(int i=(a);i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define EPS 1e-8

class cell{
public:
	int x,y;
	cell(int _x, int _y){
		x=_x; y=_y;
	}
};

int main(){
	int n;
	const int dx[] = {-1,0,1,0};
	const int dy[] = {0,1,0,-1};
	
	while(scanf("%d",&n),n){
		vector<cell> v;
		v.push_back(cell(0,0));
		int min_x=0, min_y=0, max_x=0, max_y=0;
		rep(i,n-1){
			int m,d; scanf("%d%d",&m,&d);
			int x = v[m].x + dx[d];
			int y = v[m].y + dy[d];
			//printf("debug::i:%d  %d %d\n",i,x,y);
			v.push_back( cell(x,y) );
			min_x = min(min_x, x); min_y = min(min_y, y);
			max_x = max(max_x, x); max_y = max(max_y, y);
		}
		printf("%d %d\n",max_x-min_x+1, max_y-min_y+1);
	}
	return 0;
}