#include<cstdio>
#include<cstring>

int hyou[17][17],Table[17][17];

int main(){
	int n,m,a,b,c;
	scanf("%d%d",&n,&m);
	if(n==0&&m==0) return 0;
	memset(hyou,0,sizeof(hyou));
	memset(Table,0,sizeof(Table));
	Table[1][0]=1;
	scanf("%d",&a);
	while(a--){
		scanf("%d%d",&b,&c);
		hyou[b][c]=-1;
	}
	
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(hyou[i][j]==-1){Table[i][j]=0;}
			else{ Table[i][j]=Table[i-1][j]+Table[i][j-1];	}	
		}
	}
	printf("%d\n",Table[n][m]);
	main();
	
	
	return 0;
}