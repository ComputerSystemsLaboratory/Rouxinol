#include <iostream>
#include <cstdio>
using namespace std;
int a[10];
bool dfs(int cur,int l,int r){
	if(cur==10){
		return true;
	}
	return (a[cur]>l && dfs(cur+1,a[cur],r)) || (a[cur]>r && dfs(cur+1,l,a[cur]));
}
int main(){
	ios::sync_with_stdio(false);
	int T;
	cin>>T;
	while(T--){
		for(int i=0;i<10;i++)
			cin>>a[i];
		puts(dfs(0,0,0)?"YES":"NO");
	}
	return 0;
}