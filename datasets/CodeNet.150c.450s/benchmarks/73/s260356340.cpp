#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
using vint = vector<int>;
using vvint = vector<vint>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vchar = vector<char>;
using vvchar = vector<vchar>;
using vp = vector<P>;
using vpp = vector<pair<P, P>>;
using vvp = vector<vp>;

#define rep(i, n) for (int i = 0; i < n; ++i)
#pragma region Debug
istream &operator>>(istream &is, P &a)
{
    return is >> a.first >> a.second;
}
ostream &operator<<(ostream &os, const P &a) { return os << "(" << a.first << "," << a.second << ")"; }

template <typename T>

void view(const std::vector<T> &v)
{
#ifndef ONLINE_JUDGE
    for (const auto &e : v)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;
#endif
}
template <typename T>
void view(const std::vector<std::vector<T>> &vv)
{
    for (const auto &v : vv)
    {
        view(v);
    }
}
#pragma endregion

vint seg;
int n, q, n0;

// segment tree
// let n = 5
// A = [1,2,3,4,5]
// then the seg tree looks like:
//        15
//    10,     5
//  3,  7,  5,  0
// 1,2,3,4,5,0,0,0
// with indices
//          1
//    2,          3
//  4,   5,    6,    7
// 8,9,10,11,12,13,14,15
// thus, you can go one layer up by dividing by 2 (floor)
// update is easy since you just update the bottom and move up
// accumulation is also easy:
// for [l,r), we will look at l and r separately.
// l: if (l%2 == 1), then you look at seg[l] and l++.
// after, l/=2 to go up a layer
// this means you are at the level of detail that has the best scale always
// since you need to look at that layer and no shallower (since info from seg[l-1] will be in seg[l/2])
// r: if (r%2 == 1), then look at seg[r-1] and r--.
// after, r/=2 to go up a layer.
// similar to l, if r is odd, then r/=2 will include information from seg[r].
// we don't want this since we are querying r exclusive.
// once l >= r we've accumulated everything we need.

void add(int i, int x)
{
    int k = i + n;
    seg[k] += x;
    while (k)
    {
        k /= 2;
        if (!k)
            break;
        seg[k] = seg[k * 2] + seg[k * 2 + 1];
    }
}

// s inclusive t exclusive
int getSum(int s, int t)
{
    int l = s + n,
        r = t + n;
    ll sum = 0;
    while (l < r)
    {
        if (l % 2)
        {
            sum += seg[l];
            l++;
        }
        l /= 2;
        if (r % 2)
        {
            sum += seg[r - 1];
            r--;
        }
        r /= 2;
    }
    return sum;
}

int main()
{
    cin >> n >> q;
    int size = 1 << (int)(log2(n) + 1);
    seg = vint(2 * size + 1, 0);

    rep(i, q)
    {
        int com, x, y;
        cin >> com >> x >> y;
        if (com)
        {
            int ans = getSum(x, y + 1);
            cout << ans << "\n";
        }
        else
        {
            add(x, y);
        }
    }

    return 0;
}
