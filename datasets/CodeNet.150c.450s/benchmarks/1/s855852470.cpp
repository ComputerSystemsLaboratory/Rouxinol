#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <string>
#include <bitset>
using namespace std;
#define FOR(I,F,N) for(int I = F; I < (int)(N); I++)
#define rep(i, n) FOR(i, 0, n)
#define FIN(V) cout<<V<<endl
#define pb push_back
#define INF (1 << 30)
typedef pair<int, int> P;
typedef long long ll;
typedef priority_queue<int> pq;
int StrToInt(string);
string IntToStr(int);
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main(void){
	int n;
	int dp[100001];
	fill_n(dp, 100001, INF);
	int a[100001];
	cin >> n;
	rep(i, n)
		cin >> a[i];

	rep(i,n){
		*lower_bound(dp, dp + n, a[i]) = a[i];
	}
	cout << lower_bound(dp, dp + n, INF)-dp << endl;

	return 0;
}