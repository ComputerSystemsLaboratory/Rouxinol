#include <iostream>
#include<vector>
using namespace std;
class disjointset
{
public:
	vector<int> rank;
	vector<int> p;
	
	void makeset(int x)
	{
		p[x]=x;
		rank[x]=0;
		return;
	}
	disjointset(int s)
	{
		rank.resize(s,0);
		p.resize(s,0);
		for(int i=0;i<s;i++)makeset(i);
		return;
	}
	int findset(int x)
	{
		if(x!=p[x])p[x]=findset(p[x]);
		return p[x];
	}
	void link(int x,int y)
	{
		if(rank[x]>rank[y])p[y]=x;
		else
		{
			p[x]=y;
			if(rank[x]==rank[y])rank[y]++;
		}
		return;
	}
	bool same(int x,int y)
	{
		return findset(x)==findset(y);
	}
	void unite(int x,int y)
	{
		link(findset(x),findset(y));
		return;
	}
};

int main() {
	int n,q;cin>>n>>q;
	disjointset d=disjointset(n);
	int a,b,c;
	for(int i=0;i<q;i++)
	{
		cin>>a>>b>>c;
		if(a)
		{
			if(d.same(b,c))cout<<1<<endl;
			else cout<<0<<endl;
		}
		else d.unite(b,c);
	}
	return 0;
}