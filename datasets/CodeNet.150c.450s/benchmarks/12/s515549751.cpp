#include<bits/stdc++.h>
using namespace std;

#define int long long 
signed main(){
    int n;cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
    for(int i=0;i<n;i++){
        int p = (i-1)/2;
        int l = 2*i+1;
        int r = 2*i+2;
        cout << "node " << i+1 << ": key = " << a[i] << ", ";
        if(i) cout << "parent key = " << a[p] << ", ";
        if(l<n) cout << "left key = " << a[l] << ", ";
        if(r<n) cout << "right key = " << a[r] << ", ";
        cout << endl;
    }
}
