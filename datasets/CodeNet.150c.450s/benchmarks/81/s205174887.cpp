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
int dp[11][11]={inf};

int main(){
	int n;
	while(cin >> n,n){
		int mc=0;
		rep(i,11){
			rep(j,11){
				dp[i][j]=inf;
			}
		}
		rep(i,n){
			int a,b,c;
			cin >> a >> b >> c;
			chmax(mc,max(a,b));
			dp[a][b]=c;
			dp[b][a]=c;
		}
		mc++;
		rep(i,mc){
			rep(j,mc){
				rep(k,mc){
					dp[j][k]=min(dp[j][k],dp[i][j]+dp[i][k]);
				}
			}
		}
		int id;int ans=inf;
		rep(i,mc){
			int tmp=0;
			rep(j,mc){
				if(i==j)continue;
				tmp+=dp[i][j];
			}
			if(ans > tmp){
				id=i;
				ans=tmp;
			}
		}
		printf("%d %d\n",id,ans);
	}
	return 0;
}