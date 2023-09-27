#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <iterator>
#include <queue>
#include <stack>
#include <deque>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <string>
#include <cmath>
#include <complex>
#include <functional>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cassert>
#include <cstdlib>
#include <cctype>

#define REP(i,m,n) for(int i=m;i<(int)n;i++)
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rrep(i,n) for(int i = 1; i <= n; i++)
#define drep(i,n) for(int i = n; i >= 0; i--)
#define rp(i,c) rep(i,(int)c.size())
#define fr(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define mp make_pair
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define rall(u) (u).rbegin(),(u).rend()
#define dbg(x) cerr<<#x<<" = "<<(x)<<endl
#define v_delete(a,b) (a).erase(remove((a).begin(), (a).end(), b), (a).end())
#define v_unique(a) (a).erase(unique((a).begin(), (a).end()), (a).end())
#define VV(T) vector<vector< T > >
#define init(a,b) memset((a), (b), sizeof((a)))
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
const int inf=1<<28;
const double INF=1e10,EPS=1e-9;


template<class T>int SIZE(T a){return a.size();}
template<class T>string IntToString(T num){string res;stringstream ss;ss<<num;return ss.str();}
template<class T>T StringToInt(string str){T res=0;for(int i=0;i<SIZE(str);i++)res=(res*10+str[i]-'0');return res;}
template<class T>T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template<class T>T lcm(T a,T b){return a/gcd(a,b)*b;}

template <class T> void input(T& a, int n) { for (int i = 0; i < n; ++i) cin >> a[i]; }
template <class T> void input(T* a, int n) { for (int i = 0; i < n; ++i) cin >> a[i]; }

int chmax(int& a,int b){
	if(b > a){
		a=b;
	}
	return a;
}
int chmin(int& a,int b){
	if(b < a){
		a=b;
	}
	return a;
}

int dp[1010][1010];

int main(){
	string s,t;
	cin >> s >> t;
	int ss=s.size();int ts=t.size();
	rep(i,ss+1){
		rep(j,ts+1){
			dp[i][j]=inf;
		}
	}
	REP(i,0,ss+1)dp[i][0]=i;
	REP(i,0,ts+1)dp[0][i]=i;
	for(int i=1;i<=ss;i++){
		for(int j=1;j<=ts;j++){
			if(s[i-1]==t[j-1]){
				dp[i][j]=min(dp[i][j],dp[i-1][j-1]);
			}else{
				dp[i][j]=min(dp[i-1][j-1]+1,min(dp[i-1][j]+1,dp[i][j-1]+1));
			}
		}
	}
	cout << dp[ss][ts] << endl;
	return 0;
}