#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define INF 999999999


template<class T>
class BIT{
private:
    vector<T> sum_of_section_;
    int element_count_;
    T init_;
    
public:
    BIT(int element_count=0 , T init=0):element_count_(element_count) , init_(init) , sum_of_section_(element_count+1,init){}

    T sum(int i){
        int sum=0;
        while(i>0){
            sum+=sum_of_section_[i];
            i -= i&-i;
        }
        return sum;
    }
    
    void add(int i,T val){
        while(i<=element_count_){
            sum_of_section_[i]+=val;
            i += i&-i;
        }
    }
};

int n;

int main(){
    int q;
    cin>>n>>q;
    BIT<int> bit(n);
    rep(i,q){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==0)bit.add(b,c);
        else cout<<bit.sum(c)-bit.sum(b-1)<<endl;
    }
}