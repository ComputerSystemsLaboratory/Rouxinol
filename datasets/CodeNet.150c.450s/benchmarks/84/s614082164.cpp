#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<(ll)n;i++)


template <typename T>
struct BIT{
    int n;
    vector<T> d;

    BIT(int sz){
        n = sz+10;
        d.resize(n);
    }

    void add(int i, T x){

        while(i<=n){
            d[i] += x;
            i += i&-i;
        }
    }

    T getSum(int i){
        T ret = 0;

        while(i>0){
            ret += d[i];
            i -= i&-i;
        }
        return ret;
    }
};


int main(){
    int n; cin >> n;
    int ma = 0;
    vector<int> a(n),sorted(n);
    rep(i,n){
        cin >> a[i];
        sorted[i] = a[i];
    }


    sort(sorted.begin(), sorted.end() );
    map<int,int> mp;
    rep(i,n){
        mp[sorted[i]] = i+1;
    }


    ll res = 0;
    BIT<int> bit(n);
    rep(i,n){
        res += i-bit.getSum(mp[a[i]]);
        bit.add(mp[a[i]],1);
    }

    cout << res << endl;
}
