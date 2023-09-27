#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
	int n;
	while(cin >> n,n){
		int m[86400]={};
		for(int i=0;i<n;i++){
			int bh,bm,bs,eh,em,es;
			scanf("%d:%d:%d %d:%d:%d",&bh,&bm,&bs,&eh,&em,&es);
			m[(bh*60*60)+(bm*60)+bs]+=1;
			m[(eh*60*60)+(em*60)+es]+=-1;
		}
		int count=0,ans=0;
		for(int i=0;i<86400;i++){
			count+=m[i];
			ans=max(ans,count);
		}
		cout << ans << endl;
	}
}