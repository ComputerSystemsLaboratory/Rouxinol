#include <stdio.h>
#include <cctype>
#include <limits.h>
#include <math.h>
#include <complex>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <iostream>

#define VARIABLE(x) cerr << #x << "=" << x << endl
#define BINARY(x) static_cast<bitset<16> >(x)
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)
#define if_range(x, y, w, h) if (0<=(int)(x) && (int)(x)<(int)(w) && 0<=(int)(y) && (int)(y)<(int)(h))
#define ALL(a) (a).begin(),(a).end()
int dx[4]={0, -1, 1, 0}, dy[4]={-1, 0, 0, 1};
using namespace std;
typedef long long ll;
typedef pair<ll, int> P;
typedef vector<vector<int> > VVI;
const int INF = 1e9;
const double EPS = 1e-6;

const int MAX = 1e6;
vector<int> num;

int main()
{
	int dp[MAX+1], dp2[MAX+1];
	fill(dp, dp+MAX+1, INF);
	fill(dp2, dp2+MAX+1, INF);
	
	dp[0] = dp2[0] = 0;
	dp[1] = dp2[1] = 1;
	
	for (int i=1; ; i++) {
		int n = i*(i+1)*(i+2)/6;
		if (n > MAX) break;
		num.push_back(n);
	}
	
	for (int i=0; i<=MAX; i++) {
		for (int j=0; j<num.size(); j++) {
			int n = i + num[j];
			if (n <= MAX) {
				dp[n] = min(dp[n], dp[i]+1);
				if (num[j]%2==1)
					dp2[n] = min(dp2[n], dp2[i]+1);
			}
		}
	}
	
	int N;
	while (cin>>N, N) {
		cout << dp[N] << " " << dp2[N] << endl;
	}
}