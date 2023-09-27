#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, k, a[200500];
    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=k; i<n; i++) {
        if(a[i - k] < a[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}