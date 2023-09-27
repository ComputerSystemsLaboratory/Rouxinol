#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using vin=vector<int>;
using vll=vector<long long>;
using vvin=vector<vector<int>>;
using vvll=vector<vector<long long>>;
using vstr=vector<string>;
using vvstr=vector<vector<string>>;
using vch=vector<char>;
using vvch=vector<vector<char>>;
using vbo=vector<bool>;
using vvbo=vector<vector<bool>>;
using vpii=vector<pair<int,int>>;
using pqsin=priority_queue<int,vector<int>,greater<int>>;
#define mp make_pair
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define rep2(i,s,n) for(int i=(s);i<(int)(n);i++)
#define all(v) v.begin(),v.end()
#define decp(n) cout<<fixed<<setprecision((int)n)
#define _GLIBCXX_DEBUG
const int inf=1e9+7;

vin h(1510);
vin w(1510);
map<int,int> hh;

int route(int n,int m){
    rep(i,n)cin>>h[i];
    rep(i,m)cin>>w[i];
    hh.clear();
    rep(i,n){
        int sumh=0;
        rep2(j,i,n){
            sumh+=h[j];
            hh[sumh]++;
        }
    }
    int tmp=0;
    rep(i,m){
        int sumw=0;
        rep2(j,i,m){
            sumw+=w[j];
            tmp+=hh[sumw];
        }
    }
    return tmp;
}

int main(){
    vin ans(1000,-1);
    int i=0;
    int n,m;
    while(1){
        cin>>n>>m;
        if(n==0&&m==0)break;
        ans[i]=route(n,m);
        i++;
    }
    rep(j,i)cout<<ans[j]<<endl;
}
