#include <bits/stdc++.h>
using namespace std;
int main(void){
    long n,q,a,b,c,ans = 0; cin >> n;
    vector<int> v(100000);
    for(int i=0;i<n;i++){
        cin >> a; v[a-1]++; ans += a;
    }
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> b >> c;
        ans += (c-b)*v[b-1];
        cout << ans << endl;
        v[c-1] += v[b-1];
        v[b-1] = 0;
    }
    
}