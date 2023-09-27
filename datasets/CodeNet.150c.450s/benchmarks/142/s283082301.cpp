#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n, k; cin>>n>>k;
    int a[n]; for(auto &i : a)  cin>>i;
    for(int i = 0; i < n-k; i++) {
        if(a[i] < a[i+k])   cout<<"Yes";
        else    cout<<"No";
        cout<<"\n";
    }
}