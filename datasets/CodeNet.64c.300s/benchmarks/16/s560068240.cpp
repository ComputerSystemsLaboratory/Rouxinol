#include<bits/stdc++.h>
using namespace std;

int num[200050]={0};
int main()
{
		int n;
		int maxv=-2000000000,minv;
		scanf("%d",&n);
		for(int i = 1 ; i <= n ; i++)
				scanf("%d",&num[i]);
		minv=num[1];
    for(int i = 2 ; i <= n ; i++)
		{
				maxv=max(maxv,num[i]-minv);
				minv=min(minv,num[i]);
		}
		printf("%d\n",maxv);
		return 0 ;
}

