#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cassert>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<utility>
#include<numeric>
#include<algorithm>
#include<bitset>
#include<complex>
#include<stack>

using namespace std;

typedef long long Int;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef vector<string> vstring;

template<class T> void chmin(T &t, T f) { if (t > f) t = f; }
template<class T> void chmax(T &t, T f) { if (t < f) t = f; }
int in() { int x; scanf("%d", &x); return x; }

#define rep(i,n) for(int i=0;i<(n);++i)
#define rep0(i,n) for(i=0;i<(n);++i)
#define repn(i,m,n) for(int i=(m);i<=(n);++i)
#define all(n) n.begin(),n.end()
#define mp make_pair
#define PUTLINE cout<<"LINE:"<<__LINE__<<endl;

const int INF = 2147483647;
const double EPS = 1e-10;
const double PI = acos(-1.0);

const int dx[]={1,-1,0,0,1,1,-1,-1,0};
const int dy[]={0,0,1,-1,1,-1,1,-1,0};

int cost[11][11];
struct Edge{int to,from,cost;};

vector<Edge> edge;
vector<int> town;

int main() {
	int n;
	while(n=in()){
		edge.clear();
		town.clear();
		rep(i,n){
			Edge e;
			cin>>e.from>>e.to>>e.cost;
			edge.push_back(e);
			swap(e.from,e.to);
			edge.push_back(e);
		}
		rep(i,edge.size()){
			int j;
			rep0(j,town.size())if(town[j]==edge[i].from)break;
			if(j==town.size())town.push_back(edge[i].from);
		}
		rep(j,edge.size()){
			rep(i,town.size()){
				if(edge[j].from==town[i]){
					edge[j].from=i;
					break;
				}
			}
			rep(i,town.size()){
				if(edge[j].to==town[i]){
					edge[j].to=i;
					break;
				}
			}
		}
		rep(i,town.size())rep(j,town.size())cost[i][j]=INF/3;
		rep(i,town.size())cost[i][i]=0;
		rep(i,edge.size())cost[edge[i].from][edge[i].to]=edge[i].cost;
		rep(k,town.size())rep(i,town.size())rep(j,town.size()){
			chmin(cost[i][j],cost[i][k]+cost[k][j]);
		}
		int res=INF/3,rest;
		rep(i,town.size()){
			int r=0;
			rep(j,town.size()){
				r+=cost[i][j];
			}
			if(res>r){
				res=r;
				rest=i;
			}
		}
		cout<<town[rest]<<" "<<res<<endl;
	}
	return 0;
}