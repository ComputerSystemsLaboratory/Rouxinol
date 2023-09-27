#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <stack>
#include <functional>
#include <queue>
#include <cmath>

#define rep(i,j,k) for(int i=j;i<k;i++)
#define drep(n,m) for(int i=0;i<n;i++)for(int j=0;j<m;j++)
#define fi first
#define se second
#define vi vector<int>
#define INF 1000000000
#define MOD 1000000009
#define pb push_back
#define mp make_pair
typedef long long ll;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

using namespace std;

ll gcd(ll a,ll b){
    if(a<b){
        int t=a;a=b;b=t;
    }
    int c=a%b;
    while(c!=0){
        a=b;
        b=c;
        c=a%b;
    }
    return b;
}

ll lcm(ll a,ll b){
    return a*b/gcd(a,b);
}

bool isPrime(int x){
    if(x==1)return false;
    if(x==2)return true;
    if(x%2==0)return false;
    for(int i=3;i<=sqrt(x);i+=2){
        if(x%i==0)return false;
    }
    return true;
}

int main() {
    string s;
    vector<pair<string,int>> v;
    string ma="";
    for(int i=0;cin>>s;i++){
        if(ma.length()<s.length())ma=s;
        
        if(i==0)v.pb(mp(s,1));
        else {
            bool f=true;
            rep(j,0,v.size()){
                if(v[j].fi==s){
                    f=false;
                    v[j].se++;
                    break;
                }
            }
            if(f)v.pb(mp(s,1));
        }
    }
    
    string ans;
    int temp=0;
    rep(i,0,v.size()){
        if(temp<v[i].se){
            ans=v[i].fi;
            temp=v[i].se;
        }
    }
    cout<<ans<<" "<<ma<<endl;
    
  
    return 0;
}

