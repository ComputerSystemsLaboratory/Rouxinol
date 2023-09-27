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
string x;
string y;

mat dp;

int main(){
    cin >> n;
    for(lli i = 0;i < n;i++){
        cin >> x >> y;
        dp = mat(x.size()+2,vll(y.size()+2));
        for(lli i = 0;i <= x.size();i++){
            for(lli j = 0;j <= y.size();j++){
                dp[i+1][j] = max(dp[i+1][j],dp[i][j]);
                dp[i][j+1] = max(dp[i][j+1],dp[i][j]);
                if(x[i] == y[j]) dp[i+1][j+1] = max(dp[i+1][j+1],dp[i][j]+1);
            }
        }
        cout << dp[x.size()][y.size()] << endl;
    }
    return 0;
}