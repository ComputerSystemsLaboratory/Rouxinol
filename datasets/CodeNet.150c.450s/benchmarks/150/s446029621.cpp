#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double long
#define rep(i, m, n) for(ll i = (ll)(m); i < (ll)(n); ++i)
#define rrep(i, m, n) for(ll i = (ll)(m); i > (ll)(n); --i)
const ll MOD = 1000000007;
const double pi = 3.14159265358979323846;

int n;

void countingsort(int a[], int b[], int k){
    int c[10001];
    rep(i, 0, k+1) c[i] = 0;
    rep(j, 1, n+1) c[a[j]]++;
    rep(i, 1, k+1) c[i] += c[i-1];
    rrep(j, n, 0) {
        b[c[a[j]]] = a[j];
        c[a[j]]--;
    }

}

int main(void){
    int *a, *b;
    cin >> n;
    a = new int[n+1];
    b = new int[n+1];
    rep(i, 1, n+1) cin >> a[i];
    countingsort(a, b, 10000);
    rep(i, 1, n+1) {
        if(i-1) cout << ' ';
        cout << b[i];
    }
    cout << endl;
    return 0;
}
