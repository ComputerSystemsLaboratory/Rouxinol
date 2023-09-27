#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)

int h,b[10][5],a,e;

int main(){
	while(scanf("%d",&h),h){
		a=0;
		memset(b,0,sizeof(b));
		rep(i,h)rep(j,5)scanf("%d",b[i]+j);
		e=0;
		while(!e){
			e=1;
			for(int i=h-1;i>=0;i--)rep(j,3){
				int k=j;
				if(b[i][j]){
					while(k+1<5&&b[i][j]==b[i][k+1])k++;
					if(k-j>=2){
						a+=(k-j+1)*b[i][j];
						for(int v=j;v<=k;v++)b[i][v]=0;
					}
				}
			}
			for(int i=h-1;i>=0;i--)rep(j,5)if(!b[i][j])for(int k=i-1;k>=0;k--)if(b[k][j]){
				b[i][j]=b[k][j];b[k][j]=0;e=0;break;
			}
		}
		printf("%d\n",a);
	}
}