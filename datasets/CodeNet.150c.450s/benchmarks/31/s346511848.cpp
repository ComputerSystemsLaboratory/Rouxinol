#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,i,j,tmp;
    cin>>n;
    vector<ll> r(n),m(n);
    for(i=0;i<n;i++){
        cin>>r[i];
    }
    m[0]=r[n-1];
   for(i=1;i<n;i++){
        m[i]=(m[i-1]>r[n-i-1]?m[i-1]:r[n-i-1]);
    }
    ll ans=m[n-2]-r[0];
    for(i=1;i<n-1;i++){
        tmp=m[n-i-2]-r[i];
        if(tmp>ans){
            ans=tmp;
        }
    }
    cout<<ans<<endl;
}
