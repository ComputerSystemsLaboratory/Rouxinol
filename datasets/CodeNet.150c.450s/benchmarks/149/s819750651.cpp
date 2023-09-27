#define MAXN 10000+100
#define MAXM 100000
#include<iostream>
using namespace std;

int N,M;//0 merge 1 judge true or false
int fa[MAXN];

int findfa(int n)
{
	if(fa[n]==n) 
		return n;
	return fa[n]=findfa(fa[n]);
}
int judge(int a,int b)
{
	int oria,orib;
	oria=findfa(a);
	orib=findfa(b);
	if(oria==orib)
		return 1;
	else 
		return 0;
}
void merge(int a,int b)
{
	int oria,orib;
	oria=findfa(a);
	orib=findfa(b);
	fa[oria]=orib;
}

int main()
{
	cin>>N>>M;
	for(int i=0;i<=N;++i)
		fa[i]=i;
	for(int i=0;i<M;++i)
	{
		int oper,x,y;
		cin>>oper>>x>>y;
		if(oper)
			cout<<judge(x,y)<<endl;
		else
			merge(x,y);
	}
	return 0;
}