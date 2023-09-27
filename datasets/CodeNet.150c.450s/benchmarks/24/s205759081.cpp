#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)

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
int m;
int D[10001];
int P[10001];
priority_queue<pii> que;
int ans;//襲われる期待値
int main(){
	while(cin>>n>>m,n||m){
		ans = 0;
		for(int i =0;i< n;i++){
			cin>>D[i];
			cin>>P[i];
			que.push(pii(P[i],D[i]));
		}
		int d;//移動距離
		int p;//期待値
		while(!que.empty()){
			d = que.top().second;
			p = que.top().first;
			que.pop();
			if(m-d>=0){
				m -=d;
				continue;
			}else if(m -d<0){
				d -=m;
				ans +=d*p;
				m = 0;
			}
		}
		cout <<ans<<endl;
	}
	return 0;
}