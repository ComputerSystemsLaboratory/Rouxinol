#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vl = vector<ll>;
using pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0, xxx_rep_end = (n); i < xxx_rep_end; ++i)
#define all(x) (x).begin(), (x).end()

template <class T1, class T2>
inline void chmax(T1 &a, const T2 &b)
{
    if (a < b)
    {
        a = b;
    }
}
template <class T1, class T2>
inline void chmin(T1 &a, const T2 &b)
{
    if (a > b)
    {
        a = b;
    }
}

constexpr ll INF = 0x3f3f3f3f3f3f3f3fLL;

int main()
{
    ll N;
    cin >> N;
    ll AC = 0;
    ll WA = 0;
    ll TLE = 0;
    ll RE = 0;
    string input;
    rep(i, N)
    {
        cin >> input;
        if (input == "AC")
        {
            ++AC;
        }
        else if (input == "WA")
        {
            ++WA;
        }
        else if (input == "TLE")
        {
            ++TLE;
        }
        else if (input == "RE")
        {
            ++RE;
        }
    }
    cout << "AC x " << AC << endl;
    cout << "WA x " << WA << endl;
    cout << "TLE x " << TLE << endl;
    cout << "RE x " << RE << endl;
}