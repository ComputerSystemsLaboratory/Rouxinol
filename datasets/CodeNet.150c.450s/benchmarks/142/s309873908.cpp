#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=1;i<=n-k;i++){
        if(a[i-1] < a[i+k-1]){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
}
