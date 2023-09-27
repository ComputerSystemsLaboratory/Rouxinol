#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <functional>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
 
using namespace std;
 
#define rep(i,n) for(int i=0; i<(n); i++)
#define repc(i,s,e) for(int i=(s); i<(e); i++)
#define pb(n) push_back((n))
#define mp(n,m) make_pair((n),(m))
#define all(r) r.begin(),r.end()
#define fi first
#define se second
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vl;
typedef vector<vl> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

typedef pair<int, pii> pip;
 
 
 
const int INF = 1000000;
const double EPS = 1e-8;
const int mod = 1e9 + 7;
 
int dp[1000010];
int dp2[1000010];

int main(){
	int a = 1, b;
	vi v;
	vi u;
	while((b = a*(a+1)*(a+2)/6)<1e6){
		v.pb(b);
		if(b%2 == 1){
			u.pb(b);
		}
		a++;
	}
	//cout<<v.size()<<endl;
	for(int i = 0; i < 1000010; i++){
		dp[i] = INF;
		dp2[i] = INF;
	}
	dp[0] = 0;
	dp2[0] = 0;
	for(int i = 0; i < v.size(); i++){
		for(int j = v[i]; j < 1000010; j++){
			dp[j] = min(dp[j], dp[j-v[i]]+1);
			if(i < u.size() && j >= u[i]){
				dp2[j] = min(dp2[j], dp2[j-u[i]]+1);
			}
		}
	}
	//cout<<"OK"<<endl;
	int n;
	while(cin>>n && n > 0){
		cout<<dp[n]<<" "<<dp2[n]<<endl;
	}
}