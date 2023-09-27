#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<ll,ll> P;
const ll MOD=10000;
const ll INF=1000000010;
const ll LINF=1000000000000000010;
const int MAX=2010;
int dx[8]={0,1,0,-1,1,-1,1,-1};
int dy[8]={1,0,-1,0,1,-1,-1,1};
template<typename T>
struct Segtree{
    using F=function<T(T,T)>;
    int siz;
    vector<T> dat;
    const F f;
    const T t1;
    Segtree(int n,const F f,const T &t1):f(f),t1(t1){
        siz=1;
        while(siz<n)siz<<=1;
        dat.assign(2*siz,t1);
    }
    void set(int k,const T &tt){
        dat[k+siz]=tt;
    }
    void build(){
        for(int k=siz-1;k>0;k--){
            dat[k]=f(dat[2*k+0],dat[2*k+1]);
        }
    }
    void update(int k,const T &tt){
        k+=siz;
        dat[k]=tt;
        while(k>>=1){
            dat[k]=f(dat[2*k],dat[2*k+1]);
        }
    }
    T query(int a,int b){
        T l1=t1;T r1=t1;
        for(a+=siz,b+=siz;a<b;a>>=1,b>>=1){
            if(a&1){
                l1=f(l1,dat[a++]);
            }
            if(b&1){
                r1=f(dat[--b],r1);
            }
        }
        return f(l1,r1);
    }
    T operator[](const int &k) const{
        return dat[k+siz];
    }
};
int main(){
    auto s=[](int a,int b){return a+b;};
    int n,q;cin>>n>>q;
    Segtree<int> seg(n,s,0);
    while(q--){
        int com,x,y;cin>>com>>x>>y;
        if(com){
            cout<<seg.query(x,y+1)<<endl;
        }else{
            seg.update(x,seg[x]+y);
        }
    }
	return 0;
}
