
#include <bits/stdc++.h>

#define PI 3.14159265359
#define rep(i,a,n) for(int i=a;i<(int)n;++i)
#define SZ(x) ((int)(x).size())	//size() unsigned -> int
#define descSort(a) sort(a.begin(),a.end(),std::greater<int>())
using namespace std;
typedef long long ll;
const ll INF = 1e9 + 7;
/*
ll power(ll m,ll n){
    ll res=1;
    if(n>0){
        res=power(m,n/2);
        cout<<res<<" "<<m<<" "<<n<<endl;
        if(n%2==0)res=(res*res)%INF;
        else res=(((res*res)%INF)*m)%INF;
    }
    return res;
}*/
ll power(ll m,ll n){
    ll res;
    if(n==0)return 1;
    res=power(m*m%INF,n/2);
    //cout<<res<<" "<<m<<" "<<n<<endl;
    if(n%2==1) res=res*m%INF;
    return res;
}
int main(void){
    ll n,m;
    cin>>m>>n;
    cout<<power(m,n)<<endl;
    return 0;
}


