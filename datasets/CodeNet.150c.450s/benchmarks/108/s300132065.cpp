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
int n;
vector<int> d[120];
int dist[120];
bool visit[120];
void bfs(){
	queue<pii> que;
	que.push(mp(1,0));
	while(!que.empty()){
		pii p =que.front();
		que.pop();
		int pos =p.first;
		int cnt =p.second;
		if(visit[pos])continue;
		//cout <<pos<<" "<<cnt<<endl;
		visit[pos]=true;
		dist[pos]=cnt;
		for(int i =0;i <d[pos].size();i++){
			if(!visit[d[pos][i]]){
				que.push(mp(d[pos][i],cnt+1));
			}
		}
	}
}

int main(){
	cin>>n;
	memset(dist, -1, sizeof(dist));
	memset(visit, false, sizeof(false));
	for(int i =0;i < n;i++){
		int u,k;
		cin>>u>>k;
		for(int j = 0;j <k;j++){
			int v;
			cin>>v;
			d[u].push_back(v);
		}
	}
	bfs();
	for(int i =1;i <=n;i++){
		cout <<i<<" "<<dist[i]<<endl;
	}
	return 0;
}