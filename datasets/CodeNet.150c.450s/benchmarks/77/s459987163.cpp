#include<stdio.h>

int main(void){
	int n,x,y,mo,cnt;
	char c;
	int m[21][21];
	for(;;){
		scanf("%d",&n);
		if(n==0)break;
		cnt=0;
		for(int i=0;i<21;i++)for(int j=0;j<21;j++)m[i][j]=0;
		for(int i=0;i<n;i++){
			scanf("%d%d",&x,&y);
			if(x!=10&&y!=10){
				m[x][y]=1;
				cnt++;
			}
		}
		scanf("%d",&n);
		x=y=10;
		for(int i=0;i<n;i++){
			scanf(" %c%d",&c,&mo);
			for(int j=0;j<mo;j++){
				if(c=='N')y++;
				else if(c=='E')x++;
				else if(c=='W')x--;
				else if(c=='S')y--;
				if(m[x][y]==1){
					m[x][y]=0;
					cnt--;
				}
			}
		}
		puts(cnt==0?"Yes":"No");
	}
	return 0;
}