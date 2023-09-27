#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vec;

long long cnt=0;

void Merge_Sort(vec& A)
{
	int n=A.size();
	if(n==1) return;
	vec A1,A2;
	for(int i=0;i<n;i++)
		if(i<(n>>1))
			A1.push_back(A[i]);
		else
			A2.push_back(A[i]);
	Merge_Sort(A1);Merge_Sort(A2);
	int t=0,t1=0,t2=0,n1=A1.size(),n2=A2.size();
	while(t1<n1&&t2<n2)
	{
		if(A1[t1]<A2[t2])
			A[t++]=A1[t1++];
		else
		{
			A[t++]=A2[t2++];
			cnt+=n1-t1;
		}
	}
	while(t1<n1) A[t++]=A1[t1++];
	while(t2<n2) A[t++]=A2[t2++];
}

int main()
{
	int n;
	vec A;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		A.push_back(t);
	}
	Merge_Sort(A);
	printf("%lld\n",cnt);
	return 0;
}