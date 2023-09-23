#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int kao[10][10000];
int sum=0;
int r,c;
void dfs(int p) {
	if(p==r) {
		int res=0;
		for(int j=0; j<c; j++) {
			int ans=0;
			for(int i=0; i<r; i++) {
				if(kao[i][j]==1) {
					ans++;
				}
			}
			res+=max(ans,r-ans);
		}
		sum=max(sum,res);
		return ;
	}
	dfs(p+1);
	for(int j=0; j<c; j++) {
		if(kao[p][j]==1) {
			
			kao[p][j]=0;
		} else {
		
			kao[p][j]=1;
		}
	}
	dfs(p+1);
	for(int j=0; j<c; j++) {
		if(kao[p][j]==1) {
		
			kao[p][j]=0;
		} else {
		
			kao[p][j]=1;
		}
	}
}



int main() {

	while(true) {
		scanf("%d %d",&r,&c);
		if(r==0&&c==0) break;
		sum=0;
		for(int i=0; i<r; i++)
			for(int j=0; j<c; j++) {
				scanf("%d",&kao[i][j]);

			}

		dfs(0);
		printf("%d\n",sum);
	}
}