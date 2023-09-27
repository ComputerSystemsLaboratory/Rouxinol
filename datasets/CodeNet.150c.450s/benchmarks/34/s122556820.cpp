#include <iostream>
#include <cstdio>
#include <cassert>
#include <cstring>
#include <vector>
#include <valarray>
#include <array>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <complex>
#include <random>

using namespace std;
using ll = long long;
using ull = unsigned long long;
constexpr int TEN(int n) {return (n==0)?1:10*TEN(n-1);}


int main() {
    ll fib[31];
    fib[1] = 1;
    fib[2] = 2;
    fib[3] = 4;
    for (int i = 4; i <= 30; i++) {
        fib[i] = fib[i-1]+fib[i-2]+fib[i-3];
    }
    while (true) {
        int t; cin >> t;
        if (!t) break;
        cout << ((fib[t]+9)/10+364)/365 << endl;
    }
    return 0;
}