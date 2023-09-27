//  Created by Vignesh Manoharan

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <cstring>
#include <cassert>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<vi> vvi;

const int INF = 1000000000;
const ll LINF = 1e17;
const double PI =3.141592653589793238;
#pragma unused(INF,PI,LINF)
#define F(i,a,n) for(int i=(a);i<(n);i++)

template<typename T,typename TT> ostream& operator<<(ostream &s,pair<T,TT> t) {return s<<"("<<t.first<<","<<t.second<<")";}
template<typename T> ostream& operator<<(ostream &s,vector<T> t){
    for(int i=0;i<(t).size();i++)s<<t[i]<<((i<(t).size()-1)?" ":"");return s; }
template<typename T> ostream& operator<<(ostream &s,set<T> t){for(T x:t) s<<x<<" ";return s; }
template<typename T> istream& operator>>(istream &s,vector<T> &t){
    for(int _i=0;_i<t.size();_i++) s>>t[_i];return s; }

#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()

const int maxn=100010;
ll a[maxn],tree[4*maxn];
ll merge(ll t1,ll t2){
    return t1+t2;
}
void build(int v,int l,int r){
    // call v=1,l=0,r=n-1
    if(l==r){
        tree[v]=a[l];
    } else {
        int mid=(l+r)/2;
        build(2*v,l,mid);
        build(2*v+1,mid+1,r);
        tree[v]=merge(tree[2*v],tree[2*v+1]);
    }
}
ll query(int v,int l,int r,int ql,int qr){
    // call v=1,l=0,r=n-1 to query from ql to qr(included)
    if(ql>qr)
        return 0; // check this for 'identity' value
    if(l==ql && r==qr)
        return tree[v];
    int mid=(l+r)/2;
    return merge(query(2*v,l,mid,ql,min(qr,mid)),
                 query(2*v+1,mid+1,r,max(ql,mid+1),qr));
}
void update(int v,int l,int r,int idx,int val){
    // call v=1,l=0,r=n-1 to update idx to val
    if(l==r){
        // may want to update a
        tree[v]+=val;
    } else {
        int mid=(l+r)/2;
        if(idx<=mid) update(2*v,l,mid,idx,val);
        else update(2*v+1,mid+1,r,idx,val);
        tree[v]=merge(tree[2*v],tree[2*v+1]);
    }
}

int main(int argc, const char * argv[]) {
#ifdef local_test
    //    input
    //    freopen("input","w",stdout);
    //    cout<<"1 \n 100 10 \n";
     freopen("input","r",stdin);
     freopen("output","w",stdout);
#endif
    int n,m;
    cin>>n>>m;
    F(i,0,n) a[i]=0;
    build(1,0,n-1);
    F(i,0,m){
        int com,x,y;
        cin>>com>>x>>y;
        if(com==0){
            a[x-1]+=y;
            update(1,0,n-1,x-1,y);
        } else {
            cout<<query(1,0,n-1,x-1,y-1)<<"\n";
        }
    }
}