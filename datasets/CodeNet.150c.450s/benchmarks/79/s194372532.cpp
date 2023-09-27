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

        int r;
        cin >> r;
        vec<int> deck;
        for (int i = 0; i <= n; ++i)
            deck.push_back(i);

        while (r-- != 0)
        {
            vec<int> newDeck {};
            int p, c;
            cin >> p >> c; 

            auto binserter = back_inserter(newDeck);

            copy(deck.cbegin(), deck.cend() - p + 1 - c, binserter);
            copy(deck.cend() - p + 1, deck.cend(), binserter);
            copy(deck.cend() - p + 1 - c, deck.cend() - p + 1, binserter);

            deck = newDeck;
        }

        cout << deck[deck.size() - 1] << endl;
    }

}

int main()
{
    solve();
    return 0;
}
