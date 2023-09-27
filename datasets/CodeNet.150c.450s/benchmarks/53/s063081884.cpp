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

vector<pair<ll, ll>> factorization(ll num)
{
    map<ll, ll> mp;

    ll tmp = num;
    for (ll i = 2; i * i <= num; i++)
    {
        while (tmp % i == 0)
        {
            mp[i]++;
            tmp /= i;
        }
    }
    if (tmp != 1)
    {
        mp[tmp]++;
    }
    vector<pair<ll, ll>> ret;
    for (auto m : mp)
    {
        ret.push_back(make_pair(m.first, m.second));
    }
    return ret;
}

int main()
{
    ll n;
    cin >> n;
    auto fac = factorization(n);
    cout << n << ':';
    for (auto f : fac)
    {
        for (int i = 0; i < f.second; i++)
        {
            cout << ' ';
            cout << f.first;
        }
    }
    cout << endl;
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
