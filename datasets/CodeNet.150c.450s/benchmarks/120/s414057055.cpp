#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
while(1){
	int r,c,a[12][10002],ret=0,par[10];
	scanf("%d%d",&r,&c);
	if(r==0&&c==0)break;
	for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);
	for(int i=0;i<1024;i++){
		int x=i,ans=0;
		for(int j=0;j<10;j++){par[j]=x%2; x/=2;}
		for(int j=0;j<c;j++){
			int sum=0;
			for(int k=0;k<r;k++){
				if((a[k][j]+par[k])%2==0)sum++;
			}
			ans+=max(sum,r-sum);
		}
		if(ret<ans)ret=ans;
	}
	printf("%d\n",ret);
}
}