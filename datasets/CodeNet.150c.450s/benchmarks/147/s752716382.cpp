#include <bits/stdc++.h>
#define ll long long
#define ls id << 1
#define rs id << 1 | 1
#define mem(array, value, size, type) memset(array, value, ((size) + 5) * sizeof(type))
#define memarray(array, value) memset(array, value, sizeof(array))
#define pb(x) push_back(x)
#define st(x) (1LL << (x))
#define pii pair<int, int>
#define mp(a, b) make_pair((a), (b))
#define Flush fflush(stdout)
using namespace std;
const int N = 500050;
const int inf = 0x3f3f3f3f;
const ll llinf = 0x3f3f3f3f3f3f;
const ll mod = 998244353LL;
clock_t TIME_START, TIME_END;
void program_end()
{
#ifdef ONLINE
    printf("\nTime used: %.6lf(s)\n", ((double)TIME_END - TIME_START) / CLOCKS_PER_SEC);
    system("pause");
#endif
}
ll cal(ll x, ll y, ll z)
{
    return x * x + y * y + z * z + x * y + y * z + x * z;
}
ll n;
map<ll, int> cnt;

void solve()
{
    cin >> n;
    for (ll x = 1; x <= 100; ++x)
    {
        for (ll y = 1; y <= 100; ++y)
            for (ll z = 1; z <= 100; ++z)
                cnt[cal(x, y, z)]++;
    }
    for (int i = 1; i <= n;++i)
        cout << cnt[i] << endl;
}

int main()
{
    TIME_START = clock();
    int Test = 1;
    // cin >> Test;
    while (Test--)
        solve();
    TIME_END = clock();
    program_end();
    return 0;
}