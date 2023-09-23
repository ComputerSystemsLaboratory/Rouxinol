#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>

using namespace std;

const int maxn=1e7+10;
int A[maxn];

void partition(int l,int r)
{
	int flag;
	int x=A[r];
	int i=l-1;
	for(int j=l;j<r;j++){
		if(A[j]<=x){
			i++;
			swap(A[i],A[j]);
		}
	}
	swap(A[i+1],A[r]);
	flag=i+1;
	for(int i=l;i<=r;i++){
		if(i>1)printf(" ");
		if(i==flag)printf("[");
		printf("%d",A[i]);
		if(i==flag)printf("]");
	}
	printf("\n");
}

int main()
{
	int n;
	scanf("%d",&n);
	memset(A,0,sizeof(A));
	for(int i=1;i<=n;i++)scanf("%d",&A[i]);
	partition(1,n);
	return 0;
}
