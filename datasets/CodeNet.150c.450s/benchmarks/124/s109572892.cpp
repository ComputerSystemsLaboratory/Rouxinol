#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i,a,b) for(int i = (a); i < (b); i++)

using namespace std;

typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;

const int INF=1<<29;
const double EPS=1e-9;

const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};
int V;
int cost[120][120];
int d[120];
bool visit[120];
void dijkstra(int s){
	d[s]=0;
	while(true){
		int v =-1;
		for(int u = 0;u < V;u++){
			if(!visit[u]&&(v==-1||d[u] < d[v])){
				v = u;
			}
		}
		if(v==-1)break;
		visit[v]=true;
		for(int u = 0;u < V;u++){
			d[u] =min(d[u],d[v]+cost[v][u]);
		}
	}
}

int main(){
	cin>>V;
	for(int i =0;i <120;i++){
		d[i]=INF;
		visit[i]=false;
		for(int j =0;j <120;j++){
			cost[i][j]=INF;

		}
	}
	for(int i =0;i < V;i++){
		int u,k;
		cin>>u>>k;
		for(int j =0;j <k;j++){
			int v,c;
			cin>>v>>c;
			cost[u][v]=c;
		}
	}
	dijkstra(0);
	for(int i =0;i <V;i++){
		cout <<i<<" "<<d[i]<<endl;
	}
	return 0;
}