#include <iostream>
#include <iomanip>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <cstdio>
#include <utility>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <numeric>

using namespace std;

typedef uint64_t u64;
typedef int64_t s64;
typedef uint32_t u32;
typedef int32_t s32;
typedef vector<s32> vs32;
typedef vector<u32> vu32;
typedef vector<s64> vs64;
typedef vector<u64> vu64;

const double PI=3.14159265358979323846;

#define MAX(x, y) ((x) < (y) ? (y) : (x))
#define MIN(x, y) ((x) > (y) ? (y) : (x))

#define rep(i, N) for(int i = 0; i < N; ++i)

#define CEIL(x, y) (((x) + (y) - 1) / (y))
#define MOD 1000000007ULL

#define IN(l, r, x) ((l) <= (x) && (x) < (r))


int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    const int DAY = 365;
    const int NUM = 26;
    int d;
    cin >> d;
    int c[NUM];
    rep (i, NUM)
    {
        cin >> c[i];
        c[i] = -c[i];
    }

    int s[DAY][NUM];
    rep (i, d) rep (j, NUM) cin >> s[i][j];

    int last[NUM];
    rep (i, NUM) last[i] = 0;

    int t[DAY];
    rep (i, d)
    {
        cin >> t[i];
        --t[i];
    }

    int v[DAY + 1];
    v[0] = 0;
    rep (i, d)
    {
        v[i + 1] = v[i] + s[i][t[i]];
        last[t[i]] = i + 1;
        rep (j, NUM)
        {
            v[i + 1] += c[j] * ((i + 1) - last[j]);
        }
    }

    rep (i, d)
    {
        cout << v[i + 1] << "\n";
    }

    return 0;
}

