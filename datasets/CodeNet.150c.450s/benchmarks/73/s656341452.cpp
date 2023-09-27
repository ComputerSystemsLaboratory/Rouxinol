#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a) (a).begin(),(a).end()
#define pb emplace_back
#define INF (1e9+1)

//0-index 抽象化半開区間遅延セグツリー
template<typename T, typename E>
class segment_tree{
    typedef function<T(T,T)> F; //要素に適用する演算
    typedef function<T(T,E)> G; //作用素の適用
    typedef function<E(E,E)> H; //作用素の合成
    typedef function<E(E,int)> P;
private:
    int num_of_elm_;
    vector<T> dat_, lazy_;
    F f_;
    G g_;
    H h_;
    P p_;
    T ident_;
    E op_ident_;
public:
    segment_tree(int n, F f, G g, H h, P p, T ident, E op_ident):f_(f), g_(g), h_(h), p_(p), ident_(ident), op_ident_(op_ident){
        num_of_elm_ = 1;
        while(num_of_elm_<n)num_of_elm_*=2;
        dat_ .resize(2*num_of_elm_,ident);
        lazy_.resize(2*num_of_elm_,op_ident);
    }

    void eval(int k, int len){
        if(lazy_[k] == op_ident_)return ;

        if(k<num_of_elm_){
            lazy_[k*2]=h_(lazy_[k*2], lazy_[k]);
            lazy_[k*2+1]=h_(lazy_[k*2+1], lazy_[k]);
        }
        dat_[k] = g_(dat_[k],p_(lazy_[k], len));
        lazy_[k] = op_ident_;
    }
    
    T update(int L, int R, int val, int l=0, int r=0, int k=1){
        if(k==1)r = num_of_elm_;
        
        eval(k,r-l);
        if(r<=L || R<=l)return dat_[k];
        else if(L<=l && r<=R){
            lazy_[k] = h_(lazy_[k], val);
            return g_(dat_[k], p_(lazy_[k], r-l));
        }
        else{
            return dat_[k] = f_(update(L,R,val,l,(l+r)/2,k*2), update(L,R,val,(l+r)/2,r,k*2+1));
        }

    }
    
    T query(int L, int R,int l=0,int r=0, int k=1){
        if(k==1)r = num_of_elm_;

        eval(k,r-l);
        if(r<=L || R<=l)return ident_;
        else if(L<=l && r<=R){
            return dat_[k];
        }
        else{
            return f_(query(L,R,l,(l+r)/2,k*2), query(L,R,(l+r)/2,r,k*2+1));
        }
    }
};

int main(){
    int n,q;
    cin>>n>>q;
    auto f = [](int a, int b){return a+b;};
    auto g = [](int a, int b){return a+b;};
    auto h = g;
    auto p = [](int a, int len){return a*len;};
    segment_tree<int,int> st(n, f, g, h, p, 0, 0);
    rep(i,q){
        int com,x,y;
        cin>>com>>x>>y;
        if(com==0){
            st.update(x-1,x,y);
        }else{
            cout<<st.query(x-1,y)<<endl;
        }
    }
}


