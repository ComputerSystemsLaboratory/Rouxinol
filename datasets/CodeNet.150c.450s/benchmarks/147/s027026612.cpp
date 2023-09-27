#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define all(x)(x).begin(), (x).end() // 昇順ソート
#define rall(v)(v).rbegin(), (v).rend() // 降順ソート
#define INF 1 LL << 60
typedef long long int LL;
typedef long long int ll;
#define pll pair < ll, ll >
#define F first
#define S second
const int MOD = 1000000007;
template < class T > bool chmax(T & a,const T & b) { if (a < b) { a = b; return true; } return false; }
template < class T > bool chmin(T & a,const T & b) { if (a > b) { a = b; return true; } return false; }
// 任意のlogは　対数の底の変換を使う    log(N) / log(任意の底)

LL f(LL x,LL y,LL z){
    LL tmp = x*x + y*y + z*z + x*y + y*z + z*x;
    return tmp;
}
int main() {
    LL N;cin >> N;
    map<LL,int> m;
    for(LL x = 1;x <= 100;x++){
        for(LL y = 1;y <= 100;y++){
            for(LL z = 1;z <= 100;z++){
                m[f(x,y,z)]++;
            }
        }
    }

    for(LL i = 1;i <= N;i++)cout << m[i] << endl;
}