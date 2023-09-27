#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<n;i++)
#define all(v) v.begin(), v.end()
typedef long long ll;
typedef pair<ll,ll> P;
typedef vector<ll> vec;
typedef vector<vec> mat;
ll n,ans=0;
vec A;
vec bubllesort(vec A){
    if(A.size()==1) return A;
    vec B(A.begin(),A.begin()+A.size()/2),C(A.begin()+A.size()/2,A.end()),res;
    B=bubllesort(B);
    C=bubllesort(C);
    int b=0,c=0;
    rep(i,A.size()){
        if(b<B.size()&&(c==C.size()||B[b]<C[c])) res.push_back(B[b]),b++;
        else res.push_back(C[c]),c++,ans+=B.size()-b;
    }
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    vec A(n);
    rep(i,n) cin>>A[i];
    bubllesort(A);
    cout<<ans<<"\n";
}
