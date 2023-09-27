#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <queue>
#include <set>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <bitset>
#include <climits>
#define REP(i,n) for (int i=0;i<(n);i++)
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define RFOR(i,a,b) for (int i=(a)-1;i>=(b);i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
const int INF = 1e9;
const int MOD = 1e9 + 7;

using namespace std;

struct Edge{
	int dist,cost;
	Edge(){}
	Edge(int dist,int cost):dist(dist),cost(cost){}
};
	bool operator<(const Edge& e1, const Edge& e2){
		return e1.cost > e2.cost;
	}


int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
	int n;cin>>n;
	vector<vector<Edge> > edge(n,vector<Edge>());
	REP(i,n){
		REP(j,n){
			int c;
			cin>>c;
			if(c == -1)continue;
			edge[i].push_back(Edge(j,c));
		}
	}
	priority_queue<Edge,vector<Edge>,less<Edge> > que;
	que.push(Edge(0,0));//from 0
	int ct = 0;
	int ans = 0;
	vector<bool> primed(n,false);
	while(ct < n){
		Edge e = que.top();
		que.pop();
		if(primed[e.dist])continue;
		primed[e.dist] = true;
		ct++;
		ans += e.cost;
		for(auto e2 : edge[e.dist]){
			que.push(e2);
		}
	}
	cout << ans << endl;
  return 0;
}