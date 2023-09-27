#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = 1001001001;
const ll LINF = 1001001001001001;
const int MOD = 1000000007;

template <typename T>
void print(const T &v);

int fmt(string s)
{
    int ret = 0;
    ret += (s[0] - '0') * 36000;
    ret += (s[1] - '0') * 3600;
    ret += (s[3] - '0') * 600;
    ret += (s[4] - '0') * 60;
    ret += (s[6] - '0') * 10;
    ret += (s[7] - '0') * 1;
    return ret;
}

int main()
{
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            return 0;
        }
        vector<int> times(100000, 0);
        for (int i = 0; i < n; i++)
        {
            string s1, s2;
            cin >> s1 >> s2;
            int st = fmt(s1), fin = fmt(s2);
            times[st]++;
            times[fin]--;
        }
        for (int i = 0; i < times.size() - 1; i++)
        {
            times[i + 1] += times[i];
        }
        int ans = 0;
        for (int i = 0; i < times.size(); i++)
        {
            ans = max(ans, times[i]);
        }
        cout << ans << endl;
    }
}

// Use For Debug
template <typename T>
void print(T const &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (i)
            cout << ' ';
        cout << v[i];
    }
    cout << endl;
}
