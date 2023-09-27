#include<iostream>
#include<string.h>
using namespace std;
long long sin[100001];
int main(){
	while(1){
	memset(sin,0,sizeof(sin));
	long n,k;
	int i,j,max=0,x;
		cin>>n>>k;if(n==0&&k==0)break;
	for(i=1;i<=n;i++){
		cin>>sin[i];
	}
	x=0;
	for(j=1;j<=k;j++){
		x+=sin[j];
	}
		for(i=k+1;i<=n;i++){
			x+=sin[i];
			x-=sin[i-k];
			if(x>max)max=x;
		}
		cout<<max<<endl;
	}
	return 0;
}