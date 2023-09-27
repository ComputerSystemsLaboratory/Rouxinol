#include<stdio.h>
int n,A[20],q,m;
int a(int i,int m);
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		scanf("%d",&m);
		if(a(0,m))
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
int a(int i,int m){
	if(m==0)
		return 1;
	if(i>=n)
		return 0;
	int b=a(i+1,m)||a(i+1,m-A[i]);
	return b;
}