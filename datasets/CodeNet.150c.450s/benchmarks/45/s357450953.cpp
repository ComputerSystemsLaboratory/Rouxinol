#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <iomanip>
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <math.h>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
const int INF = 1001001000;
const int MOD = 1000000007;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}
long long lcm(long long a, long long b) {
    return a * b / gcd(a, b);
}

using Graph = vector<vector<int>>;
//再帰とかグラフを使うときは予めNの最大値のグローバル配列を取っておく
int N;
vector<int> E[200001];
vector<bool> seen;
typedef pair<int, int> P;
int D[101];
//頂点状態を表すcolor[]において、0は未訪問、1は訪問中、2は完了を表す。
int color[101];
int find_time = 0;

int mod_pow(long long N, long long M) {
    if (M == 0) return 1;
    long long res = mod_pow((N * N) % MOD, M / 2);
    if (M & 1) res = (res * N) % MOD;
    return res;
}

int main() {
    long long N,M;
    cin >> N >> M;


    cout << mod_pow(N,M) << endl;
}

