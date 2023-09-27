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
int min(int a,int b){
	if(a<b){
		return a;
	}else{
		return b;
	}
}

int main(){
	while(1){
		int sum=0,ans,n,m,x;
		double p,a;
		cin>>n>>m>>p;
		if(n+m+p==0)break;
		for(int i=1;i<=n;i++){
			cin>>x;
			if(i==m){
				sum+=x*100;
				a=x;
			}else{
				sum+=x*100;
			}
		}
		if(a==0){
			cout<<'0'<<endl;
		}else{
			cout<<(int)((sum*(100-p)/100)/a)<<endl;
		}
	}
	return 0;
}	