#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime> 
#include <ccomplex>
#include <cfenv>	
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
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
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>

using namespace std;



template< typename T >
struct edge {
    int src, to;
    T cost;

    edge(){}

    edge(int to, T cost) : src(-1), to(to), cost(cost) {}

    edge(int src, int to, T cost) : src(src), to(to), cost(cost) {}

    edge& operator=(const int& x) {
        to = x;
        return *this;
    }

    operator int() const { return to; }
};

template< typename T >
using Edges = vector< edge< T > >;
template< typename T >
using WeightedGraph = vector< Edges< T > >;
using UnWeightedGraph = vector< vector< int > >;
template< typename T >
using Matrix = vector< vector< T > >;

Edges<int> G;

template< typename T >
vector< T > bellman_ford(Edges< T >& edges, int V, int s)
{
    const auto INF = numeric_limits< T >::max();
    vector< T > dist(V, INF);
    dist[s] = 0;
    for (int i = 0; i < V - 1; i++) {
        for (auto& e : edges) {
            if (dist[e.src] == INF) continue;
            dist[e.to] = min(dist[e.to], dist[e.src] + e.cost);
        }
    }
    for (auto& e : edges) {
        if (dist[e.src] == INF) continue;
        if (dist[e.src] + e.cost < dist[e.to]) return vector< T >();
    }
    return dist;
}



struct Combination
{
    int mod;
    vector< int64_t > mfact, rfact;

    Combination(int sz, int mod) : mfact(sz + 1), rfact(sz + 1), mod(mod)
    {
        mfact[0] = 1;
        for (int i = 1; i < mfact.size(); i++) {
            mfact[i] = mfact[i - 1] * i % mod;
        }
        rfact[sz] = inv(mfact[sz]);
        for (int i = sz - 1; i >= 0; i--) {
            rfact[i] = rfact[i + 1] * (i + 1) % mod;
        }
    }

    int64_t fact(int k) const
    {
        return (mfact[k]);
    }

    int64_t pow(int64_t x, int64_t n) const
    {
        int64_t ret = 1;
        while (n > 0) {
            if (n & 1) (ret *= x) %= mod;
            (x *= x) %= mod;
            n >>= 1;
        }
        return (ret);
    }

    int64_t inv(int64_t x) const
    {
        return (pow(x, mod - 2));
    }

    int64_t P(int n, int r) const
    {
        if (r < 0 || n < r) return (0);
        return (mfact[n] * rfact[n - r] % mod);
    }

    int64_t C(int p, int q) const
    {
        if (q < 0 || p < q) return (0);
        return (mfact[p] * rfact[q] % mod * rfact[p - q] % mod);
    }

    int64_t H(int n, int r) const
    {
        if (n < 0 || r < 0) return (0);
        return (r == 0 ? 1 : C(n + r - 1, r));
    }
};

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
    
	int N, M , r;
	cin >> N >> M >> r;
	for (int i = 0; i < M; i++) {
        int from,to, cost;
        edge <int>  e;
        cin >> from >> to >> cost;
        e.src = from;  e.to = to; e.cost = cost;
        G.push_back(e);
	}

	
    vector<int> dist = bellman_ford<int>  (G, N, r);

    if (dist.size() == 0) {
        cout << "NEGATIVE CYCLE"  << endl;
        return 0;
    }

    for (int i = 0; i < dist.size(); i++) {
        if (dist[i] == INT_MAX) cout << "INF" << endl;
        else  cout << dist[i] << endl;
    }
}

