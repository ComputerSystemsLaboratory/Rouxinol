#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int R,C;
int maze[15][10005];
int res;
void rev(int n){
	for(int i=0;i<C;i++){
		maze[n][i]=maze[n][i]^1;
	}
}
int Calc(){
	int sum = 0;
	for(int i=0;i<C;i++){
		int cnt = 0;
		for(int j=0;j<R;j++){
			cnt +=maze[j][i];
		}
		sum += max(cnt,R-cnt);
	} 
	return sum;
}
void dfs(int n){
	if(n==R){
		res = max(res, Calc());
		return;
	}
	rev(n);
	dfs(n+1);
	rev(n);
	dfs(n+1);
}
int main(){
	while(scanf("%d%d",&R,&C)==2){
		res = 0;
		if(R==0&&C==0) break;
		for(int i=0;i<R;i++){
			for(int j=0;j<C;j++){
				scanf("%d",&maze[i][j]);
			}
		}
		dfs(0); 
		cout<<res<<endl;
	}
	return 0; 
} 
