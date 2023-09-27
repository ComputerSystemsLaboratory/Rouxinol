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
const int MAX_N =200;
int n;
int cost[MAX_N][MAX_N];
bool visit[MAX_N];
int mincost[MAX_N]={INF};
int prime(){
	//memset(mincost, INF, sizeof(mincost));
	memset(visit, false, sizeof(visit));
	int res = 0;
	mincost[0]=0;
	/*rep(i, n){
		cout <<mincost[i];
		cout <<endl;
	}
	cout <<endl;*/
	while(1){
		int v = -1;
		for(int u =0; u <n;u++){
			if(!visit[u]&&(v==-1||mincost[u] < mincost[v])){
				v =u;
			}
		}
		if(v==-1)break;
		//cout <<"v = "<<v<<endl;
		visit[v]=true;
		res +=mincost[v];
		//cout <<res<<endl;
		for(int u =0;u <n ;u++){
			mincost[u]=min(mincost[u],cost[v][u]);
		}
	}
	//cout <<res<<endl;
	return res;
}

int main(){
	cin>>n;
	for(int i =0;i < n;i++){
		mincost[i]=INF;
		for(int j =0;j < n;j++){
			int x;
			cin>>x;
			if(x==-1){
				cost[i][j]=INF;
			}else{
				cost[i][j]=x;
			}
		}
	}
	/*rep(i, n){
		rep(j, n){
			printf("%10d",cost[i][j]);
		}
		cout <<endl;
	}*/

	cout <<prime()<<endl;
	return 0;
}