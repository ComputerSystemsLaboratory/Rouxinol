#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <algorithm>
#include <functional>
#include <numeric>

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

// a + b = n (0 <= a, b <= 9)??¨??????????????????????????°
int calc(int n) {
    if (n > 18) return 0;
    if (n > 9) n = 18 - n;
    return n + 1;
}

int main(void)
{
    cin.sync_with_stdio(false);
    int n;

    while(cin >> n) {
        int ret = 0;
        REP(a_plus_b, n + 1) {
            int c_plus_d = n - a_plus_b;
            ret += calc(a_plus_b) * calc(c_plus_d);
        }
        cout << ret << endl;
    }
    return 0;
}