#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
const ull mod = 1e9 + 7;
#define REP(i,n) for(int i=0;i<(int)n;++i)

template<class V, int ME> class BIT {
public:
    V bit[1<<ME];
    V total(int e) {V s=0;e++;while(e) s+=bit[e-1],e-=e&-e; return s;}
    void update(int e, V val) {e++; while(e<=1<<ME) bit[e-1]+=val,e+=e&-e;}
};

int main(){
    int N, tmp;
    cin >> N;
    vector<int> inputs(N), rank(N);
    vector<pii> x(N);
    REP(i, N){
        cin >> x[i].first;
        x[i].second = i;
    }
    sort(x.begin(), x.end());
    REP(i, N){
        rank[x[i].second] = i+1;
    }

    REP(i, N){
        inputs[--rank[i]] = i;
    }

    BIT<int, 19> bit;
    ll res = 0;
    REP(i, N){
        bit.update(inputs[i], 1);
        //cout << bit.total(N) - bit.total(inputs[i]) << endl;
        res += (bit.total(N) - bit.total(inputs[i]));
    }
    cout << res << endl;
    return 0;
}
