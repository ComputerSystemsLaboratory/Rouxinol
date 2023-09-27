#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main(void){
	int a[100001];
	int n,k,sum,t;
	for(;;){
		scanf("%d%d",&n,&k);
		if(n==0&&k==0)return 0;
		sum=t=0;
		for(int i=0;i<n;i++){
			scanf("%d",a+i);
			t+=a[i];
			if(i>=k){
				t-=a[i-k];
				sum=max(sum,t);
			}
			//printf("t %d\n",t);
		}
		printf("%d\n",sum);
	}
}