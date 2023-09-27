#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb emplace_back
#define INF (1e9+1)
//#define INF (1LL<<59)

//0-index ?????????????????°?????????(????????´??°or?????? , ????°????or?????§???or???) verified AOJ DSL_2,DSL_3
template<class T>
class segtree{
private:
    vector<T> dat;
    int _size;  //the number of leaves
    T _init;
    
public:
    segtree(int __size=0 , T init=numeric_limits<T>::max() ):_size(__size) , _init(init){
        if(__size==0)return ;
        int x=1;
        while(x<_size)x*=2;
        _size = x;
        dat.resize(_size*2);
    }
    
    void init(vector<T> v){
        for(int i=_size;i<_size+v.size();i++) dat[i] = v[i-_size];
        //for(int i=_size-1;i>=1;i--)dat[i] = min(dat[i*2],dat[i*2+1]); //minimum
        //for(int i=_size-1;i>=1;i--)dat[i] = max(dat[i*2],dat[i*2+1]); //maximum
        for(int i=_size-1;i>=1;i--)dat[i] = dat[i*2]+dat[i*2+1];      //sum
    }
    
    void update(int m,T x){
        int i = m+_size;
        dat[i] += x;    //addition
        //dat[i] = x;     //initialize
        for(; i!=1; i/=2){
            //dat[i/2] = min(dat[i],dat[i^1]);    //minimum
            //dat[i/2] = max(dat[i],dat[i^1]);    //maximum
            dat[i/2] = dat[i]+dat[i^1];         //sum
        }
    }
    
    // call find(s,t)
    T find(int s,int t,int num=1,int l=0,int r=-1){
        if(r==-1)r=_size; //I couldn't "int b=_size".
        if(r<=s||t<=l)return _init;
        if(s<=l&&r<=t)return dat[num];
        //return min( find(s,t,num*2,l,(l+r)/2) , find(s,t,num*2+1,(l+r)/2,r) );    //minimum
        //return max( find(s,t,num*2,l,(l+r)/2) , find(s,t,num*2+1,(l+r)/2,r) );    //maximum
        return find(s,t,num*2,l,(l+r)/2) + find(s,t,num*2+1,(l+r)/2,r);           //sum
    }
    int size(){return _size;}
};
int main(){
    int n,q;
    cin>>n>>q;
    segtree<int> st(n,0);
    st.init(vector<int>(st.size(),0));
    rep(i,q){
        int type;
        cin>>type;
        if(type==0){
            int j,x;
            cin>>j>>x;
            j--;
            st.update(j,x);
        }else{
            int s,t;
            cin>>s>>t;
            s--;
            cout<<st.find(s,t)<<endl;
        }
    }
    
}