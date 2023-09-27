#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <bitset>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair<int,int> pint;
typedef vector<int> vint;
typedef vector<pint> vpint;
#define mp make_pair
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,n) for (int i=(n)-1;i>=0;i--)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
#define REPS(i,f,n) for (int i=(f)-1;i>=(n);i--)
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, 1, -1, 0};

// ???????????????????????¨???
int main(void){
	int n;
	cin >> n;
	vector<ll> r(n);
	rep(i, n)
		scanf("%lld", &r[i]);

	ll max_num = r[n - 1];
	ll ans = -100000000000000;

	REPS(i, n, 1){
		ans = max(ans, max_num - r[i - 1]);
		if (max_num < r[i - 1])
			max_num = r[i - 1];
	}

	printf("%lld\n", ans);
	return 0;
}