#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>
#include <complex>
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define vi vector<int>
#define All(X) (X).begin(),(X).end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back
#define pii pair<int,int>
#define mp make_pair
#define shosu(X) fixed << setprecision(X)
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

#define MAXINT 1000001
vi d,d2;
int main(){
	int t = 1;
	while(1){
		int tmp = t*(t+1)*(t+2)/6;
		if(tmp>MAXINT) break;
		d.pb(tmp);
		if(tmp%2==1) d2.pb(tmp);
		t++;
	}

	int dp[MAXINT];
	int dp2[MAXINT];
	REP(i,MAXINT){
		dp[i] = 500; dp2[i] = 500;
	}
	REP(i,d.size()) dp[d[i]] = 1;
	REP(i,d2.size()) dp2[d2[i]] = 1;
	REP(i,MAXINT){
		REP(k,d.size()){
			if(i+d[k]>=MAXINT) continue;
			dp[i+d[k]] = min(dp[i+d[k]],dp[i]+1);
		}
	}
	REP(i,MAXINT){
		REP(k,d2.size()){
			if(i+d2[k]>=MAXINT) break;
			dp2[i+d2[k]] = min(dp2[i+d2[k]],dp2[i]+1);
		}
	}
	while(1){
		int n;
		cin >> n;
		if(n==0) break;
		cout << dp[n] << " " << dp2[n] << endl;
	}

}