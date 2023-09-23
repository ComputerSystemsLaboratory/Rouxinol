#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<cstring>
#include<cctype>
#include<complex>
#include<iostream>
#include<sstream>
#include<algorithm>
#include<functional>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<bitset>
using namespace std;
const int dx[] = {1,0,-1,0},dy[] = {0,1,0,-1};
#define INF 1e+8
#define EPS 1e-8
#define rep(i,j) for(int i = 0; i < (j); i++)
#define reps(i,j,k) for(int i = (j); i < (k); i++)
int rules[12];
int ans;
int stage[12][10001];

int simulate(int R,int C){
	int res  = 0;
	rep(i,R){
		if( rules[i] == 1){
			rep(j,C)stage[i][j] = 1-stage[i][j];
		}
	}
	rep(j,C){
		int sum = 0;
		rep(i,R){
			sum += stage[i][j];
		}
		res += max(sum,R-sum);
	}
	rep(i,R){
		if( rules[i] == 1){
			rep(j,C)stage[i][j] = 1-stage[i][j];
		}
	}
	return res;
}
void pattern(int dep,int R,int C){
	if(dep == R){
		ans = max(ans,simulate(R,C));
		return ;
	}
	rules[dep] = 1;
	pattern(dep+1,R,C);
	rules[dep] = 0;
	pattern(dep+1,R,C);
}
int main(){
	int R,C;
	while(scanf("%d%d",&R,&C),R){
		memset(stage,0,sizeof(stage));
		memset(rules,0,sizeof(rules));
		ans = 0;
		rep(i,R){
			rep(j,C){
				int tmp;
				scanf("%d",&tmp);
				stage[i][j] = tmp;
			}
		}
		pattern(0,R,C);
		printf("%d\n",ans);
	}
    return 0;
}