#include<stdio.h>

int main(){
	while(1){
		int n,m;
		char ord;
		int d;
		int i,j;
		int px=10;
		int py=10;
		int ans=0;
		bool isj[21][21];
		scanf("%d",&n);
		if(n==0)return 0;
		for(i=0;i<21;i++)for(j=0;j<21;j++)isj[i][j]=false;
		for(i=0;i<n;i++){
			int x,y;
			scanf("%d %d",&x,&y);
			isj[x][y]=true;
		}
		scanf("%d",&m);
		for(i=0;i<m;i++){
			scanf(" %c %d",&ord,&d);
			for(j=0;j<d;j++){
				if(ord=='N')py++;
				if(ord=='E')px++;
				if(ord=='S')py--;
				if(ord=='W')px--;
				if(isj[px][py]){
					ans++;
					isj[px][py]=false;
				}
			}
		}
		if(ans==n)printf("Yes\n");
		else printf("No\n");
	}
}
			