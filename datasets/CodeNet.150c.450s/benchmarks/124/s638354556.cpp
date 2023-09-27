#include <iostream>
#include<cstdlib>
#include<queue>
#include<set>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
#include<map>
#include<cstdio>
#include<fstream>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)

#define mp make_pair
#define P pair<int,int>
#define ll __int64
vector<P>G[1000];
int n,u,k;
const int INF=100000000;
int ans[1000];

int main(){
	int from,cost;
	cin>>n;

	rep(i,n){
		cin>>u>>k;
		rep(i,k){
				cin>>from>>cost;
				G[u].push_back(mp(from,cost));
		}
	}
	rep(i,n)ans[i]=INF;
	//ans[0]=0;
	priority_queue<P,vector<P>,greater<P> >que;//firstスタートからの重みsecond頂点
	que.push(mp(0,0));
	
	while(!que.empty()){
		P now=que.top();
		que.pop();
		if(ans[now.second]!=INF)continue;
		int index=now.second;
		ans[index]=now.first;
		//cout<<now.first<<endl;
		for(int i=0;i<G[now.second].size();i++)que.push(mp(now.first+G[index][i].second,G[index][i].first));//次への経路長、頂点番号
	}
	for(int i=0;i<n;i++)cout<<i<<" "<<ans[i]<<endl;
	return 0;
}
