#include<iostream>
using namespace std;

int main(){
while(1){
	int n,k,a[100002],sum=0,ans=0;
	scanf("%d%d",&n,&k);
	if(n==0&&k==0)break;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<k;i++){
		sum+=a[i];
	}
	ans=sum;
	for(int i=0;k<n;i++){
		sum-=a[i];
		sum+=a[k];
		if(ans<sum)ans=sum;
		k++;
	}
	printf("%d\n",ans);
}
}