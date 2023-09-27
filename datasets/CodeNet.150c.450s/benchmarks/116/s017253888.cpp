#include<iostream>
using namespace std;

int main(){
while(1){
	int a[100000+2],n,k,ans=0,sum=0;
	scanf("%d%d",&n,&k);
if(n==0&&k==0)break;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<k;i++){
		sum+=a[i];
	}
	ans=sum;
	for(int i=k;i<n;i++){
		sum+=a[i]-a[i-k];
		if(ans<sum)ans=sum;
	}
	printf("%d\n",ans);
}
}