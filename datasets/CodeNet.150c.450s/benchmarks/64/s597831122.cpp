#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
typedef long long lli;
typedef vector<lli> vll;
typedef vector<bool> vbl;
typedef vector<vector<lli> > mat;
typedef vector<vector<bool> > matb;
typedef vector<string> vst;
typedef pair<lli,lli> pll;
typedef pair<double,double> pdd;

lli n;
vll a;
lli q;

mat dp;

int main(){
    cin >> n;
    a = vll(n);
    for(lli i = 0;i < n;i++) cin >> a[i];
    dp = mat(n+1,vll(2000*20+1));
    dp[0][0] = 1;
    for(lli i = 0;i < n;i++){
        for(lli j = 0;j < dp[i].size()-a[i];j++){
            dp[i+1][j] |= dp[i][j];
            dp[i+1][j+a[i]] |= dp[i][j];
        }
    }
    cin >> q;
    for(lli i = 0;i < q;i++){
        lli m;
        cin >> m;
        if(dp.back()[m]) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}