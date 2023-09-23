#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#include <utility>
#include <cstring>
#include <string>
#include <sstream>

#define rep(i, n) for(int i = 0; i < n; i ++)
#define ALL(T) T.begin(), T.end()

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

int main(void){
    ll dp[21][100] = { 0 };
    int n, a; cin >> n;

    rep(i, n - 1){
        cin >> a;
        if(!i) dp[a][i] = 1;
        else rep(j, 21) dp[j][i] += (0 <= j - a ? dp[j - a][i - 1]:0) + (j + a <= 20 ? dp[j + a][i - 1]:0);
    }

    cin >> a;
    cout << dp[a][n - 2] << endl;

    return 0;
}