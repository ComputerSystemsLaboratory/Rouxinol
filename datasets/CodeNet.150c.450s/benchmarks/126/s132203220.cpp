#include<cstdio>

using namespace std;

int main(void){
	int masu[110][110];
	int uramasu[110][110];
	while(1){
		for(int i=0;i<110;i++){
			for(int j=0;j<110;j++){
				masu[i][j]=0;
				uramasu[i][j]=0;
			}
		}
		
		int n,m;
		int c;
		
		scanf("%d%d",&n,&m);
		if(n==0 && m==0){
			break;
		}
		
		scanf("%d",&c);
		
		for(int i=0;i<c;i++){
			int a,b;
			scanf("%d%d",&a,&b);
			uramasu[a][b]=1;
		}
		
		masu[1][1]=1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(uramasu[i][j]==0){
					masu[i+1][j]+=masu[i][j];
					masu[i][j+1]+=masu[i][j];
				}
			}
		}
		
		
		printf("%d\n",masu[n][m]);
		
}
}