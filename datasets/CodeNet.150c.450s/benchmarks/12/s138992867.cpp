#include<bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i) 
#define PI acos(-1)

using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    vector<int> as(n, INT_MAX);
    rep(i, n) cin>>as[i];
    rep(i, n) {
        int p = as[(i - 1) / 2];
        int l = as[i * 2 + 1];
        int r = as[i * 2 + 2];

        cout<<"node "<<i + 1<<": key = "<<as[i]<<", ";
        if (i - 1 >= 0) {
            cout<<"parent key = "<<p<<", ";
        }
        if (i * 2 + 1 < n) {
            cout<<"left key = "<<l<<", ";
        }
        if (i * 2 + 2 < n) {
            cout<<"right key = "<<r<<", ";
        }
        cout<<endl;
    }
}
