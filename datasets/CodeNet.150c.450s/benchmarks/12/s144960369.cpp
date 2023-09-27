#include<bits/stdc++.h>

using namespace std;

int main()
{
	static int n,T[251];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&T[i]);
	for(int i=1;i<=n;i++)
	{
		printf("node %d: key = %d, ",i,T[i]);
		if(i>1) printf("parent key = %d, ",T[i/2]);
		if(i*2<=n) printf("left key = %d, ",T[i*2]);
		if(i*2+1<=n) printf("right key = %d, ",T[i*2+1]);
		printf("\n");
	}
	return 0;
}