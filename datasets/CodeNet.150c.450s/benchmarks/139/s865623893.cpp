#include<iostream>
#include<vector>
#include<deque>
using namespace std;
const int MAX=1e5+5;
const int inf=100000000;
deque<int>q;
vector<int>e[MAX];
int a[MAX];
int v[MAX];
int book[MAX];
int ans[MAX];
void bfs()
{
	int p;
	while(!q.empty())
	{
		p=q.front();
		q.pop_front();
		for(int i=0;i<a[p];i++)
		{
			if(!book[e[p][i]]){
				if(v[p]+1<v[e[p][i]])
				{
					v[e[p][i]]=v[p]+1;
					ans[e[p][i]]=p;
				}
				book[e[p][i]]=1;
				q.push_back(e[p][i]);
			}
		}
	}
} 
int main()
{
	int n;
	int m;
	cin>>n>>m;
	int hhn,hn;
	for(int i=2;i<=n;i++)
	{
		v[i]=inf,a[i]=0,book[i]=0,ans[i]=0;
	}
	v[1]=0,book[1]=1; 
	for(int i=1;i<=m;i++)
	{
		cin>>hn>>hhn;
		e[hn].push_back(hhn);
		e[hhn].push_back(hn);
		a[hn]++;
		a[hhn]++;
	}
	q.push_back(1);
	bfs();	
	int flag=1;
	for(int i=2;i<=n;i++)
	{
		if(v[i]==inf)
		flag=0;
	}
	if(flag)
	{
		cout<<"Yes"<<endl;
		for(int i=2;i<=n;i++)
		cout<<ans[i]<<endl;
	}else
	cout<<"No"<<endl;

	
	
return 0;
 } 