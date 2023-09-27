#include <bits/stdc++.h>
typedef long long ll;
#define ALL(l)  (l).begin(),(l).end()
#define rep(i,n) for(ll (i)=0;(i)<(n);(i)++)
#define rep2(i, s, n) for (ll i = (s); i < (ll)(n); i++)
using namespace std;

//const ll mod =  1000000007;
const ll maxn = 100000000000000;

//---------------------------------------------------------------------------------------------------
using vi = vector<int>; // intの1次元の型に vi という別名をつける
using vll = vector<ll>; // intの1次元の型に vi という別名をつける
using vvll = vector<vll>; // intの2次元の型に vvi という別名をつける
using vs = vector<string>; // stringの1次元の型に vs という別名をつける
using pll = pair<ll, ll>; // これ以降 pii という型名はpair<ll, ll> と同じ意味で使える
//---------------------------------------------------------------------------------------------------


int main() {
    ll v,e;
    cin>>v>>e;
    vvll d(v,vll(v,maxn));
    rep(i,e){
        ll s,t,k;
        cin>>s>>t>>k;
        d.at(s).at(t)=k;
       // d.at(t).at(s)=k;
    }
    rep(i,v){
        d.at(i).at(i)=0;
    }
    for(int k=0;k<v;k++){
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                d.at(i).at(j)=min(d.at(i).at(j),d.at(i).at(k)+d.at(k).at(j));
               
                //cout<<d.at(i).at(j)<<endl;
               
            
            }
        }
    }
    
    rep(i,v){
       
       
          if(d.at(i).at(i)<0){
                cout<<"NEGATIVE CYCLE"<<endl;
                return 0;  
          }
           
        
    }
     rep(i,v){
        rep(j,v-1){
            if(d.at(i).at(j)>=1000000000000)cout<<"INF ";
            else cout<<d.at(i).at(j)<<" ";
        }
        if(d.at(i).at(v-1)>=1000000000000)cout<<"INF"<<endl;
        else cout<<d.at(i).at(v-1)<<endl;
    }
   
}

