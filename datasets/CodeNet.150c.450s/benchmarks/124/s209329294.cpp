// #define _GLIBCXX_DEBUG // for STL debug (optional)
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <fstream>
#include <functional>
#include <bitset>
using namespace std;
using ll = long long int;
using int64 = long long int;
 
template<typename T> void chmax(T &a, T b) {a = max(a, b);}
template<typename T> void chmin(T &a, T b) {a = min(a, b);}
template<typename T> void chadd(T &a, T b) {a = a + b;}
 
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
const int INF = 1LL << 29;
const ll LONGINF = 1LL << 60;
const ll MOD = 1000000007LL;
 
int main() {
    int N; scanf("%d", &N);
    vector< vector< pair<int, int> > > G(N);
    for(int i=0; i<N; i++) {
        int u, k; scanf("%d%d", &u, &k);
        for(int j=0; j<k; j++) {
            int v, c; scanf("%d%d", &v, &c);
            G[u].emplace_back(v, c);
        }
    }

    vector<int> dist(N, INF), checked(N);
    dist[0] = 0, checked[0] = true;

    int u = 0;
    for(int i=0; i<N; i++) {
        for(auto e : G[u]) {
            int v, c; tie(v, c) = e;
            chmin(dist[v], dist[u] + c);
        }

        int ma = INF, v = 0;
        for(int k=0; k<N; k++) {
            if(checked[k]) continue;
            if(ma > dist[k]) {
                ma = dist[k];
                v = k;
            }
        }
        checked[v] = true;
        swap(u, v);
    }

    for(int i=0; i<N; i++) {
        printf("%d %d\n", i, dist[i]);
    }
    return 0;
}

