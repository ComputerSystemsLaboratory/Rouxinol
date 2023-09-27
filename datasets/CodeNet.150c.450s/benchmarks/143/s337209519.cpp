#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
using ll=long long;

int main(){
    int n,q;cin>>n;
    ll sum=0;
    vector<ll> num(100010,0);
    for(int i=0;i<n;++i){
        ll a;cin>>a;
        sum+=a;
        num[a]++;
    }
    cin>>q;
    for(int i=0;i<q;++i){
        ll b,c;cin>>b>>c;
        sum+=(c-b)*num[b];
      	num[c]+=num[b];
        num[b]=0;
        cout<<sum<<endl;
    }
    return 0;
}