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
    int D; std::cin >> D;
    std::vector<int> c(26), t(D+1);
    std::vector<std::set<int>> days(26);
    for(int i(0); i < 26; ++i){
        days[i].emplace(0);
    }
    std::vector<std::vector<int>> s(D+1, std::vector<int>(26));
    for(int i(0); i < 26; ++i) std::cin >> c[i];
    for(int i(1); i <= D; ++i){
        for(int j(0); j < 26; ++j) std::cin >> s[i][j];
    }

    for(int i(1); i <= D; ++i){
        std::cin >> t[i];
        --t[i];
        days[t[i]].emplace(i);
    }
    long long v(0);
    
    for(int i(1); i <= D; ++i){
        long long dcr(0);
        for(int j(0); j < 26; ++j){
            auto itr(std::upper_bound(std::begin(days[j]), std::end(days[j]), i));
            dcr += c[j] * (i - *(--itr));
        }
        v += s[i][t[i]] - dcr;
        std::cout << v << "\n";
    }
    return 0;
}
