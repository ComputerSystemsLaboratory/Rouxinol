#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<math.h>
#include<complex>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<bitset>
using namespace std;
#define REP(i,m,n) for(int i=(int)m ; i < (int) n ; i++ )
#define rep(i,n) REP(i,0,n)
typedef long long ll;
typedef pair<int,int> pint;
const int inf=1e9+7;
const ll longinf=1LL<<60 ;
const ll mod=1e9+7 ;
int dx[4]={1,0,-1,0} , dy[4]={0,1,0,-1} ;


struct SegmentTree{
private:
    int n;
    vector<ll> node;
public:
    SegmentTree(int sz,ll init){
        n=1;
        while(n<sz)n*=2;
        node.resize(2*n-1,init);        
    }
    void update(int k,ll x){
        k+=n-1;
        node[k]+=x;
        while(k>0){
            k=(k-1)/2;
            node[k]=node[2*k+1]+node[2*k+2];
        }
    }
    ll get(int a,int b,int k=0,int l=0,int r=-1){
        if(r<0)r=n;
        if(r<=a||b<=l)return 0;
        if(a<=l&&r<=b)return node[k];
        ll xl=get(a,b,2*k+1,l,(l+r)/2);
        ll xr=get(a,b,2*k+2,(l+r)/2,r);
        return xl+xr;
    }
};
int main(){
    int n;
    cin>>n;
    SegmentTree Seg(n,0);
    int q;cin>>q;
    rep(i,q){
        int a,x,y;
        cin>>a>>x>>y;
        if(a)cout<<Seg.get(x-1,y)<<endl;
        else Seg.update(x-1,y);
    }
   return 0;
}
