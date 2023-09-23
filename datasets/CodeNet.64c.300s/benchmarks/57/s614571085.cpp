#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int par[12];

void nex(){
	par[0]++;
	int k=0;
	while(par[k]>=2){par[k]-=2; par[k+1]++; k++;}
}

int pow(int x){
	if(x==1)return 2;
	return 2*pow(x-1);
}

int main(){
while(1){
	int r,c,a[12][10002],ret=0;
	scanf("%d%d",&r,&c);
	if(r==0&&c==0)break;
	for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);
	int pr=pow(r);
	for(int i=0;i<12;i++)par[i]=0;
	for(int i=0;i<pr;i++){
		nex();
		int ans=0;
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