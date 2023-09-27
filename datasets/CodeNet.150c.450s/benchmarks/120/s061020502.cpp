#include <bits/stdc++.h>
using namespace std;

const int maxR = 10;
const int maxC = 1e4;
int R,C;
bitset<maxC> a[maxR];

int ans;
bool tmp;

void dfs(int k){
	if(k == R){
		int res = 0;
		for(int j=0;j<C; j++){
			int upNum = 0;
			for(int i=0; i<R; i++){
				if(a[i][j]) upNum++;
			}
			res += max(upNum,R-upNum);
		}

		ans = max(ans,res);
		return;
	}
	dfs(k+1);
	a[k].flip();
	dfs(k+1);
}


int main(){
	while(scanf("%d%d",&R,&C) && (R||C)){
		for(int i=0; i<R; i++){
			for(int j=0; j<C; j++){
				scanf("%d",&tmp);
				a[i][j] = tmp;
			}
		}

		ans = 0;
		dfs(1);
		printf("%d\n",ans);
	}
}