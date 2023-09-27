#include<bits/stdc++.h>

using namespace std;

const int MAXM=2020; 

int main()
{
	bitset<MAXM> bs;
	bs.set(0);
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		bs=bs|(bs<<t);
	}
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		if(bs[t])
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}