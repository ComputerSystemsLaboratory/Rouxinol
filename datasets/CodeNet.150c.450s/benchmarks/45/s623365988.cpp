/*
 * Problem Description: Elementary Number Theory - Power
 * Category:
 * Author: Khan
 * Date: 16th October, 2017
 */

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

ull mod_pow(ull x, ull n, ull mod)
{
    ull res = 1;
    while(n > 0)
    {
        if(n & 1)
            res = res * x % mod;
        x = x * x % mod;
        n >>= 1;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    //freopen("sample.txt", "r", stdin);
    ull m, n;
    cin >> m >> n;
    cout << mod_pow(m, n, 1e9 + 7) << endl;
    return 0;
}