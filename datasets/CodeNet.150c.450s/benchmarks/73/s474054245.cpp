#include "bits/stdc++.h"
#include <cassert>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define vi vector<int>
#define pb push_back
#define INF 999999999
//#define INF (1LL<<59)


//??????????????°?????????(????????´??°or?????? , ????°????or?????§???or???) verified AOJ DSL_2,DSL_3
template<class T>
class segtree{
private:
    vector<T> dat;
    int _size;  //the number of leaves
    T _init;
    
public:
    segtree(int __size=0 , T init=numeric_limits<T>::max() ):_size(__size) , _init(init) , dat(4*__size,init){
        if(__size==0)return ;
        int x=1;
        while(x<_size)x*=2;
        _size = x;
    }
    
    void update(int m,T x){
        int i = m+_size;
        dat[i] += x;    //addition
//        dat[i] = x;     //initialize
        while(i!=1){
//            dat[i/2] = min(dat[i],dat[i^1]);    //minimum
//            dat[i/2] = max(dat[i],dat[i^1]);    //maximum
            dat[i/2] = dat[i]+dat[i^1];         //sum
            i/=2;
        }
    }
    
    // call find(s,t)
    T find(int s,int t,int num=1,int a=0,int b=-1){
        if(b==-1)b=_size-1; //I couldn't "int b=_size".
        if(b<s||t<a)return _init;
        if(s<=a&&b<=t)return dat[num];
//        return min( find(s,t,num*2,a,(a+b)/2) , find(s,t,num*2+1,(a+b)/2+1,b) );    //minimum
//        return max( find(s,t,num*2,a,(a+b)/2) , find(s,t,num*2+1,(a+b)/2+1,b) );    //maximum
        return find(s,t,num*2,a,(a+b)/2) + find(s,t,num*2+1,(a+b)/2+1,b);           //sum
    }
    int size(){return _size;}
};

/*
 segtree<int> x(100);                                                //100 datas
 segtree<pair<int,int>> x( 100,make_pair( 1<<31-1 , 1<<31-1 ) );     //100 datas
 */



int main(){
    int n,q;
    cin>>n>>q;
    segtree<int> st(n,0);
    rep(i,q){
        int com,x,y;
        cin>>com>>x>>y;
        if(com==0)st.update(x-1,y);
        else cout<<st.find(x-1,y-1)<<endl;
    }
}