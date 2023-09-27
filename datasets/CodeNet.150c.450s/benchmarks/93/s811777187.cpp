#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i <(n); i++)
using namespace std;
using ll = long long;
using P = pair<string, ll>;

string is_stable(map<ll, string> a, map<ll, string> b, vector<ll> d){
    for(ll n : d) if(a[n] != b[n]) return "Not stable";
    return "Stable";
}

void print(P a[], ll n){
    rep(k, n) cout << a[k].first << ' ' << a[k].second << endl;
    return;
}

ll partition(P a[], ll p, ll r){
    ll x = a[r].second;
    ll i = p - 1;
    for(ll j = p; j < r; j++)
        if(a[j].second <= x) swap(a[++i], a[j]);
    swap(a[++i], a[r]);
    return i;
}

void quick_sort(P a[], ll p, ll r){
    if(p < r){
        ll q = partition(a, p, r);
        quick_sort(a, p, q-1);
        quick_sort(a, q+1, r);
    }
    return;
}

int main(){
    ll n; cin >> n;
    P a[n];
    map<ll, string> def;
    vector<ll> d;
    rep(i, n){
        string c; ll num;
        cin >> c >> num;
        a[i] = make_pair(c, num);
        if(def.find(num) == def.end()) def[num] = c;
        else def[num] += c;
        d.push_back(num);
    }

    quick_sort(a, 0, n-1);

    map<ll, string> bmap;
    rep(i, n){
        if(bmap.find(a[i].second) == bmap.end()) bmap[a[i].second] = a[i].first;
        else bmap[a[i].second] += a[i].first;
    }

    cout << is_stable(def, bmap, d) << endl;
    print(a, n);
    return 0;
}

