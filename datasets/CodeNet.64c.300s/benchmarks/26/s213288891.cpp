#include "bits/stdc++.h"
#define REP(i,n) for(int i=0;i<n;i++)
#define ALL(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
using namespace std;
long long mod = 1e9+7;
long long mult(long long a,long long p){
    if(p==1)return a;
    else if(p%2)return (mult(a,p-1)%mod)*(a%mod);
    long long b=mult(a,p/2);
    b%=mod;
    return b*b;
}
int main(){
    long long int n,m;
    cin>>m>>n;
    m%=mod;
    cout<<mult(m,n)%mod<<endl;
}