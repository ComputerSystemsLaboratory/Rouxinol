#include<bits/stdc++.h>

using namespace std;

const int MAXN=100100;

int A[MAXN],n,k;

bool check(int P)
{
	int t=0,tot=0;
	for(int i=0;i<n;i++)
	{
		if(t+A[i]>P)
		{
			tot++;
			t=A[i];
		}
		else t+=A[i];
	}
	tot++;
	if(tot>k) return false;
	return true;
}

int main()
{
	scanf("%d%d",&n,&k);
	int ul=0,ur=INT_MAX;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		ul=max(ul,A[i]);
	}
	ul--;
	ur-=ul;
	while(ur-ul>1)
	{
		int mid=(ur+ul)>>1;
		if(check(mid)) ur=mid;
		else ul=mid;
	}
	printf("%d\n",ur);
	return 0;
}