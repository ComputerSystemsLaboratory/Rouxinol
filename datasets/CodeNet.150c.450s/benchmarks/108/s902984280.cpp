#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef pair<int,int>P;

vector<int>E[100];
int d[100];
int main(){
	int n;cin>>n;
	rep(i,n){
		int u,k;cin>>u>>k;u--;
		rep(i,k){
			int v;cin>>v;v--;
			E[u].push_back(v);
		}
	}
	memset(d,0x3f,sizeof(d));
	queue<P>que;
	d[0]=0;que.push(P(0,0));
	while(!que.empty()){
		P p=que.front();que.pop();
		for(int u:E[p.second]){
			if(d[u]>p.first+1){
				d[u]=p.first+1;
				que.push(P(d[u],u));
			}
		}
	}
	rep(i,n){
		if(d[i]==INF)cout<<i+1<<" -1"<<endl;
		else cout<<i+1<<' '<<d[i]<<endl;
	}
}