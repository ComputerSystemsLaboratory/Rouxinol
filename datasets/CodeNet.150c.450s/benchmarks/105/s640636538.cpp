#include <cstdio>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <iterator>
#include <cassert>
#include <numeric>
#include <functional>
//#include <numeric>
#pragma warning(disable:4996) 

typedef long long ll;
typedef unsigned long long ull;
#define MIN(a, b) ((a)>(b)? (b): (a))
#define MAX(a, b) ((a)<(b)? (b): (a))
#define LINF  9223300000000000000
#define LINF2 1223300000000000000
#define LINF3 1000000000000
#define INF 2140000000
const long long MOD = 1000000007;
//const long long MOD = 998244353;

using namespace std;

char str[205];

bool func(ll a, ll b)
{
    int i;
    int cnt = 0;
    for (i = 0; i < 62; i++) {
        if (b & ((ll)1 << i)) {
            if (a & ((ll)1 << i)) {
                return true;
            }
            break;
        }
    }
    return false;
}

void solve()
{
    int n;
    scanf("%d", &n);
    vector<ll> a(n);
    int i, j;
    for (i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }
    scanf("%s", str);

    for (i = n-1; i >= 0; i--) {
        if (str[i] == '1') {
            if (a[i]) {
                printf("1\n"); return;
            }
        }
        else {
            for (j = 0; j < i; j++) {
                if (func(a[j], a[i])) {
                    a[j] ^= a[i];
                }
            }
        }
    }
    printf("0\n");
    return;
}


int main(int argc, char* argv[])
{
#if 0
    solve();
#else
    int T;
    scanf("%d", &T);
    int t;
    for(t=0; t<T; t++) {
        //printf("Case #%d: ", t+1);
        solve();
    }
#endif
    return 0;
}
