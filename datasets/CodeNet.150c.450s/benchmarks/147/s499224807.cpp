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

int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int x = 1; x <= 100; x++)
    {
        for (int y = 1; y <= 100; y++)
        {
            for (int z = 1; z <= 100; z++)
            {
                int total = (x * x) + (y * y) + (z * z) + (x * y) + (y * z) + (z * x);
                mp[total]++;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << mp[i] << endl;
    }
    return 0;
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