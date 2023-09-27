#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	int n,k,sum,max;
	int a[100001];
	while(scanf("%d %d",&n,&k)){
		if(n==0&&k==0)
		break;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		sum=0;
		max=0;
		for(int i=0;i<n;i++){
			if(i<k)
			sum+=a[i];
			else if(i>=k){
				sum+=a[i];
				sum-=a[i-k];
			}
			if(i==k-1)
			max=sum;
			else if(i>k-1){
				max=(max<sum ? sum:max);
			}
		}
		printf("%d\n",max);
	}
}