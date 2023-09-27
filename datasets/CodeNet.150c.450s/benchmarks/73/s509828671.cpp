#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a) (a).begin(),(a).end()
#define pb emplace_back

//0-index 半開区間セグツリー(値の更新or加算 , 最小値or最大値or和) verified AOJ DSL_2_A
template<typename T, typename E>
class segment_tree{
    typedef function<T(T,T)> F;
    typedef function<T(T,E)> G;
private:
    int num_of_elm_;
    vector<T> dat_;
    F f_;
    G g_;
    T ident_;
public:
    segment_tree(int n, F f, G g, T ident):f_(f), g_(g), ident_(ident){
        num_of_elm_ = 1;
        while(num_of_elm_<n)num_of_elm_*=2;
        dat_.resize(2*num_of_elm_,ident);
    }

    void update(int pos,T val){
        int p = num_of_elm_ + pos;
        dat_[p] = g_(dat_[p],val);
        while(p!=1){
            p/=2;
            dat_[p] = f_(dat_[p*2], dat_[p*2+1]);
        }
    }

    T query(int L, int R,int l=0,int r=0, int k=1){
        if(k==1)r = num_of_elm_;
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
    auto  f = [](int a, int b){ return a+b; };
    auto  g = [](int a, int b){ return a+b; };
    segment_tree<int,int> st(n,f,g,0);

    rep(i,q){
        int com,x,y;
        cin>>com>>x>>y;
        if(com==0){
            st.update(x-1,y);
        }else{
            cout<<st.query(x-1,y+1-1)<<endl;
        }

    }
}



