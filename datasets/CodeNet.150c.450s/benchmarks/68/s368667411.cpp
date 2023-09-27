using namespace std;
using ll=long long;
#include <string>
#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <map>
#define out(S) cout<<(S)<<endl;
#define mod(i) ((i)%(ll)(1000000000 + 7))
ll modpow(ll i, ll j) { ll tmp = 1; while (j) { if (j % 2)tmp = mod(tmp*i); i = mod(i*i); j /= 2; }return tmp; }
#define divmod(a,b) (mod(a * modpow((ll)b,(ll)(1e9+5))))
#define For(i,a,b) for(size_t i=(a);i<(b);i++)
#define rFor(i,a,b) for(size_t i=(a)-1;i>=(b);i--)
#define Rep(i,a) for(size_t i=0;i<(a);i++)
#define rRep(i,a) for(size_t i=(a)-1;i>=0;i--)
#define Foreach(item,collection) for(auto item:collection)
 
int main(){
    int N;
    cin >> N;
    vector<ll> ans;
    while (N!=0)
    {
        vector<ll> a;
        a.resize(N);
        Rep(i, N) cin >> a[i];
        ll thismin = 1e10;
        Rep(i, N) {
            Rep(n, N) {
                if (n == i) continue;
                thismin = min(thismin, abs(a[i] - a[n]));
            }
        }
        ans.push_back(thismin);
        cin >> N;
    }
    Foreach(i, ans) out(i);
    return 0;
}