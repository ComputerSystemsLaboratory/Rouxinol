#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
typedef pair<ll,ll> P;
const ll MOD=1000000009;
const ll INF=1000000010;
const ll LINF=4000000000000000010LL;
const int MAX=310;
const double EPS=1e-9;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
struct SegmentTree{
    int siz;
    vector<int> node;
    SegmentTree(int n,int init){
        siz=1;
        while(siz<n)siz<<=1;
        node.assign(2*siz,init);
    }

    void update(int k,int x){
        k+=siz-1;
        node[k]+=x;
        while(k>0){
            k=(k-1)/2;
            node[k]=node[2*k+1]+node[2*k+2];
        }
    }

    int query(int a,int b,int k=0,int l=0,int r=-1){
        if(r<0)r=siz;
        if(r<=a||b<=l)return 0;
        if(a<=l&&r<=b)return node[k];
        int vl=query(a,b,2*k+1,l,(l+r)/2);
        int vr=query(a,b,2*k+2,(l+r)/2,r);
        return vl+vr;
    }
};
int main(){
	int n,q;cin>>n>>q;
	SegmentTree seg(n,0);
	while(q--){
		ll com,x,y;cin>>com>>x>>y;
		if(com){
			cout<<seg.query(x-1,y)<<endl;
		}else{
			seg.update(x-1,y);
		}
	}
    return 0;
}

