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
using namespace std;
typedef long long ll;
typedef pair<int,int>P;
const int MAX_N=100009;
int tree[3*MAX_N];
int inv=0;

int N,Q;

void init(int _N,int iniv)
{
	for(N=1;N<=_N;)
		N*=2; 
	for(int i=0;i<2*N-1;i++)
		tree[i]=iniv;
}

void update(int p,int a)
{
	p+=N-1;
	tree[p]+=a;
	for(;p>0;)
	{
		p=(p-1)/2;
		tree[p]=tree[p*2+1]+tree[p*2+2];
	}
}

int query(int l,int r,int k,int nl,int nr)
{
	if(nr<=l||r<=nl)return inv;
	if(l<=nl&&nr<=r)return tree[k];
	 
	int vl=query(l,r,k*2+1,nl,(nl+nr)/2);
	int vr=query(l,r,k*2+2,(nl+nr)/2,nr);
	return vl+vr;
}


int main()
{
	scanf("%d%d",&N,&Q);
	init(N,inv);
	for(int i=0;i<Q;i++)
	{
		int con,x,y;
		scanf("%d%d%d",&con,&x,&y);
		if(!con)
			update(x,y);
		else
			printf("%d\n",query(x,y+1,0,0,N));
	}
}