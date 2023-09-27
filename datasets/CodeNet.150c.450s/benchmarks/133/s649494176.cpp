#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
constexpr int Inf = 1000000010;
constexpr ll INF= 1000000000000000000;
constexpr ll MOD = 1000000007;
const double PI = 3.1415926535897;
typedef pair<int,int> P;

template<typename T>
T Pow(T a,T b) {
    T ret = 1;
    for(int i = 0;i < b;i++) {
        ret *= a;
    }
    return ret;
}

ll mod(ll val) {
    ll res = val % MOD;
    if(res < 0) {
        res += MOD;
    }
    return res;
}

ll RS(ll N, ll P, ll M){
    if(P==0) return 1;
    if(P < 0) {
        return 0;
    }
    if(P%2==0){
        ll t = RS(N, P/2, M);
        return t*t % M;
    }
    return N * RS(N, P-1, M) % M;
}

//[a,b]の区間でn個の乱数を生成
vector<int> Rand(int l,int r,int n) {
    random_device rnd;
    mt19937 mt(rnd());
    uniform_int_distribution<> rand(l,r);
    vector<int> res;
    for(int i = 0;i < n;i++) {
        res.push_back(rand(mt));
    }
    return res;
}

int D = 365;
vector<int> c(26);
vector<vector<int>> s(D,vector<int>(26));

int score(vector<int> res) {
    int ret = 0;
    vector<int> last(26,-1);
    for(int i = 0;i < D;i++) {
        ret += s.at(i).at(res.at(i) - 1);
        last.at(res.at(i) - 1) = i;
        for(int j = 0;j < 26;j++) {
            ret -= c.at(j) * (i - last.at(j));
        }
        cout << ret << endl;
    }
    return ret;
}

int main() {
    cin >> D;
    for(int i = 0;i < 26;i++) {
        cin >> c.at(i);
    }
    for(int i = 0;i < D;i++) {
        for(int j = 0;j < 26;j++) {
            cin >> s.at(i).at(j);
        }
    }
    vector<int> cnt(D);
    for(int i = 0;i < D;i++) {
        cin >> cnt.at(i);
    }
    score(cnt);
}