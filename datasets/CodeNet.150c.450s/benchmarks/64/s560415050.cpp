#include<stdio.h>
int A[50],n;
int suuki(int i ,int m)
{
	if(m==0) return 1;
	if(i>=n) return 0;
	int L=suuki(i+1,m)||suuki(i+1,m-A[i]);
	return L;
}
int main(){
	int i,m,q;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	scanf("%d",&q);
	for(i=0;i<q;i++){
		scanf("%d",&m);
		if(suuki(0,m)) 
		printf("yes\n");
		else printf("no\n");
	}
	return 0;
}