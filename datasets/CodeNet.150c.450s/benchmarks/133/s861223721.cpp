#include <string>
#include <iostream>
#include <stack>
#include <queue> // priority_queue も入ってる
#include <set>   // 要素数は size() で取得 multisetもある
#include <map>
#include <array> // sizeはコンパイル時定数で固定
#include <vector>
#include <numeric>   // accumulate, gcd
#include <algorithm> // count_ifに必要
#include <iomanip>   // cout << setprecision(15) << x で小数の出力精度を指定
#include <tuple>
#include <utility> //pair
#include <cmath>

using namespace std;
// 問題が起こるまでintは使用禁止2020-04-13
using ll = long long;

#define rep(i, n) for (int i = 0; i < (n); ++i)

template <class InputIterator, class T>
bool contains_itr(InputIterator iterator, const T &value)
{
    if (find(iterator.begin(), iterator.end(), value) == iterator.end())
        return false;
    else
        return true;
}

template <class T>
bool contains_set(set<T> st, const T &value)
{
    if (st.find(value) == st.end())
    {
        return false;
    }
    else
    {
        return true;
    }
}

template <class InputIterator>
auto sum(InputIterator iterator)
{
    return accumulate(iterator.begin(), iterator.end(), 0);
}

// endは排他的(exclusive)なので注意
vector<ll> range(ll begin, ll end)
{
    vector<ll> result;
    for (ll i = begin; i < end; ++i)
    {
        result.push_back(i);
    }
    return result;
}

// =========ここまでテンプレ============

int main()
{
    ll d;
    cin >> d;
    array<ll, 26> c;
    rep(i, 26) cin >> c[i];
    vector<array<ll, 26>> s(d, array<ll, 26>());
    rep(i, d)
    {
        rep(j, 26) cin >> s[i][j];
    }
    // ここまでA問の入力と同じ
    vector<ll> t(d);
    rep(i, d)
    {
        ll tempT;
        cin >> tempT;
        t[i] = tempT - 1;
    };

    array<ll, 26> last;
    rep(i, 26) last[i] = -1;
    ll satis = 0;
    rep(i, d)
    {
        satis += s[i][t[i]];
        last[t[i]] = i;
        rep(j, 26)
        {
            satis -= c[j] * (i - last[j]);
        }
        cout << satis << endl;
    }
}