#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int a[100010],L[100010];	int n;
int lis(){
	L[0]=a[0];
	int l=1;
	for(int i=1;i<n;i++){
		if(a[i]>L[l-1]) L[l++]=a[i];
		else{
			*lower_bound(L,L+l,a[i])=a[i];
		}
	}
	return l;
}
int main(){

	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d\n",lis());
}
