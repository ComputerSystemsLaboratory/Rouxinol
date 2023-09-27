#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <cstring>

#define REP(i, n) for (int i = 0; i < (n); i++)
#define FOR(i, init, n) for(int i = init; i < (n); i++)
#define ALL(obj) (obj).begin(), (obj).end()
#define RALL(obj) (obj).rbegin(), (obj).rend()
#define Cout(obj) cout << obj << endl
#define Size(obj) (int)(obj).size()
#define fcout cout << fixed << setprecision(10)
#define fi first
#define se second

using namespace std;
using ll = long long int;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using edge = struct
{
    int to, cost;
};

const int MOD = 1e9 + 7;
const int iINF = 1e9;
const long long int llINF = 1e18;
const double PI = acos(-1.0);

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

//node[0]を参照するバグるので注意
template <typename T>
class BIT
{
  private:
    int N;
    vector<T> node;

  public:
    //BIT(int size) : node(size + 1, 0), N(size) {}
    BIT(vector<T> vec)
    {
        N = Size(vec);
        node.resize(N + 1);

        REP(i, N)
        {
            node[i + 1] = vec[i];
        }
    }

    T sum(int i)
    {
        T sum = 0;
        while (i > 0)
        {
            sum += node[i];
            i -= i & -i;
        }

        return sum;
    }

    T sum(int l, int r)
    {
        T res_l = sum(l - 1);
        T res_r = sum(r);

        return res_r - res_l;
    }

    void add(int i, T x)
    {        
        while (i <= N)
        {
            node[i] += x;
            i += i & -i;
        }
    }

    int lower_bound(int w)
    {
        if (w <= 0)
        {
            return 0;
        }

        int init = 1;
        while (init < N)
        {
            init *= 2;
        }

        int x = 0;
        for (int k = init; k > 0; k /= 2)
        {
            if (x + k <= N && node[x + k] < w)
            {
                w -= node[x + k];
                x += k;
            }
        }

        return x + 1;
    }
};

template <typename T>
struct SegTreeMin
{
  private:
    int N = 1;
    vector<T> node;

  public:
    SegTreeMin(vector<T> vec)
    {
        int size = vec.size();

        while (N < size)
        {
            N *= 2;
        }

        node.resize(2 * N - 1, iINF);

        REP(i, size)
        {
            node[i + N - 1] = vec[i];
        }

        for (int i = N - 2; 0 <= i; i--)
        {
            node[i] = min(node[2 * i + 1], node[2 * i + 2]);
        }
    }

    void update(int i, T value)
    {
        i += (N - 1);

        node[i] = value;

        while (i > 0)
        {
            i = (i - 1) / 2;

            node[i] = min(node[2 * i + 1], node[2 * i + 2]);
        }
    }

    T getMin(int a, int b, int i = 0, int l = 0, int r = -1)
    {
        if (r < 0)
        {
            r = N;
        }

        if (r <= a || b <= l)
        {
            return iINF;
        }

        if (a <= l && r <= b)
        {
            return node[i];
        }

        T vl = getMin(a, b, 2 * i + 1, l, (l + r) / 2);

        T vr = getMin(a, b, 2 * i + 2, (l + r) / 2, r);

        return min(vl, vr);
    }
};

template <typename T>
struct SegTreeMax
{
  private:
    ll N = 1;
    vector<T> node;

  public:
    SegTreeMax(vector<T> vec)
    {
        ll size = vec.size();

        while (N < size)
        {
            N *= 2;
        }

        node.resize(2 * N - 1, -iINF);

        REP(i, size)
        {
            node[i + N - 1] = vec[i];
        }

        for (int i = N - 2; 0 <= i; i--)
        {
            node[i] = max(node[2 * i + 1], node[2 * i + 2]);
        }
    }

    void update(int i, T value)
    {
        i += (N - 1);

        node[i] = value;

        while (i > 0)
        {
            i = (i - 1) / 2;

            node[i] = max(node[2 * i + 1], node[2 * i + 2]);
        }
    }

    T getMax(int a, int b, int i = 0, int l = 0, int r = -1)
    {
        if (r < 0)
        {
            r = N;
        }

        if (r <= a || b <= l)
        {
            return -iINF;
        }

        if (a <= l && r <= b)
        {
            return node[i];
        }

        T vl = getMax(a, b, 2 * i + 1, l, (l + r) / 2);

        T vr = getMax(a, b, 2 * i + 2, (l + r) / 2, r);

        return max(vl, vr);
    }
};

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, Q;
    cin >> N >> Q;
    vector<int> vec(N);
    BIT<int> bit(vec);

    REP(i, Q)
    {
        int com, x, y;
        cin >> com >> x >> y;
        
        if(com == 0)
        {
            bit.add(x, y);
        }
        else
        {
            Cout(bit.sum(x, y));
        }
    }

    return 0;
}
