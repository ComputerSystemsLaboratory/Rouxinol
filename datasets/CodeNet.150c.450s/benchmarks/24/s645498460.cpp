#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
#define INF 100000000
int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}

int main(){
	while(1){
		int n,m,sum=0;
		int d[10000],p[10000];
		cin>>n>>m;
		if(n==0&&m==0)break;
		for(int i=0;i<n;i++){
			cin>>d[i]>>p[i];
			sum+=d[i];
		}
		if(sum<=m){
			cout<<'0'<<endl;
			continue;
		}
		while(m>0){
			int a=0,b=0,flg=0;
			for(int i=0;i<n;i++){
				if(a<p[i]){
					a=p[i];b=i;flg=1;
				}
			}
			if(flg==0)break;
			if(m>=d[b]){
				p[b]=-1;m-=d[b];d[b]=0;
			}else{
				d[b]-=m;m=0;break;
			}
		}
		sum=0;
		for(int i=0;i<n;i++){
			if(p[i]>0){
				sum+=p[i]*d[i];
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}	