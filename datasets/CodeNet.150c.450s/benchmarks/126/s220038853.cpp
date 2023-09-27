#define _USE_MATH_DEFINES
#define INF 100000000
#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <stack>
#include <limits>
#include <map>
#include <string>
#include <cstring>
#include <set>
#include <deque>
#include <bitset>
#include <list>

using namespace std;

typedef long long ll;
typedef pair <int,int> P;

static const double eps = 1e-8;

int stage[16][16];

int main(){
	int a,b;
	while(~scanf("%d %d",&a,&b)){
		if(a==b && b==0) break;
		memset(stage,-1,sizeof(stage));
		for(int x=0;x<a;x++){
			for(int y=0;y<b;y++){
				stage[y][x] = 0;
			}
		}
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			int x,y;
			scanf("%d %d",&x,&y);
			stage[y-1][x-1] = -1;
		}

		stage[0][0] = 1;
		for(int y=0;y<b;y++){
			for(int x=0;x<a;x++){
				if(stage[y][x]==-1) continue;
				if(y-1>=0 && x >= 0 && stage[y-1][x] != -1) {
					stage[y][x] += stage[y-1][x];
				}

				if(y>=0 && x-1>= 0 && stage[y][x-1] != -1) {
					stage[y][x] += stage[y][x-1];
				}
			}
		}

		printf("%d\n",stage[b-1][a-1]);
	}
}