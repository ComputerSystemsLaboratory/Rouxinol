#define _USE_MATH_DEFINES
#define INF 10000000
#include <iostream>
#include <sstream>
#include <cmath>
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

using namespace std;

typedef long long ll;
typedef pair<int,string> P;

static const double eps = 1e-8;

int path[10][10];
int main(){
	int n;
	while(~scanf("%d",&n)){
		if(n==0) break;

		memset(path,0x3,sizeof(path));
		int m=-1;
		for(int i=0;i<n;i++){
			int from,to,cost;
			scanf("%d %d %d",&from,&to,&cost);
			path[from][to] = path[to][from] = min(path[from][to],cost);
			m = max(from,max(to,m));
		}

		for(int k=0;k<=m;k++){
			for(int i=0;i<=m;i++){
				for(int j=0;j<=m;j++){
					if(i==j) path[i][j] = 0;
					else path[i][j] = min(path[i][k]+path[k][j],path[i][j]);
				}
			}
		}

		int mincost = INF;
		int idx=0;
		for(int i=0;i<=m;i++){
			int sum=0;
			for(int j=0;j<=m;j++){
				sum+=path[i][j];
			}
			if(sum < mincost){
				mincost = sum;
				idx = i;
			}
		}

		printf("%d %d\n",idx,mincost);
	}
}