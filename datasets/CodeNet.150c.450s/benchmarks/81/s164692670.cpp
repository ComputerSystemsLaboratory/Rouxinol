#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<cstring>
#include<algorithm>
using namespace std;
#define INF 10000000
int route[10][10],d[10],n,sum;
int min(int a,int b){
	if(a<b){
		return a;
	}else{
		return b;
	}
}
void dijkstra(int a){
	int s[10],k,num,i,j;
	sum=0;
	for(i=0;i<10;i++){
		s[i]=0;
		d[i]=INF;
	}
	d[a]=0;
	for(i=0;i<10;i++){
		k=INF;
		for(j=0;j<10;j++){
			if(s[j]==0){
				if(k>d[j]){
					k=d[j];num=j;
				}
			}
		}
		s[num]=1;
		for(j=0;j<10;j++){
			if(route[num][j]!=INF){
				d[j]=min(d[j],d[num]+route[num][j]);
			}
		}
	}
	
	for(i=0;i<10;i++){
		if(s[i]==1){
			sum+=d[i];
		}
	}
	if(sum==0)sum=INF;
	return;

}

int main(){
	while(1){
		int i,j,a,b,c,ans,min=INF;
		cin>>n;
		if(n==0)break;
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
				route[i][j]=INF;
			}
		}
		for(i=0;i<n;i++){
			cin>>a>>b>>c;
			route[a][b]=c;
			route[b][a]=c;
		}
		for(i=0;i<10;i++){
			dijkstra(i);
			if(sum<min){
				min=sum;ans=i;
			}
		}
		cout<<ans<<' '<<min<<endl;
	}
    return 0;
}