#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define MAX_N 100000

int bit[MAX_N+1],n;

int sum(int i){
    int s=0;
    while(i>0){
        s+=bit[i];
        i-=i&-i;
    }
    return s;
}

void add(int i,int x){
    while(i<=n){
        bit[i]+=x;
        i+=i&-i;
    }
}

int main(){
    int q;
    cin>>n>>q;
    rep(i,q){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==0)add(b,c);
        else cout<<sum(c)-sum(b-1)<<endl;
    }
}