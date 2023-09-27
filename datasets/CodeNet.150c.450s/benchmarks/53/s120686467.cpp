#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
//by NeighThorn
using namespace std;
int n,m;
signed main(void){
	scanf("%d",&n);m=sqrt(n);printf("%d:",n);
	for(int i=2;i<=m;i++)
		if(n%i==0){
			while(n%i==0)
				n/=i,printf(" %d",i);
		}
	if(n!=1)
		printf(" %d\n",n);
	else
		puts("");
	return 0;
}