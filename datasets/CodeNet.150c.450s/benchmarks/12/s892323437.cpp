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

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vs32 a(n + 1);
    rep (i, n) cin >>  a[i + 1];

    for (int i = 1; i <= n; ++i)
    {
        cout << "node " << i << ": ";
        cout << "key = " << a[i] << ", ";
        if (i / 2 > 0)
        {
            cout << "parent key = " << a[i / 2] << ", ";
        }
        if (2 * i <= n)
        {
            cout << "left key = " << a[2 * i] << ", ";
        }
        if (2 * i + 1 <= n)
        {
            cout << "right key = " << a[2 * i + 1] << ", ";
        }
        cout << "\n";
    }

    return 0;
}

