#include<bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i) 
#define PI acos(-1)

using namespace std;
using ll = long long;
using P = pair<int, int>;
using LP = pair<ll, ll>;

int find(int i, vector<int>& ds) {
    if (ds[i] == i) return i;
    ds[i] = ds[ds[i]];
    return find(ds[i], ds);
}

bool unionSets(int i, int j, vector<int>& ds) {
    int p1 = find(i, ds);
    int p2 = find(j, ds);
    if (p1 == p2) return false;

    ds[p1] = p2;
    return true;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    cin>>n>>m;
    vector<int> ds(n);
    rep(i, n) ds[i] = i;
    rep(i, m) {
        int v1, v2;
        cin>>v1>>v2;
        unionSets(v1, v2, ds);
    }

    int q;
    cin>>q;
    rep(i, q) {
        int s, t;
        cin>>s>>t;
        if (find(s, ds) == find(t, ds)) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
