#include <bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(long long i=a; i<b; i+=1)
#define repr(i,a,b) for(long long i=a; i<=b; i+=1)
#define vec vector<ll>
//#define map map<char,int>
#define repa(p,A) for(auto p:A)
#define pb push_back
#define sort(a) sort(a.begin(),a.end())
#define reverse(a) reverse(a.begin(),a.end())
const double PI=acos(-1);
using namespace std;

int main() {
    ll N;
    cin>>N;
    vec A(N);
    ll count=0;
    map<ll,ll> B; 
    rep(i,0,N) {
        cin>>A[i];
        count+=A[i];
        B[A[i]]+=1;
        }

    ll M;
    cin>>M;
    rep(i,0,M) {
        ll a,b;
        cin>>a>>b;
        count+=(b-a)*B[a];
        cout<<count<<endl;
        B[b]+=B[a];
        B[a]=0;
        }


        }


