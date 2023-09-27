#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <vector>
#include <deque>
#include <queue>
#include <map>
#include <algorithm>
#include <functional>

using namespace std;
typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)
#define FOR(i,a,b) for(int i = (a); i < (int)(b); ++i)
#define ALL(c) (c).begin(), (c).end()
#define SIZE(v) ((int)v.size())

#define pb push_back
#define mp make_pair
#define mt make_tuple

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)
#define FOR(i,a,b) for(int i = (a); i < (int)(b); ++i)
#define ALL(c) (c).begin(), (c).end()
#define SIZE(v) ((int)v.size())

// N????´??????°????§£?????????<?´??????°, ?????´?????°>????????¢?????????
// N=12???????????? <2, 2>, <3, 1>?????????
map<long long, int> getFactorsMap(long long N){
    map<long long, int> ret;
    for (long long p=2; p*p <= N; p++) {
        while (N % p == 0) {
            N /= p;
            ret[p]++;
        }
    }
    if (N != 1) ret[N]++;
    return ret;
}

int main(void)
{
    int n;
    cin >> n;

    cout << n << ":";
    auto res = getFactorsMap(n);
    for(auto p : res) {
        REP(i, p.second) {
            cout << " " << p.first;
        }
    }
    cout << endl;

    return 0;
}