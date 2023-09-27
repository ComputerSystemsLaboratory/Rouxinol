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

template <typename T>
class BIT
{
  private:
    vector<T> array;
    int N;

  public:
    BIT(int size) : array(size + 1, 0), N(size) {}

    T sum(int i)
    {
        T sum = 0;
        while (i > 0)
        {
            sum += array[i];
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
            array[i] += x;
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
        while(init < N)
        {
            init *= 2;
        }

        int x = 0;
        for(int k = init; k > 0; k /= 2)
        {
            if(x + k <= N && array[x + k] < w)
            {
                w -= array[x + k];
                x += k;
            }
        }
        
        return x + 1;
    }
};

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, Q;
    cin >> N >> Q;
    BIT<int> bit(N);

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
