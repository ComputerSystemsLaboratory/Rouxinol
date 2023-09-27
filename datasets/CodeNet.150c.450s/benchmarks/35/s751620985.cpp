#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cctype>
#include<climits>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<memory>
#include<functional>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999
using namespace std;

typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
typedef long long ll;

int dy[] = { 0, 0, 1, -1, 0 };
int dx[] = { 1, -1, 0, 0, 0 };

int a[5000];
int dp[5000];

int main(){
	ios::sync_with_stdio(false);

	int n;
	int smax;

	while(1){
		scanf("%d", &n);
		if(n==0) break;

		REP(i, n)	scanf("%d", &a[i]);

		dp[0]=a[0];
		smax =a[0];

		FOR(i, 1, n){
			dp[i]=max(dp[i-1]+a[i], a[i]);
		}

		REP(i, n){
				smax=max(dp[i], smax);
		}

		printf("%d\n", smax);
	}
}