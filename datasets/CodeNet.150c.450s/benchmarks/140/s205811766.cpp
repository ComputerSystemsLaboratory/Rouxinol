/*~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=
*$* WRITER:kakitamasziru/OxOmisosiru *$*
~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=*/
#ifdef LOCAL_JUDGE
#define _GLIBCXX_DEBUG //FOR THE DEBUG! COMMENT OUT THIS WHEN SUBMITTING!
#endif
/* I REALLY HOPE MY WISH REACH YOU , ATCODER'S ONLINE JUDGE */
#define WOULD
#define YOU
#define PLEASE
#define ACCEPT
#define MY
#define SUBMISSION
/* I REALLY HOPE MY WISH REACH YOU , ATCODER'S ONLINE JUDGE */
#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <iomanip>
#include <limits>//setprecision
//#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <math.h>//pow,,,
#include <cmath>//abs,,,
#include <bitset> // bitset
//It is so troublesome that I include bits/stdc++.h !
using namespace std;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
const long long INF = 100100100100;
const long long MOD = 1000000007;
typedef pair<long long,long long> P;
//NのM乗を求める(繰り返し二乗法)
long long mod_pow(long long N, long long M) {
    if (M == 0) return 1;
    long long res = mod_pow((N * N) % MOD, M / 2);
    //最下位ビット(*N)が1の時は単独でNをかける
    if (M & 1) res = (res * N) % MOD;

    return res %= MOD;
}
long long nCr(long long n, long long r) {
    long long A = 1, B = 1;
    //Aが分子Bが1/r!
    for (long long i = n - r + 1; i <= n; i++) {
        A = A * i % MOD;
    }
    for (long long i = 1; i <= r; i++) {
        B = B * i % MOD;
    }
    B = mod_pow(B, MOD - 2);
    B %= MOD;
    //Bは割るのではなく掛ける
    return (A * B) % MOD;
}

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}
 
long long lcm(long long a, long long b) {
    return a * b / gcd(a, b);
}

//long long A,B;
bool ok(long long key,long long index){
    if(index > key) return true;
    else if(index <= key) return false;
}
long long binary_search(long long key,long long size){
    //left,right,midはいずれもindex
    long long left = -1,right = size;
    while(right - left > 1){
        long long mid = left + (right-left)/2;
        long long hantei = ok(key,mid);
        if(hantei) right = mid;
        else left = mid;
    }
    if(left == -1)return 0;
    return left;
}
const int MAX_N = 10005;
//変を表す。first:コスト,second:頂点
vector<vector<P>> Edge(MAX_N);
vector<long long> D(MAX_N,INF);
vector<bool> seen(MAX_N,false);

long long prim(int start){
    long long res = 0;
    seen.at(start) = true;
    priority_queue<P ,vector<P>,greater<P>> Q;
    for(P U : Edge.at(start)){
        Q.push(U);
    }
    //Q.push(make_pair(0,0));
    while(!Q.empty()){
        P A = Q.top();Q.pop();
        int cost = A.first;
        int to = A.second;
        if(seen.at(to)) continue;
        seen.at(to) = true;
        res += cost;
        for(P V : Edge.at(to)){
            Q.push(V);
        }
    }
    return res;
}

int main() {
    int N,E;cin >> N >> E;
    for(int i = 0;i<E;i++){
        int a,b,c;cin >> a >> b >> c;
        Edge.at(a).push_back(make_pair(c,b));
        Edge.at(b).push_back(make_pair(c,a));
    }
    D.at(0) = 0;
    long long ans = prim(0);

    cout << ans << endl;
}

