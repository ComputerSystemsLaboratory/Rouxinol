#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
#include <functional>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
#include <cassert>
using namespace std;
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
const double EPS = 1e-9;
const double PI  = acos(-1.0);

ll dp[1000001],dpo[1000001];

const ll MAX=LONG_MAX/10;

ll pol(ll n){
	return n*(n+1)*(n+2)/6;
}

ll dfs(ll n,bool odd,int size){
	ll (&dpp)[1000001]=(odd?dpo:dp);
	if(dpp[n]!=MAX){
		return dpp[n];
	}
	if(n==0){
		return 0;
	}
	if(size>100){
		return MAX;
	}
	ll ret=MAX;
	for(ll j=1,i=pol(j);i<=n;j++,i=pol(j)){
		if(odd&&(!(i&1)))continue;
		ret=min(ret,dfs(n-i,odd,size+1)+1);
	}
	return dpp[n]=ret;
}

int main(){
	ll n;
	REP(i,1000001){
		dp[i]=MAX;
	}
	REP(i,1000001){
		dpo[i]=MAX;
	}
	REP(i,1000000){
		dp[i]=dfs(i,false,0);
		dpo[i]=dfs(i,true,0);
	}
	while(cin>>n,n){
		cout<<dfs(n,false,0);
		cout<<" "<<dfs(n,true,0)<<endl;
	}
	
}