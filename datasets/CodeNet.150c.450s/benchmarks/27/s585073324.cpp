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
typedef struct d{ll n,r,l;}d;
const ll INF=100000000000000000;
d T[1000001];
int N,gp=1;

void pre(int n)
{
	if(n==-1)return;
	printf(" %d",T[n].n);
	if(T[n].l!=-1)pre(T[n].l);
	if(T[n].r!=-1)pre(T[n].r);
	return;
}

void ino(int n)
{
	if(n==-1)return;
	if(T[n].l!=-1)ino(T[n].l);
	printf(" %d",T[n].n);
	if(T[n].r!=-1)ino(T[n].r);
	return;
}

void ins(int p,int np=0)
{
	if(T[np].n==INF)T[np].n=p;
	else
	{
		if(T[np].n>p)
		{
			if(T[np].l==-1)
				T[np].l=gp++;
			ins(p,T[np].l);
		}
		else
		{
			if(T[np].r==-1)
				T[np].r=gp++;
			ins(p,T[np].r);
		}
	}
}

void p()
{
	ino(0);puts("");
	pre(0);puts("");
}

int main()
{
	for(int i=0;i<1000001;i++)
	{
		T[i].n=INF;
		T[i].r=T[i].l=-1;
	}
	scanf("%d\n",&N);
	for(int i=0;i<N;i++)
	{
		char s[20];
		int a;
		scanf("%s%d\n",s,&a);
		if(s[0]=='i')
			ins(a);
		else
			p();
	}
}