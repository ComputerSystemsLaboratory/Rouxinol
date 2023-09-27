#include<iostream>
using namespace std;

int main(){
while(1){
	int r,c,a[12][10002];
	scanf("%d%d",&r,&c); if(r==0&&c==0)break;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}

	int ret=0;
	for(int S=0;S<1024;S++){
		int sum=0;
		for(int j=0;j<c;j++){
			int ans=0;
			for(int i=0;i<r;i++){
				ans+=a[i][j]^((S>>i)&1);
			}
			sum+=max(ans,r-ans);
		}
		ret=max(ret,sum);
	}

	printf("%d\n",ret);
}
}