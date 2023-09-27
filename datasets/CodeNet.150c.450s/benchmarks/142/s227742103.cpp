#pragma region header
#define _GLIBCXX_DEBUG 
#include <bitset>
#include <tuple>
#include <cstdint>
#include <cstdio>
#include <cctype>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <cassert>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <list>
#include <limits>
#include <map>
#include <memory>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#include <math.h>
using namespace std;
#define int long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i <= (int)(n); i++)
#define rev(i, n) for(int i = (int)(n - 1); i >= 0; i--)
#define rev1(i, n) for(int i = (int)(n); i > 0; i--)
#define pb push_back
#define ts to_string
#define all(v) (v).begin(), (v).end()
#define resort(v) sort((v).rbegin(), (v).rend())
#define vi vector<int>
#define vvi vector<vector<int>>
#define vc vector<char>
#define vvc vector<vector<char>>
#define vb vector<bool>
#define vvb vector<vector<bool>>
#define vs vector <string>
#define vvs vector <vector<string>>
#define pq  priority_queue<int>
#define smallpq  priority_queue<int, vector<int>, greater<int>>
using ll = long long;
using P = pair<int, int>;
/* ----------------よく使う数字や配列----------------- */
int dx[] = { 1,0,-1,0 };
int dy[] = { 0,1,0,-1 };
constexpr ll mod = 1e9 + 7;
constexpr ll inf = INT32_MAX / 2;
constexpr ll INF = LLONG_MAX / 2;
constexpr long double eps = DBL_EPSILON;
constexpr long double pi = 3.141592653589793238462643383279;
/* ----------------------end----------------------- */
/* --------------------テンプレート------------------ */
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
/* ----------------------end----------------------- */

/* --------------------ライブラリ-------------------- */
ll fact(int i) {       //階乗
    if (i == 0) return 1;
    return (fact(i - 1)) * i % mod;
}
ll gcd(ll a, ll b) {        //最大公約数
    if (b == 0) return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) {      //最小公倍数
    return a * b / gcd(a, b);
}
bool isprime(ll a)//素数判定、primeならtrue,違うならfalse
{
    if (a < 2) return false;
    else if (a == 2) return true;
    else if (a % 2 == 0) return false;
    double m = sqrt(a);
    for (int i = 3; i <= m; i += 2)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    // 素数である
    return true;
}
ll keta(ll n) {        //桁数を求める
    if (n == 0) return 1;
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}
ll ketasum(ll n) {    //各桁の和
    ll sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
#define double long double
/* ----------------------end----------------------- */
#pragma endregion
signed main() {
    int N, K;
    cin >> N >> K;
    vi A(N);
    rep(i, N) {
        cin >> A[i];
    }
    for (int i = K - 1; i < N-1; i++) {
        if (A[i - K+1] < A[i + 1]) puts("Yes");
        else puts("No");
    }
}

    

    
