#define _USE_MATH_DEFIMES
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <climits>
#include <clocale>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

const int MOD = 1'000'000'007;
const int INF = 1'000'000'000; //1e9
const int NIL = -1;
const long long LINF = 1'000'000'000'000'000'000; // 1e18
const long double EPS = 1E-10;

template<class T, class S> inline bool chmax(T &a, const S &b){
    if(a < b){
        a = b; return true;
    }
    return false;
}
template<class T, class S> inline bool chmin(T &a, const S &b){
    if(b < a){
        a = b; return true;
    }
    return false;
}








int main(){
    int n; std::cin >> n;
    std::vector<int> r(n), c(n);
    for(int i(0); i < n; ++i) std::cin >> r[i] >> c[i];
    //dp[i][j] := iからjまでの計算に必要な回数
    std::vector<std::vector<int>> dp(n, std::vector<int>(n, 0));
    for(int d(1); d < n; ++d){
        for(int i(0), i_len(n - d); i < i_len; ++i){
            int j(i + d);
            dp[i][j] = INF;
            for(int k(i); k < j; ++k){
                chmin(dp[i][j], dp[i][k] + dp[k+1][j] + r[i]*c[k]*c[j]);
            }
        }
    }
    std::cout << dp[0][n-1] << std::endl;
    return 0;
}

