#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <ctime>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <cstring>
#include <numeric>
#include <cassert>
using namespace std;
static const double EPS = 1e-10;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n-1;i>=0;i--)
#define all(a) a.begin(),a.end()
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define SS stringstream
#define DBG1(a) rep(_X,sz(a)){printf("%d ",a[_X]);}puts("");
#define DBG2(a) rep(_X,sz(a)){rep(_Y,sz(a[_X]))printf("%d ",a[_X][_Y]);puts("");}
#define bitcount(b) __builtin_popcount(b)
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)

#define delete(a,n) a.erase(remove(all(a),n),a.end())
template<typename T, typename S> vector<T>& operator<<(vector<T>& a, S b) { a.push_back(b); return a; }
template<typename T> void operator>>(vector<T>& a, int b) {while(b--)if(!a.empty())a.pop_back();}
bool isprime(int n){ if(n<2)return false;  for(int i=2;i*i<=n;i++)if(n%i==0)return false;  return true;} 
ll b_pow(ll x,ll n){return n ? b_pow(x*x,n/2)*(n%2?x:1) : 1ll;}
string itos(int n){stringstream ss;ss << n;return ss.str();}


int dp[1000001]={};
int dp2[1000001]={};
int main(){
	for(int i = 0 ; i < 1000001 ; i++) dp[i] = 1e9;
	for(int i = 0 ; i < 1000001 ; i++) dp2[i] = 1e9;
	dp[0] = dp2[0] = 0;
	
	for(int i = 1 ; i*(i+1)*(i+2) / 6 <= 1000000 ; i++){
		int s = i*(i+1)*(i+2)/6;
		for(int j = 0 ; j+s <= 1000000 ; j++){
			dp2[j+s] = min(dp2[j+s],dp2[j]+1);
		}
	}
	for(int i = 1 ; i*(i+1)*(i+2) / 6 <= 1000000 ; i++){
		int s = i*(i+1)*(i+2)/6;
		if( s%2 == 0 ) continue;
		for(int j = 0 ; j+s <= 1000000 ; j++){
			dp[j+s] = min(dp[j+s],dp[j]+1);
		}
	}
	int a,b;
	while(cin >> a && a){
		cout << dp2[a] << " " << dp[a] << endl;
	}
}