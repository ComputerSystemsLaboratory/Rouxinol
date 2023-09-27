#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<string>
#include<queue>
#include<complex>
#include<numeric>
#include<bitset>
#define INF 1001001001
#define EPS 0.000000001

using namespace std;
typedef vector<int> vint;
typedef vector<vint> vvint;
typedef pair<int,int> pint;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
//int dx[8] = {0,1,1,1,0,-1,-1,-1};
//int dy[8] = {1,1,0,-1,-1,-1,0,1};

int nextInt(){
	int x;
	scanf("%d",&x);
	return x;
}

int main(){
	while(1){
		int n = nextInt();
		if(n==0) break;
		vector<pint> vp;
		
		vp.push_back(pint(0, 0));
		
		for(int i=1; i<n; i++){
			int m = nextInt();
			int d = nextInt();
			vp.push_back(pint(vp[m].first+dx[d], vp[m].second+dy[d]));
		}
		
		int minx = INF, miny = INF;
		int maxx = -INF, maxy = -INF;
		for(int i=0; i<n; i++){
			minx = min(minx, vp[i].first);
			miny = min(miny, vp[i].second);
			maxx = max(maxx, vp[i].first);
			maxy = max(maxy, vp[i].second);
		}
		printf("%d %d\n", maxx-minx+1, maxy-miny+1);
	}
	return 0;
}