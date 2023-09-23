#include<stdio.h>
#include<string.h>

int main(){
	int a,b,dou[20][20],m,x,y,i,j;
	
	while(~scanf("%d%d",&a,&b)){
		if(a==0 && b==0)break;
		
		scanf("%d",&m);
		memset(dou,0,sizeof(dou));
		for(i=0;i<m;i++){
			scanf("%d%d",&x,&y);
			dou[x][y]=-1;
		}
		dou[1][1]=1;
		for(i=1;i<=a;i++){
			for(j=1;j<=b;j++){
				if(dou[i][j]==-1)continue;
				if(dou[i-1][j]!=-1)dou[i][j]+=dou[i-1][j];
				if(dou[i][j-1]!=-1)dou[i][j]+=dou[i][j-1];
			}
		}
		
		printf("%d\n",dou[a][b]);
	}
	return 0;
}