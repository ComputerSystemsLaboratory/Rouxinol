#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(),v.end()
#define _GLIBCXX_DEBUG

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vd = vector<double>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using vvd = vector<vd>;
using vvvi = vector<vvi>;
using vvvll = vector<vvll>;
using vvvd = vector<vvd>;

const double pi=acos(-1);
const ll MOD=1e9+7;
const ll INF=(1LL<<60);

map< int64_t, int > prime_factor(int64_t n) {
    map< int64_t, int > ret;
    for(int64_t i = 2; i * i <= n; i++) {
        while(n % i == 0) {
        ret[i]++;
        n /= i;
        }
    }
    if(n != 1) ret[n] = 1;
        return ret;
}

int main() {
    int n;
    cin>>n;
    cout<<n<<":";
    auto d=prime_factor(n);
    for (auto p:d){
        rep(i,p.second){
            cout<<" "<<p.first;
        }
    }
    cout<<endl;
    

    return 0;
}
