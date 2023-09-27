#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<numeric>
#include<algorithm>
#include<tuple>
#include<cmath>
#include <iomanip>

typedef unsigned long long ull;
typedef long long ll;

ll DENOM = 1000000000LL + 7LL;
using namespace std;

int main(){
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m), b(m);
    vector<ll> r(n+1, 0);
    for(int i=0; i<m; ++i){
        cin >> a[i] >> b[i];
    }
    unordered_map<ll, vector<ll> > tun;
    for(int i=0; i<m; ++i){
        tun[a[i]].push_back(b[i]);
        tun[b[i]].push_back(a[i]);
    }
    set<ll> nxt;
    nxt.insert(1);
    for(int i=0; i<n; ++i){
        set<ll> nxt_;
        for(auto it = nxt.begin(); it != nxt.end(); ++it){
            auto v = tun[*it];
            for(auto it2 = v.begin(); it2 != v.end(); ++it2){
                if (r[*it2] != 0) continue;
                r[*it2] = *it;
                nxt_.insert(*it2);
            }
        }
        nxt = nxt_;
    }
    cout << "Yes" << endl;
    for (int i=2; i<n+1; ++i){
        cout << r[i] << endl;
    }
    return 0;
}