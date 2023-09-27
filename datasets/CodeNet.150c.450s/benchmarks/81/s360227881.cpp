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
#define mod 1000000007
typedef long long ll;
////////////////////////////////////////////////////////////
const int MAX_V = 10 , MAX_M = 45;
vector<vector<ll>> dp(MAX_V,vector<ll>(MAX_V,INF));
//d[[i][j]:i,j間の最短経路
int E,V=0; //頂点数

void wf(){
	rep(k,0,V)
		rep(i,0,V)
			rep(j,0,V)
				dp[i][j] = min(dp[i][j] , dp[i][k] + dp[k][j] );
}

//入力
void make(){
	rep(i,0,E){
		int u,v,c;
		cin>>u>>v>>c;
		dp[u][v] = c;
		dp[v][u] = c;
		V = max(V,u+1);
		V = max(V,v+1);
	}
}

int main(){
	while( cin >> E ){
		if( !E )
			break;

		rep(i,0,MAX_V){
			rep(j,0,MAX_V){
				if( i == j ) dp[i][j] = 0;
				else dp[i][j] = INF;
			}
		}

		V = 0;
		make();
		wf();

		ll ans = INF;
		int idx = 0;
		rep(i,0,V){
			ll sum = 0;
			rep(j,0,V){
				if( dp[i][j] != INF)
					sum += dp[i][j];
			}
			if( ans > sum ){
				ans = sum;
				idx = i;
			}
		}
		cout << idx << " " << ans << endl;
	}
	ret 0;
}
