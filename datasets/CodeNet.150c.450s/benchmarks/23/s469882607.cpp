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

vll dp;

lli fib(lli x){
    if(dp[x]) return dp[x];
    if(x == 0) return dp[x] = 1;
    if(x == 1) return dp[x] = 1;
    return dp[x] = fib(x-1) + fib(x-2);
}

lli n;

int main(){
    cin >> n;
    dp = vll(n+1);
    cout << fib(n) << endl;
    return 0;
}