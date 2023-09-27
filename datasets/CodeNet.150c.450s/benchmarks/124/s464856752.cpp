#include<iostream>
#include<iomanip>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
#include<cstring>
#include<sstream>
using namespace std;
 
#define P(p) cout<<(p)<<endl
#define rep(i,m,n) for(int i = (m); i < (int)(n); i++)
#define rrep(i,m,n) for(int i=(int)(m); i>=(int)(n); i--)
#define vsort(v) sort(v.begin(), v.end());
#define rvsort(v) sort(v.begin(), v.end(),greater<int>());
#define YES cout<<"YES"<< endl
#define NO cout<<"NO"<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl  
#define yes cout<<"yes"<<endl
#define no cout<<"no"<<endl
#define ret return
#define lb(v,n) lower_bound(v.begin(),v.end(),n)
#define ub(v,n) upper_bound(v.begin(),v.end(),n)
#define mae(v) max_element(v.begin(),v.end())
#define mie(v) min_element(v.begin(),v.end())
#define INF 0x7FFFFFFF
////////////////////////////////////////////////////////////
const int MAX_V = 100;
typedef struct edge_{int to,cost;}edge;
typedef pair<int,int> P; 	//firstは最短経路,secondは頂点番号
int V; 										//頂点数
vector<vector<edge>> G(MAX_V);
int dp[MAX_V];

void dijkstra( int s ){
	//最短経路の値の小さいものから取り出せる
	priority_queue<P,vector<P>,greater<P>> que;
	for(int i = 0 ; i < V ; i++ ) dp[i] = INF;
	dp[s] = 0;
	que.push(pair<int,int>(0,s));
	while(!que.empty()){
		P p = que.top();
		que.pop();
		int v = p.second;
		if( dp[v] > p.first ) continue;
		for(int i = 0 ; i < G[v].size() ; i++ ){
			edge e = G[v][i];
			//cout << "here:" << i << " to:" << e.to << " cost:" << e.cost << endl;
			if( dp[e.to] > dp[v] + e.cost ){
				dp[e.to] = dp[v] + e.cost;
				que.push(pair<int,int>(dp[e.to],e.to));
			}
		}
	}
	return;
}
int main(){
	cin >> V;
		
	rep(i,0,V){
		int u,k;
		cin >> u >> k;
		rep(j,0,k){
			int v,c;
			cin >> v >> c;
			G[i].push_back(edge{v,c});
		}
	}
	
	dijkstra(0);

	rep(i,0,V){
		cout << i << " " << dp[i];
		if( i < V - 1 )
			cout << endl;
	}
	cout << endl;

	ret 0;
}
