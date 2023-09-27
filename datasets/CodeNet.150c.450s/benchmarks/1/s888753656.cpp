#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <cstring>
#include <sstream>
#include <iomanip>//小数精度 	cout << fixed << setprecision(5) << tmp << endl;
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define All(X)      (X).begin(),(X).end()

ll int INF = 10000000023;

int main(){
	int n;
	int a[100000];
	ll int dp[100010];
	cin >> n;
	REP(i,n) cin >> a[i];
	REP(i, n+1) dp[i] = INF;


    REP(i,n){
    	int j = 0;
    	ll int* p = lower_bound(dp, dp + n, a[i]);
   		*p = a[i];
    }

  ll int* p = lower_bound(dp, dp + n, INF);
  cout << p - dp << endl;
  return 0;
}