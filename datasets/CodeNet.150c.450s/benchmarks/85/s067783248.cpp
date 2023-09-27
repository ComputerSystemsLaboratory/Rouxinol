#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <numeric>
#include <array>
#include <cmath>
#include <memory>
using namespace std;
//変数デバッグ
#define DEB(variable) cout << #variable << '=' << variable << endl

//for簡易表記(引数ミス防止)
#define FOR(LoopVariable,numberOFbegin,numberOFend) for (long long int LoopVariable = (numberOFbegin); (LoopVariable) < (numberOFend); (LoopVariable)++)
#define DEFOR(LoopVariable,numberOFbegin,numberOFend) for (long long int LoopVariable = (numberOFbegin)-1; (LoopVariable) >= (numberOFend); (LoopVariable)--)
#define REP(LoopVariable,numberOFend) for(long long int LoopVariable = 0;(LoopVariable)<(numberOFend);LoopVariable++)

using llint = long long int;

constexpr long long int linf = numeric_limits<long long int>::max()-5;
constexpr long long int inf= numeric_limits<int>::max()-5;
constexpr long long int mod = 1000000007;
llint n;
vector<vector<llint>> dp;

vector<pair<llint, llint>> v;
llint recur(llint l,llint r){
    if(r-l==1){
        return dp[l][r]=0;
    }
    if(r-l==2){
        return dp[l][r] = v[l].first * v[l].second * v[r-1].second;
    }
    if(dp[l][r]!=-1){
        return dp[l][r];
    }
    llint result = linf;
    FOR(i,l+1,r){
        result = min(result, recur(l,i) +  recur(i,r) + v[l].first * v[i].first * v[r-1].second);
    }
    return dp[l][r]=result;
}
int main(){

    cin >> n;
    v.resize(n);
    dp.resize(n, vector<llint>(n + 1, -1));
    REP(i,n){
        cin >> v[i].first >> v[i].second;
    }
    cout << recur(0, n) << endl;
    return 0;
}

