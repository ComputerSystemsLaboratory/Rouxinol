#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=100010;
int t,ok,l[15],r[15],a[15];
void dfs(int i,int x,int y){
	if(i==11){ok=1;return;}
	if(a[i]>l[x]){
		l[x+1]=a[i];
		dfs(i+1,x+1,y);
	}
	if(a[i]>r[y]){
		r[y+1]=a[i];
		dfs(i+1,x,y+1);
	}
}
int main()
{
	cin>>t;
	while(t--){
		memset(l,0,sizeof(l));
		memset(r,0,sizeof(r));
		for(int i=1;i<=10;i++)cin>>a[i];
		ok=0;
		dfs(1,0,0);
		if(ok==1)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}