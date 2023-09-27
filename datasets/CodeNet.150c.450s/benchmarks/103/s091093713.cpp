#include<bits/stdc++.h>
using namespace std;
int dfs(int x,int y,int k){
	if(y==0)
		return x==0?1:0;
	if(x<0)
		return 0;
	int ans=0;
	for(int i=k+1;i<10;i++)
		ans+=dfs(x-i,y-1,i);
	return ans;
}
signed main(void){
	ios::sync_with_stdio(false);
	int x,y;
	while(cin>>y>>x&&(x||y))
		cout<<dfs(x,y,-1)<<endl;
}