#include<cstdio>

using namespace std;

int r,c;
const int MAX_R = 10;
const int MAX_C = 10000;
int ary[MAX_R][MAX_C];
int rev[MAX_R];
int count_col[2];

int count(){
	int ret = 0;
	for(int j=0;j<c;j++){
		count_col[0] = 0;
		count_col[1] = 0;
		for(int i=0;i<r;i++){
			count_col[ ary[i][j] ^ rev[i] ]++;
		}
		if(count_col[0]>count_col[1]){
			ret += count_col[0];
		}else{
			ret += count_col[1];
		}
	}
	return ret;
}

int dfs(int i){
	if(i==r)return count();
	rev[i] = 0;
	int tmp0 = dfs(i+1);
	rev[i] = 1;
	int tmp1 = dfs(i+1);
	if(tmp0>tmp1)return tmp0;
	return tmp1;
}

int main(){
	while(true){
		scanf("%d%d",&r,&c);
		if(r==0 && c==0)break;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				scanf("%d",&ary[i][j]);
			}
		}
		int ans = dfs(0);
		printf("%d\n",ans);
	}
}