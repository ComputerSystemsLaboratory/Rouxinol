#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    ll arr[n],sum=0;
    int ar[100001]={0};
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        sum+=arr[i];
        ar[arr[i]]++;
    }
    
    int q;
    cin>>q;
    ll b,c;
    while(q--) {
        cin>>b>>c;
        if(ar[b]==0) {
            cout<<sum<<'\n';
            continue;
        }
        ll val=ar[b];
        ll total=val*b;
        sum-=total;
        ar[b]-=val;
        ar[c]+=val;
        sum+=(c*val);
        cout<<sum<<'\n';
    }
}
