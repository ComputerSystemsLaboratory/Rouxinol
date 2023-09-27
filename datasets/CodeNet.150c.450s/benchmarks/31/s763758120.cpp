#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,i,r;
    cin>>n>>r;
    
    ll maxv=-2000000000,minv=r;
    for(i=1;i<n;i++){
        cin>>r;
        maxv=max(maxv,r-minv);
        minv=min(minv,r);
    }
    cout<<maxv<<endl;
}

