#include <bits/stdc++.h>
using namespace std;
#define all(n) begin(n), end(n)
const long long INF = numeric_limits<long long>::max();
typedef long long ll;
typedef vector<int> vint;
typedef vector<vector<int>> vvint;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef unsigned long long ull;
template <class T>
bool chmax(T &a, const T &b)
{
    if (a < b)
    {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
bool chmin(T &a, const T &b)
{
    if (b < a)
    {
        a = b;
        return 1;
    }
    return 0;
}
template <typename T>
vector<T> make_v(size_t a) { return vector<T>(a); }

template <typename T, typename... Ts>
auto make_v(size_t a, Ts... ts)
{
    return vector<decltype(make_v<T>(ts...))>(a, make_v<T>(ts...));
}
template <typename T, typename V>
typename enable_if<is_class<T>::value == 0>::type
fill_v(T &t, const V &v) { t = v; }

template <typename T, typename V>
typename enable_if<is_class<T>::value != 0>::type
fill_v(T &t, const V &v)
{
    for (auto &e : t)
        fill_v(e, v);
}
int main()
{
    ll D;
    cin >> D;
    vll c(26+1);
    for (size_t i = 1; i <= 26; i++)
    {
        cin >> c[i];
    }
    auto s = make_v<ll>(D+1, 26+1);
    for (size_t i = 1; i <= D; i++)
    {
        for (size_t j = 1; j <= 26; j++)
        {
            cin >> s[i][j]; //s[i][j] := i日目にコンテストjを開催したときの満足度の増加量
        }
    }
    vll t(D+1);
    auto last = make_v<ll>(D+1, 26+1);
    for (size_t i = 1; i <= D; i++)
    {
        cin >> t[i];
        last[i][t[i]]=i; //i日目以前にタイプt[i]のコンテストを開催した最後の日
        for (size_t j = 0; j <= 26; j++)
        {
            if(j==t[i])continue;

            chmax(last[i][j],last[i-1][j]);
        }
    }

    ll score = 0;

    for (int i = 1; i <= D; i++)
    {
        score += s[i][t[i]];
        ll decrease = 0;
        for (int j = 1; j <= 26; j++)
        {
            decrease += c[j]*(i-last[i][j]);
        }
        score -= decrease;
        cout<<score<<endl;
    }

    return 0;
}