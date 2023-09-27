#include<bits/stdc++.h>
#define wgt(x) (x.first)
#define s(x) (x.second.first)
#define t(x) (x.second.second)
#define mwe(w,s,t) make_pair(w,make_pair(s,t))

using namespace std;

typedef pair<int,int> edge;
typedef pair<int,edge> we;

int main()
{
	int n,G[100][100];
	bool used[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&G[i][j]);
	memset(used,false,sizeof(used));
	priority_queue<we,vector<we>,greater<we> > pq;
	int tot=0;
	used[0]=true;
	for(int i=0;i<n;i++)
		if(G[0][i]>=0)
			pq.push(mwe(G[0][i],0,i));
	while(!pq.empty())
	{
		we t=pq.top();pq.pop();
		if(used[t(t)]) continue;
		tot+=wgt(t);
		used[t(t)]=true;
		for(int i=0;i<n;i++)
			if(!used[i]&&G[t(t)][i]>=0)
				pq.push(mwe(G[t(t)][i],t(t),i));
	}
	printf("%d\n",tot);
	return 0;
}