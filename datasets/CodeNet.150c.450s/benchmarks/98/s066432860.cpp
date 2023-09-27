#include<stdio.h>
#define INF 999999
int main(){
	int n,m,s[256],i,j,ta=0,tb=0,suma=INF,sumb=INF;
	while(1){
		scanf("%d %d",&n,&m);
		if(n==0&&m==0)break;
		for(i=0;i<n+m;i++)scanf("%d",&s[i]);
		ta=0;
		tb=0;
		suma=INF;
		sumb=INF;
		for(i=0;i<n;i++)ta+=s[i];
		for(i=n;i<n+m;i++)tb+=s[i];
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(ta-s[i]+s[n+j]==tb+s[i]-s[n+j]){
					if(suma+sumb>s[i]+s[n+j]){
						suma=s[i];
						sumb=s[n+j];
					}
				}
			}
		}
		if(suma==INF||sumb==INF)printf("-1\n");
		else printf("%d %d\n",suma,sumb);
	}
	return 0;
}