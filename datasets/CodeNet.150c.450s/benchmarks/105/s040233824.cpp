// #include "pch.h"
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <bitset>
#include <climits>
#include <string>
#include <cmath>
#include <bitset>
#include <complex>
#include <functional>
#include <ctime>
#include <cassert>
#include <fstream>
#include <unordered_map>
#include <stack>
#include <random>

typedef long long ll;
typedef std::pair<int, int> Pii;
typedef std::pair<long long, long long> Pll;
typedef std::pair<double, double> Pdd;

#define rip(i, n, s) for (int i = (s);i < (int)( n ); i++)
#define all(a) a.begin(), a.end()
#define MM << " " <<

template<typename T>
using MaxHeap = std::priority_queue<T>;
template<typename T>
using MinHeap = std::priority_queue<T, std::vector<T>, std::greater<T>>;

template<typename T>
inline bool chmax(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
template<typename T>
inline bool chmin(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template<typename T>
void vdeb(std::vector<T> &da) {
    for (int i = 0;i < da.size();i++) {
        if (i == da.size() - 1) std::cout << da[i];
        else std::cout << da[i] << ' ';
    }
    std::cout << '\n';
}
template<typename T>
void vdeb(std::vector<std::vector<T>> &da) {
    for (int i = 0;i < da.size();i++) {
        std::cout << i << ' ';
        vdeb(da[i]);
    }
    std::cout << '\n';
}

using namespace std;

int solve() {
    int n; cin >> n;
    vector<ll> da(n);
    rip(i,n,0) cin >> da[i];
    string s; cin >> s;
    vector<ll> bases(0);
    for(int i = n-1;i>-1;--i) {
        ll now = da[i];
        rip(j, bases.size(), 0) chmin(now, now^bases[j]);
        if(s[i] == '0' && now > 0) bases.push_back(now);
        else if(s[i] == '1' && now > 0) return true;
    }
    return false;
}

int main() {
    int t; cin >> t;
    vector<bool> ans(t);
    rip(i,t,0) ans[i] = solve();
    rip(i,t,0) cout << ans[i] << '\n';
}