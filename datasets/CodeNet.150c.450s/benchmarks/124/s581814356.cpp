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
#define mod 1000000007
typedef long long ll;
////////////////////////////////////////////////////////////

typedef struct edge_{
	int to,cost;
}edge;

class graph{ 
	typedef long cost_type;
	typedef int edge_type;
	typedef pair<cost_type,edge_type> P; 	//first:最短経路コスト second:頂点番号
	
	
	private:
		vector<vector<edge> > gra; 	//グラフ本体
		priority_queue<P,vector<P>,greater<P> > que; 	//最短経路の値の小さいものから取り出せる
		edge_type V; 	//頂点の個数
	  vector<cost_type> dp; 	//開始地点からの最小コストを格納する配列
	
	public:
		void init(int num){
			V = num;
			dp.assign(V,0x7FFFFFFF);
			gra.assign(V,vector<edge>());
		}


		void setCost(edge_type from , edge_type to , edge_type cost){
			edge e = {to , cost};
			edge e2 = {from , cost};
			gra[from].push_back( e );
			gra[to].push_back(e2);
		}	

		
		void setDirectCost(edge_type from , edge_type to , edge_type cost){
			edge e = {to , cost};
			gra[from].push_back( e );
		}	


		void dijkstra(edge_type s){
			dp[s] = 0;
			que.push(pair<cost_type,edge_type>(0,s)); 

			while(!que.empty()){
				P p = que.top();
				que.pop();
				edge_type v = p.second;
				if( dp[v] > p.first ) continue;
				for(edge_type i = 0 ; i < gra[v].size() ; i++ ){
					edge e = gra[v][i];
					if( dp[e.to] > dp[v] + e.cost ){
						dp[e.to] = dp[v] + e.cost;
						que.push(pair<cost_type,edge_type>(dp[e.to],e.to));
					}
				}
			}
		}

		cost_type getCost(edge_type to){
			return dp[to];
		} 

};

int main(){
	graph g;
	int n;
	cin >> n;
	g.init(n);
	rep(i,0,n){
		int from , k;
		cin >> from >> k;
		rep(i,0,k){
			int to;
			long cost;
			cin >> to >> cost;
			g.setDirectCost(from,to,cost);
		}

	}

	g.dijkstra(0);

	rep(i,0,n)
		cout << i << " " << g.getCost(i) << endl;

	ret 0;
}
