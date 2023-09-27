#include<iostream>
#include<cstdio>

using namespace std;

int n,s;
int cnt;

void dfs(int v,int c,int ns){
	if(c==n && s==ns)cnt++;
	if(c<n){
		for(int i=v+1;i<=9;i++)dfs(i,c+1,ns+i);
	}
}

int main(void){
	while(1){
		scanf("%d%d",&n,&s);
		cnt=0;
		if(n==0)break;
		dfs(-1,0,0);
		printf("%d\n",cnt);
	}
	return 0;
}