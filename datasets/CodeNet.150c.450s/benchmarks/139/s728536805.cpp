#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
struct node {
	int v, next1;
} e[1000009];
int n,m;
int cnt=0;
int dis[1000009];
int head[1000009];
void add(int x,int y) {
	e[++cnt].v=y;
	e[cnt].next1=head[x];
	head[x]=cnt;
}
bool bfs(int a) {
	queue<int>q;
	q.push(a);
	dis[a]=0;
	while(q.size()) {
		int x=q.front();
		q.pop();
		for(int i=head[x]; i; i=e[i].next1) {
			int y=e[i].v;
			if(dis[y]==-1) {
				dis[y]=x;
				q.push(y);
			}

		}

	}
	for(int i=2; i<=n; i++) {
		if(dis[i]==-1)
			return false;


	}
	return true;
}
int main() {
	cin>>n>>m;
	memset(dis,-1,sizeof(dis));
	memset(head,0,sizeof(head));
	for(int i=1; i<=m; i++) {
		int x,y;
		cin>>x>>y;
		add(x,y);
		add(y,x);
	}

	if(!bfs(1)) {
		cout<<"No"<<endl;
		return 0;
	} else {
		cout<<"Yes"<<endl;
		for(int i=2; i<=n; i++)
			cout<<dis[i]<<endl;
	}
}

