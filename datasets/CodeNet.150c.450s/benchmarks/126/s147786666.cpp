#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m,h,a[17][17],i,j,l,w,b,c,flg;
int main(void)
{
	while(1){
		scanf("%d %d",&n,&m);
		if(n==0&&m==0) break;
		scanf("%d",&h);
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				a[i][j]=0;
			}
		}
		for(i=0;i<h;i++){
			scanf("%d %d",&b,&c);
			a[c][b]=-1;
		}
		a[1][1]=1;
		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				if(i<m&&a[i][j]!=-1&&a[i][j+1]!=-1){
					a[i][j+1]+=a[i][j];
				}
				if(a[i+1][j]!=-1&&a[i][j]!=-1){
					a[i+1][j]+=a[i][j];
				}
			}
		}
/*		for(i=1;i<=m;i++){
			for(j=1;j<=n;j++){
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
*/		w=0;
		for(i=1;i<=n;i++){
			if(a[m][i]!=-1) w+=a[m][i];
			else w=0;
		}
		printf("%d\n",w);
	}
	return 0;
}