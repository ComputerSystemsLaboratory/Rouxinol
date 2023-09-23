#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> P;

#define MOD 1000000007

ll func(ll n,ll m,ll p){
        if(p==0)return 1;
        if(p%2==0){
                ll t=func(n,m,p/2);
                return t*t%m;
        }else{
                return n*func(n,m,p-1)%m;
        }
}

int main(){
        int n,m;
        cin>>n>>m;
        cout<<func(n,MOD,m)<<endl;
        return 0;
}
