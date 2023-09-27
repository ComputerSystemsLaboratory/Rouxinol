#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back


ll ymdToNum(int y,int m,int d){
    ll ret=0;
    ret+=(int)((y-1)/3) * (20*10*3-10);
    ret+=((y-1)%3)*(20*10-5);
    
    if(y%3==0)
        ret+=(m-1)*20;
    else
        ret+=(m-1)*20-(int)((m-1)/2);
    
    ret+=d-1;
    
    return ret;
}


int main(){
    int n;
    cin>>n;
    rep(i,n){
        int y,m,d;
        cin>>y>>m>>d;
        ll a = ymdToNum(y,m,d);
        cout<<ymdToNum(1000,1,1)-a<<endl;
    }
}