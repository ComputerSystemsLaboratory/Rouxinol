#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
#include <array>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <bitset>
#include <valarray>
#include <utility>
#include <tuple>
#include <cmath>
#include <random>

// boost
//#define USE_BOOST_IN_CODE
#ifdef USE_BOOST_IN_CODE
#include <boost/range.hpp>
#include <boost/range/algorithm.hpp>
#include <boost/range/numeric.hpp>
#include <boost/range/irange.hpp>
#include <boost/range/adaptor/strided.hpp>
#include <boost/range/adaptor/transformed.hpp>
#include <boost/format.hpp>
#endif


using ll = long long;

//vector
template <class T>
using vec = std::vector<T>;

template <class T>
using vv = vec<vec<T>>;

//namespace std
//{
//    template<>
//    class hash<Key>
//    {
//    public:
//        size_t operator() (const Key& key) const
//        {
//            size_t seed = 0;
//            auto i_hash = hash<int>()(key.i_th);
//            auto w_hash = hash<int>()(key.W);
//
//            seed ^= i_hash + 0x9e3779b9 + (seed << 6) + (seed >> 2);
//            seed ^= w_hash + 0x9e3779b9 + (seed << 6) + (seed >> 2);
//
//            return seed;
//        }
//    };
//}

void solve()
{
    using namespace std;
    int n;

    while (cin >> n)
    {
        if (n == 0)
            break;

        int p;
        cin >> p;

        vec<int> v(n);
        int stoneNum = p;

        for (int i = 0;; i = (i + 1) % n)
        {
            if (stoneNum == 0)
            {
                stoneNum += v[i];
                v[i] = 0;
            }
            else if (stoneNum == 1 && stoneNum + v[i] == p)
            {
                cout << i << endl;
                break;
            }
            else
            {
                ++v[i];
                --stoneNum;
            }
        }
    }

}

int main()
{
    solve();
    return 0;
}
