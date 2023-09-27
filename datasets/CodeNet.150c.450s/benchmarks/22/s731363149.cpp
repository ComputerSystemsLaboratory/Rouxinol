#include<iostream>
#include<vector>

using namespace std;

#define int long long
const long long INF = (long long)1e18;

/*
ベルマン–フォード法
	単一始点の最短経路および負の閉路が存在するかをを時間計算量O(VE)で求める(V:頂点の数,E:辺の数)
	負の辺が存在している場合でも動作する
引数: V->頂点の数(頂点の番号はV以下), S->始点, edge->辺(firstは頂点の対,secondは重み), dis->始点からの最短距離を入れるためのvector
返り値: true->負の閉路が存在する, false->負の閉路が存在しない
*/

bool Bellman_Ford(int V, int S, vector<pair<pair<int,int>,int>> &edge, vector<int> &dis){
	dis.clear();
	dis.resize(V,INF);
	dis[S] = 0;
	
	for(int i = 0; i < V; i++){
		bool flag = false;
		for(int j = 0; j < edge.size(); j++){
			if(dis[edge[j].first.first] != INF && dis[edge[j].first.second] > dis[edge[j].first.first] + edge[j].second){
				dis[edge[j].first.second] = dis[edge[j].first.first] + edge[j].second;
				flag = true;
				if(i == V-1) return true;
			}
		}
		if(!flag) break;
	}
	
	return false;
}

signed main(){
	int V, E, s;
	vector<pair<pair<int,int>,int>> edge;
	vector<int> dis;
	
	cin>>V>>E>>s;
	
	for(int i = 0; i < E; i++){
		int s, t, d;
		
		cin>>s>>t>>d;
		
		edge.push_back({{s, t}, d});
	}
	
	if(!Bellman_Ford(V, s, edge, dis)) {
		
		for(int d : dis){
			if(d < INF)cout<<d<<endl;
			else cout<<"INF"<<endl;
		}
		
	} else {
		cout<<"NEGATIVE CYCLE"<<endl;
	}
	return 0;
}
