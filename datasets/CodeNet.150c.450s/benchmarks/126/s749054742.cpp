#define _USE_MATH_DEFINES
#include <iostream>
#include <memory>
#include <memory.h>
#include <fstream>
#include <cmath>
#include <math.h>
#include <numeric>
#include <vector>
#include <stack>
#include <string>
#include <queue>
#include <sstream>
#include <cstdlib>
#include <cassert>
#include <cstdio>
#include <map>
#include <iomanip>
#include <list>
#include <cctype>
#include <algorithm>
#include <complex>

#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, m, n) for(int i = m; i < n; i++)
using namespace std;

typedef complex<double> xy_t;
typedef pair<xy_t, xy_t> line;
typedef long long ll;
typedef pair<int, int> P;
typedef pair<double, double> Pd;
typedef pair<int, P> PP;
typedef pair<int, PP> PPP;
const int INF = 1 << 29;
const double EPS = 1E-10;

#define rep(i, n) for(int i = 0; i < n; i++)

ll dp[100][100];
bool bad[100][100];

int main(){
	int a, b, n;
	int x, y;
	while(cin >> a >> b && ( a || b)){
		memset(dp, 0, sizeof(dp));
		memset(bad, false, sizeof(bad));
		dp[1][1] = 1;
		cin >> n;
		rep(i, n){
			cin >> x >> y;
			bad[x][y] = true;
		}
		for(int i = 1; i <= a;i++){
			for(int j = 1; j <= b; j++){
				if(bad[i][j]) continue;
				dp[i+1][j] += dp[i][j];
				dp[i][j+1] += dp[i][j];
			}
		}
		cout << dp[a][b] << endl;
	}
	return 0;
}