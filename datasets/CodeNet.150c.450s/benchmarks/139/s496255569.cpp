#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
struct node{
	int c;
	int next;
}e[2000005];
int head[200005];
int dis[200005];
int n,m;
int tot;
void add(int x,int y){
	e[tot].c=y;
	e[tot].next=head[x];
	head[x]=tot;
	tot++;
}
bool dfs(int x){
	queue<int> q;
	q.push(x);
	dis[x] = 0;
	while(q.size()){
		int u=q.front();
		q.pop();
		for(int i=head[u];~i;i=e[i].next){
			int c=e[i].c;
			if(dis[c]==-1){
				dis[c]=u;
				q.push(c);
			}
		}
	}
	for(int i=2;i<=n;i++){
		if(dis[i]==-1) return false;
	}
	return true;
}
int main(){
	memset(head,-1,sizeof(head));
	memset(dis,-1,sizeof(dis));
	tot=0;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		add(x,y);
		add(y,x);
	}
	if(!dfs(1)){
		cout<<"No"<<endl;
	}else{
		cout<<"Yes"<<endl;
		for(int i=2;i<=n;i++){
			cout<<dis[i]<<endl;
		}
	}
return 0;
}