#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define Rep(i,n) for(int i=1;i<=n;i++)
const ll MOD = 1000000007;
long long modinv(long long a, long long m=MOD) {
    long long b = m, u = 1, v = 0;
    while (b) {
        long long t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m; 
    if (u < 0) u += m;
    return u;
    /*MODの割り算の際に
    a/＝b;
    を
    a *= modinv(b,MOD);
    とする。
        */
}

int N,Q;
const int MAXN = 100000;

int A[MAXN],B[MAXN],C[MAXN];

int main(){

    cin >> N;
    ll ans = 0;
    rep(i,N){
        cin >> A[i];
        ans += A[i];
    }

    cin >> Q;
    rep(i,Q) {
        cin >> B[i] >> C[i];
    }

    map<int,int> ma;

    rep(i,N){
        if(ma[A[i]]>0)ma[A[i]]++;
        else ma[A[i]] = 1;
    }

    

    rep(i,Q) {
        if(ma[B[i]] > 0){
            ans += ma[B[i]]*(C[i] - B[i]);
            if(ma[C[i]]>0){
                ma[C[i]] += ma[B[i]];
            }else{
                ma[C[i]] = ma[B[i]];
            }
            ma[B[i]] = 0;
        }
        cout << ans <<endl;
    }

    

    return 0;
}