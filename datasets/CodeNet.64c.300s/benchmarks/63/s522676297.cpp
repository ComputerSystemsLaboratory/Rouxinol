#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define INF 999999999

ll gcd (ll a,ll b){
    if(a<b)swap(a,b);
    if(a%b==0)return b;
    return gcd(b,a%b);
}

ll lcm(ll a,ll b){
    return a/gcd(a,b)*b;
}

int main(){
    int a,b;
    while(cin>>a>>b){
        cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
    }
}