#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<functional>
#include<cmath>
using namespace std;
#define P pair<int,int>
int V,E;
struct edge{int to,cost;};
vector<edge>G[110000];
int ans[110000];
const int INF=pow(2,30);
int main(){
	fill(ans,ans+100000,INF);
	int r;
	cin>>V>>E>>r;
	for(int i=0;i<E;i++){
	int s,t,d;
	cin>>s>>t>>d;
	edge tmp;
	tmp.to=t,tmp.cost=d;
	G[s].push_back(tmp);
	}
	ans[r]=0;
	priority_queue<P,vector<P>,greater<P> >que;
	que.push(make_pair(0,r));//距離、番号
	while(true){
		if(que.size()==0)break;
		//for(int i=0;i<V;i++)cout<<ans[i]<<" ";cout<<" ";
		P tmp=que.top();//ここで使われていないものの中で最も距離が小さい頂点vの番号を求める
		que.pop();
		//cout<<tmp.first<<" "<<tmp.second<<endl;
		int v=tmp.second;
		//if(ans[v]<tmp.first)cout<<ans[v]<<" "<<tmp.first<<" "<<tmp.second<<endl;;
		if(ans[v]<tmp.first)continue;
		for(int i=0;i<G[v].size();i++){
			if(ans[G[v][i].to]>ans[v]+G[v][i].cost){
			ans[G[v][i].to]=ans[v]+G[v][i].cost;
			que.push(P(ans[G[v][i].to],G[v][i].to));
			}
		}
	}
	for(int i=0;i<V;i++){
	if(ans[i]==INF)cout<<"INF"<<endl;
	else cout<<ans[i]<<endl;
	}
	return 0;
}