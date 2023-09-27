#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<climits>
#include<iostream>
#include<sstream>
#include<utility>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
#include<set>
#include<stack>
using namespace std;
typedef long long ll;
typedef pair<int,int>P;
map<int,int>t;
int N,B[200005],bit[200005];

int sum(int i)
{
	int s=0;
	while(i>0)
	{
		s+=bit[i];
		i-=i&-i;
	}
	return s;
}

void add(int i,int x)
{
	while(i<=N)
	{
		bit[i]+=x;
		i+=i&-i;
	}
}
int main()
{
	long long ans=0;
	scanf("%d",&N);

	for(int i=0;i<N;i++)
	{
		scanf("%d",B+i);
		t[B[i]]=1;
	}
	int i=1;
	for(map<int,int>::iterator it=t.begin();it!=t.end();it++,i++)
		it->second=i;
	for(int i=0;i<N;i++)
		B[i]=t[B[i]];
	for(int j=0;j<N;j++)
	{
		ans+=j-sum(B[j]);
		add(B[j],1);
	}
	printf("%lld\n",ans);
}