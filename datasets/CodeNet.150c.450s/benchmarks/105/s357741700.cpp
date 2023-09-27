#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define reps(i,s,n) for(int i = s; i < n; i++)
#define rep(i,n) reps(i,0,n)
#define Rreps(i,n,e) for(int i = n - 1; i >= e; --i)
#define Rrep(i,n) Rreps(i,n,0)
#define ALL(a) a.begin(), a.end()
#define fi first
#define se second
typedef long long ll;
typedef vector<ll> vec;
typedef vector<vec> mat;

ll N,M,H,W,Q,K,A,B;
string S;
const ll MOD = 998244353;
//const ll MOD = (1e+9) + 7;
typedef pair<ll, ll> P;
const ll INF = (1LL<<62);

int main() {
    cin>>Q;
    rep(_, Q){
        cin>>N;
        vec a(N);
        rep(i,N) cin>>a[i];
        cin>>S;
        bool zero = true;
        Rrep(i,N){
            if(S[i] == '1'){
                if(a[i] != 0){
                    zero = false;
                    break;
                }
            }else{
                if(a[i] == 0) continue;
                int min_bit = 0;
                rep(j, 61) {
                    if((a[i]>>j)&1) {
                        min_bit = j;
                        break;
                    }
                }
                Rrep(j,i){
                    if((a[j]>>min_bit)&1){
                        a[j] = a[j] ^ a[i];
                    }
                }
            }
        }
        cout<<(zero ? 0 : 1)<<endl;
    }
}