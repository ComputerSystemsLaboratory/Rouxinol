#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <numeric>
#include <cstring>
#include <cmath>
#include <set>
#include <queue>
#include <stack>

const int MOD = 1e9 + 7;
const int iINF = 1000000000;
const long long int llINF = 1000000000000000000;
#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;
using ll = long long int;
using P = pair<int, int>;
using edge = struct{int to; int cost;};

int main()
{
    //dp[i]:=長さがi+1であるような増加部分列における最終要素の最小値．
    int n, dp[1000010]; 
    cin >> n;
    vector<int> a(n);
    fill(dp, dp + n, iINF);
    rep(i, n) cin >> a[i];
    for(int i = 0; i < n; i++)
        *lower_bound(dp, dp + n, a[i]) = a[i];
    
    cout << lower_bound(dp, dp + n, iINF) - dp << endl;

    return 0;
}
