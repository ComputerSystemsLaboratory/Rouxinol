#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<n;i++)
#define all(v) v.begin(), v.end()
typedef long long ll;
typedef pair<ll,ll> P;
typedef vector<ll> vec;
typedef vector<vec> mat;
int main(){
    int n,m,h[1501],w[1501];
    while(cin>>n>>m,n){
        if(n==0&&m==0) break;
        rep(i,n) cin>>h[i];
        rep(i,m) cin>>w[i];
        int H[1501],W[1501];
        H[0]=0,W[0]=0;
        rep(i,n) H[i+1]=H[i]+h[i];
        rep(i,m) W[i+1]=W[i]+w[i];
        vec A;
        rep(i,n+1)rep(j,m+1) A.push_back(H[i]-W[j]);
        sort(all(A));
        ll ans=0,x=0,a=0;
        rep(i,A.size()){
        if(A[i]!=a) ans+=x*(x-1)/2,x=1,a=A[i];
        else x++;
        if(i==A.size()-1) ans+=x*(x-1)/2;
        }
        cout<<ans<<"\n";
    }
}
