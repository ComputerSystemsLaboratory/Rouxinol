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
vector<int> d[120];
bool visit[120];
int cnt = 0;
int fin[120];
int st[120];
void dfs(int p){
	cnt++;
	st[p]=cnt;
	//cout <<"p = "<<p<<" cnt = "<<cnt<<endl;
	visit[p]=true;
	for(int i =0;i <d[p].size();i++){
		if(!visit[d[p][i]]){
			dfs(d[p][i]);
		}
	}
	cnt++;
	fin[p]=cnt;
	return ;
}
int main(){
	int n;
	cin>>n;
	memset(visit, false, sizeof(visit));
	for(int i =0;i < n;i++){
		int u,k;
		cin>>u>>k;
		for(int j =0;j < k;j++){
			int c;
			cin>>c;
			d[u].push_back(c);
		}
	}
	/*cout <<"隣接"<<endl;
	for(int i =1;i <= n;i++){
		for(int j =0;j < d[i].size();j++){
			cout <<" "<<d[i][j];
		}
		cout <<endl;
	}*/
	for(int i =1;i <=n;i++){
		if(!visit[i]){
			dfs(i);
		}
	}
	for(int i =1;i <=n;i++){
		cout <<i<<" "<<st[i]<<" "<<fin[i]<<endl;
	}
	return 0;
}