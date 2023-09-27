#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i,a,b) for(int i = (a); i < (b); i++)

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
const int MAX_N =100010;
ll a[MAX_N]={0};
ll dp[MAX_N];
int main(){
	int n;
	cin>>n;
	fill(dp, dp+n, 10e8);
	for(int i =0;i < n;i++){
		cin>>a[i];
	}
	for(int i =0;i < n;i++){
		int pos = lower_bound(dp, dp+n, a[i])-dp;
		dp[pos] = a[i];
	}
	cout <<lower_bound(dp,dp+n,10e8)-dp<<endl;
	return 0;
}