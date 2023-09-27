#include<stdio.h>
#define INF -1000000000
int ar[5000];
int d[5001];

int max(int a,int b){
	if(a>=b)return a;
	else return b;
}

int main(){
	int n,i,j;
	while(1){
		scanf("%d",&n);
		if(n==0)return 0;
		for(i=0;i<n;i++){
			scanf("%d",&ar[i]);
		}
		d[0]=0;
		int ans=INF;
		for(i=1;i<n+1;i++)d[i]=d[i-1]+ar[i-1];
		for(i=0;i<n;i++)for(j=i+1;j<n+1;j++){
			ans=max(ans,d[j]-d[i]);
		}
		printf("%d\n",ans);
	}
}