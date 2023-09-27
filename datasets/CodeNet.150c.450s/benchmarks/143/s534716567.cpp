#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long> a(n);
    long long ans = 0;
    map<long long, long long> M;
    for(int i = 0;i < n;i++){
        cin>>a[i];
        ans += a[i];
        M[a[i]]++;
    }

    int q;
    cin>>q;
    long long x,y;
    while(q--){
        cin>>x>>y;
        ans += M[x]*y - M[x]*x;
        M[y] += M[x];
        M[x] = 0;

        cout<<ans<<endl;
    }
}