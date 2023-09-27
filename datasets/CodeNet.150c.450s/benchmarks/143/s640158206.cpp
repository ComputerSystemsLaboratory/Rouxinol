#include <bits/stdc++.h>

using namespace std;
#define DBG(x)                         \
    (void)(cout << "L" << __LINE__     \
                << ": " << #x << " = " \
                << (x) << '\n')
#define Lower_bound(v, x) distance(v.begin(), lower_bound(v.begin(), v.end(), x))
#define Upper_bound(v, x) distance(v.begin(), upper_bound(v.begin(), v.end(), x))
typedef long long ll;
using pii = pair<int, int>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
const long double PI = (acos(-1));
const long double EPS = 0.0000000001;
const int INF = 0x3f3f3f3f;
const int maxn = 1100000;
ll a[maxn];
ll cnt[maxn];
void run_case()
{
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += 1ll * a[i];
        cnt[a[i]]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int b, c;
        cin >> b >> c;
        sum = sum - cnt[b] * b + cnt[b] * c;
        cnt[c] += cnt[b];
        cnt[b] = 0;
        cout << sum << "\n";
    }
    //cout << sum << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << setiosflags(ios::fixed) << setprecision(12);
    run_case();
    cout.flush();
    return 0;
}