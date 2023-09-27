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
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define rep2(i,s,n) for(ll i=(s);i<(ll)(n);i++)
#define all(v) v.begin(),v.end()
#define decp(n) cout<<fixed<<setprecision((int)n)
const int inf=1e9+7;

vin par(10010);
vin deep(10010);
void init(int n);
int root(int x);
void unite(int x,int y);
bool same(int x,int y);
vector<tuple<int,int,int>> edge(100010);
int v,e;

int kruskal(){
    sort(all(edge));
    init(v);
    int res=0;
    for(auto hen:edge){
        if(!same(get<1>(hen),get<2>(hen))){
            unite(get<1>(hen),get<2>(hen));
            res+=get<0>(hen);
        }
    }
    return res;
}

int main(){
    cin>>v>>e;
    rep(i,e){
        int s,t,w;cin>>s>>t>>w;
        edge[i]=make_tuple(w,s,t);
    }
    cout<<kruskal()<<endl;
}

void init(int n){
    rep(i,n){
        par[i]=i;
        deep[i]=0;
    }
}
int root(int x){
    if(par[x]==x)return x;
    else return par[x]=root(par[x]);
}
void unite(int x,int y){
    x=root(x);
    y=root(y);
    if(x==y)return;
    if(deep[x]<deep[y])par[x]=y;
    else{
        par[y]=x;
        if(deep[x]==deep[y])deep[x]++;
    }
}
bool same(int x,int y){
    return root(x)==root(y);
}
