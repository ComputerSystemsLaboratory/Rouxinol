// g++ -std=c++11 temp.cpp
#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define EACH(itr,v) for(auto itr:v)
#define pb(s) push_back(s)
#define mp(a,b) make_pair(a,b)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<P, int> PPI;

#define INF INT_MAX/3

#define MAX_N 1000

ll a,b;

ll gcd(ll x, ll y){
	if(y==0) return x;
	return gcd(y, x%y);
}

ll lcm(ll x, ll y){
	return (ll)(x*y/gcd(x,y));
}

int main(){
	while(scanf("%lld %lld", &a, &b)!=EOF){
		cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
	}
	return 0;
}