#include <bits/stdc++.h>
#define repp(i,l,r)for(long long i=(l);i<(r);i++)
#define rep(i,n) for (long long i = 0; i < (n); ++i)
#define per(i,n) for (long long i = (n); i >= 0; --i)
const int INF = 2147483647;//int max
const long long int MOD = 1000000007;
using namespace std;
using ll = long long;
using P = pair<int,int>;
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

int n,k;
vector<int> w(1e5+1,0);

bool f(int p){
    int pos = 0;
    rep(i,k){//台数文のループ
        int weight_sum = 0;
        while(pos < n && weight_sum + w[pos] <= p){
            weight_sum += w[pos];
            pos++;
        }
    }
    return n == pos;
}

//ミョ(-ω- ?)
int main() {
    cin >> n >> k;
    rep(i,n)cin >> w[i];

    int ok = INF/2, ng = 0;
    while(abs(ok-ng) > 1){
        int mid = (ok + ng)/2;
        if(f(mid))ok = mid;
        else ng = mid;
    }
    cout << ok << endl;
    return 0;
}
