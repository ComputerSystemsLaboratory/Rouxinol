#include<iostream>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

vector<int> ad[100000];
vector<int> v,d;

int main()
{
	int i,j,n,m,a,b,q,l,k;
	queue<int> Q;
	
	cin >> n;
	cin >> m;
	for(i=0;i<=m-1;i++)
	{
		cin >> a;
		cin >> b;
		ad[a].push_back(b);
		ad[b].push_back(a);
	}
	for(i=0;i<=n-1;i++) 
	{
		ad[i].push_back(-1);
		v.push_back(0);
		d.push_back(-1);
	}
	j=0;
	for(i=0;i<=n-1;i++)
	{
		if(v[i]==0)
		{
			Q.push(i);
			v[i]=1;
			d[i]=j;
			while(Q.empty()!=1)
			{
				l=Q.front();
				for(k=0;ad[l][k]!=-1;k++)
				{
					if(v[ad[l][k]]==0)
					{
						Q.push(ad[l][k]);
						v[ad[l][k]]=1;
						d[ad[l][k]]=j;
					}
				}
				Q.pop();
			}
			j++;
		}
	}
	cin >> q;
	for(i=0;i<=q-1;i++)
	{
		cin >> a;
		cin >> b;
		if(d[a]==d[b]) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}