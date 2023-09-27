#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define INF 999999999


//note that this is 1-index
template<class T>
class BIT{
private:
    vector<T> sum_of_section_;
    int elements_count_;
    T init_;
    
public:
    BIT(int elements_count=0 , T init=0):elements_count_(elements_count*2),init_(init),sum_of_section_(elements_count*2+1,0){
        for(int i=0;i<elements_count_;i++){
            add(i+1,init);
        }
    }
    
    T sum(int i){   //(1,i)
        int sum=0;
        while(i>0){
            sum+=sum_of_section_[i];
            i -= i&-i;
        }
        return sum;
    }
    
    void add(int i,T val){
        while(i<=elements_count_){
            sum_of_section_[i]+=val;
            i += i&-i;
        }
    }
};


int main(){
    int n,q;
    cin>>n>>q;
    BIT<int> bit(n);
    
    rep(i,q){
        int com,x,y;
        cin>>com>>x>>y;
        if(com==0){
            bit.add(x,y);
        }
        else{
            cout<<bit.sum(y)-bit.sum(x-1)<<endl;
        }
    }
}