#include <bits/stdc++.h>
using namespace std;


vector<int> union_find_parent;
int union_find_init(int n);
int union_find_unite(int a,int b);
int union_find_root(int a);


int main()
{

	int v,e;
	cin >> v >> e;

	vector<tuple<int,int,int>> edge(e);
	for (int i=0;i<e;++i)
	{
		int s,t,w;
		cin >> s >> t >> w;
		edge[i]=make_tuple(w,s,t);
	}
	sort(edge.begin(),edge.end());

	for (int i=0;i<e;++i)
	{
		int s,t,w;
		tie(w,s,t)=edge[i];
		//fprintf(stderr,"%d %d %d\n",s,t,w);
		
	}

	union_find_init(v);
	int total=0;
	for (int i=0;i<e;++i)
	{
		int w,s,t;
		tie(w,s,t)=edge[i];
		if (union_find_root(s)!=union_find_root(t))
		{
			union_find_unite(s,t);
			total+=w;
		}
	}

	cout << total << endl;

}


int union_find_init(int n)
{
	for (int i=0;i<n;++i)
	{
		union_find_parent.push_back(i);
	}
	return 0;
}

int union_find_unite(int a,int b)
{
	a=union_find_root(a);
	b=union_find_root(b);
	if (a!=b)
	{
		union_find_parent[a]=b;
	}
	return 0;
}

int union_find_root(int a)
{
	if (union_find_parent[a]==a)
	{
		return a;
	}
	else
	{
		return union_find_parent[a]=union_find_root(union_find_parent[a]);
	}
}



