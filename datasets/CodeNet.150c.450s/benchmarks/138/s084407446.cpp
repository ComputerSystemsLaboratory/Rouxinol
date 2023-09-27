#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <iomanip>
#include <fstream>
#include <stdint.h>
#include <cmath>
#include <algorithm>
#include <utility>
#include <numeric>
using namespace std;

constexpr int INF       = 1000000000;/* 1e+9a */
constexpr int MODULO    = 1000000007;

constexpr int evx[4] = { 1, 0, -1, 0 };
constexpr int evy[4] = { 0, 1, 0, -1 };

//----------------------------------
//----------------------------------

int gcd(int a, int b)
{
        return (b == 0 ? a : gcd(b, a%b));
}

signed main()
{
    ios::sync_with_stdio(false);
        int a, b;
        cin >> a >> b;
        cout << gcd(a,b) << '\n';
}