#include "bits/stdc++.h"

#define sz(x) (int)x.size()
#define ld long double
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second

using namespace std;

const ll d = 64;

ll tt;
template<int SZ, typename T> struct XorBasis{
    int sz;
    vector<T> basis;
    XorBasis(){
        sz = 0;
        basis.assign(SZ, 0);
    }
    void insert(T vec){
        for(int i = 0; i < SZ; ++i){
            if(!((vec >> i) & 1)) continue;
            if(!basis[i]){
                basis[i] = vec;
                sz++;
                return;
            }
            vec ^= basis[i];
        }
    }
    bool find(T vec){
        for(int i = 0; i < SZ; ++i){
            if(!((vec >> i) & 1)) continue;
            if(!basis[i]){
                return false;
            }
            vec ^= basis[i];
        }
        return true;
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> tt;
    while(tt--){
        ll n;
        string s;
        vector<ll> v;
        cin >> n;
        v.assign(n, 0);
        for(int i = 0; i < n; ++i){
            cin >> v[i];
        }
        cin >> s;
        for(int i = 0; i < n; ++i){
            if(s[i] == '0') continue;
            XorBasis<64, long long> cur;
            for(int j = i + 1; j < n; ++j){
                if(s[j] == '0') cur.insert(v[j]);
            }
            if(!cur.find(v[i])){
                cout << 1 << "\n";
                goto nxt;
            }
        }
        cout << 0 << "\n";
        nxt:;
    }
    return 0;
}