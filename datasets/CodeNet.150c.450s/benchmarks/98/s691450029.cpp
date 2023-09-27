#include<iostream>
#include<cstdio>
using namespace std;
int N,M;
int A[100];
int B[100];
int sum1,sum2;
int ans1,ans2;
int main()
{
	while(true){
		scanf("%d%d",&N,&M);
		if(N==0&&M==0)break;
		sum1=0;sum2=0;
		ans1=100001;ans2=100001;
		for(int i=0;i<N;i++){
			scanf("%d",&A[i]);
			sum1+=A[i];
		}
		for(int i=0;i<M;i++){
			scanf("%d",&B[i]);
			sum2+=B[i];
		}
		for(int i=0;i<N;i++){
			for(int j=0;j<M;j++){
				int sum3=sum1;
				int sum4=sum2;
				sum3-=A[i];sum3+=B[j];
				sum4+=A[i];sum4-=B[j];
				if(sum3==sum4){
					if(ans1+ans2>A[i]+B[j]){
						ans1=A[i];ans2=B[j];
					}
				}
			}
		}
		if(ans1!=100001)printf("%d %d\n",ans1,ans2);
		else printf("-1\n");
	}
	return 0;
}