#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int r,c,a[10][10000];
	while(true){
		scanf("%d%d",&r,&c);
		if(r==0&&c==0)return 0;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				scanf("%d",&a[i][j]);
			}
		}

		int x[11]={0,0,0,0,0,0,0,0,0,0,0};
		int b[10][10000];
		int ans=0;
		while(true){
			if(x[r]==1)break;
			for(int i=0;i<r;i++)for(int j=0;j<c;j++)b[i][j]=a[i][j];
			for(int i=0;i<r;i++){
				if(x[i]==1){
					for(int j=0;j<c;j++){
						if(b[i][j]==0)b[i][j]=1;
						else b[i][j]=0;
					}
				}
			}
			int k=0;
			
			for(int i=0;i<c;i++){
				int l=0;
				for(int j=0;j<r;j++){
					if(b[j][i]==1)l++;
				}
				
				k+=max(l,r-l);
			}
			ans=max(ans,k);
			
			int z=0;
			x[z]++;
			while(x[z]==2){
				x[z]=0;
				z++;
				x[z]++;
			}
		}
		printf("%d\n",ans);
	}
}