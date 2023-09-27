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

void run_case()
{
    int n;
    cin >> n;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "AC")
            cnt1++;
        else if (s == "WA")
            cnt2++;
        else if (s == "TLE")
            cnt3++;
        else if (s == "RE")
            cnt4++;
    }
    cout << "AC x " << cnt1 << "\n";
    cout << "WA x " << cnt2 << "\n";
    cout << "TLE x " << cnt3 << "\n";
    cout << "RE x " << cnt4 << "\n";
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