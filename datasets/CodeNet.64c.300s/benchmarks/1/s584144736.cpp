#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double long
#define rep(i, m, n) for(ll i = (ll)(m); i < (ll)(n); ++i)
#define rrep(i, m, n) for(ll i = (ll)(m); i > (ll)(n); --i)
const ll MOD = 1000000007;
const double pi = 3.14159265358979323846;

int Partition(int *a, int p, int r){
    int x = a[r];
    int i = p - 1;
    rep(j, p, r){
        if(a[j] <= x){
            i = i+1;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);
    return i+1;
}

int main(void){
    int n, a[100000];
    cin >> n;
    rep(i, 0, n) cin >> a[i];
    int q = Partition(a, 0, n-1);
    rep(i, 0, n){
        if(i) cout << ' ';
        if(i == q) cout << '[' << a[i] << ']';
        else cout << a[i];
    }
    cout << endl;
    return 0;
}
