#include <bits/stdc++.h>
using namespace std;

int n,ans;

int is_prime(int x) {
    for (int i=2;i<=sqrt(x);++i) {
        if (!(x%i)) return 0;
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n;
    for (int i=0;i<n;i++) {
        int t; cin>>t;
        ans+=is_prime(t);
    }
    cout<<ans<<'\n';
}
