#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <queue>
#include <stack>
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



int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<vector<int> > edge(n,vector<int>());
	REP(i,n){
		int v;cin>>v;v--;int t;cin>>t;
		while(t--){
			int u;cin>>u;u--;
			edge[v].push_back(u);
		}
	}
	queue<pair<int,int> > que;
	int mindist[103];
	fill_n(mindist,n,INF);
	mindist[0] = 0;
	que.push(make_pair(0,0));
	while(!que.empty()){
		pair<int,int> v = que.front();
		que.pop();
		v.second++;
		REP(i,edge[v.first].size()){
			if(v.second < mindist[edge[v.first][i]]){
				mindist[edge[v.first][i]] = v.second;
				que.push(make_pair(edge[v.first][i],v.second));
			}
		}
	}
	REP(i,n){
		cout << i+1 << ' ';
		if(mindist[i]==INF)cout << -1 << endl;
		else	cout << mindist[i] << endl;
	}
  return 0;
}