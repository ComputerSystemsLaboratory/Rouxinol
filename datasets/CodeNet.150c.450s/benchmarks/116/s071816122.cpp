// 基本テンプレート
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

#define debug(...) fprintf(stderr, __VA_ARGS__)
#define int long long int
 
template<typename T> void chmax(T &a, T b) {a = max(a, b);}
template<typename T> void chmin(T &a, T b) {a = min(a, b);}
template<typename T> void chadd(T &a, T b) {a = a + b;}
 
typedef pair<int, int> pii;
typedef long long ll;
 
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
const ll INF = 1001001001001001LL;
const ll MOD = 1000000007LL;

int acc[100010];
signed main() {
    int N, K;
    while(cin >> N >> K, N || K) {
        memset(acc, 0, sizeof(acc));
        for(int i=0; i<N; i++) {
            cin >> acc[i+1];
            acc[i+1] += acc[i];
        }

        int ans = -INF;
        for(int i=K; i<=N; i++) {
            chmax(ans, acc[i] - acc[i-K]);
        }
        cout << ans << endl;
    }
    return 0;
}

