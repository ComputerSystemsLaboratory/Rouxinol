#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

//BEGIN CUT HERE
//Binary Indexed Tree
//1-indexed
//1-indexed
//1-indexed
class Bit{
public:
    //tbl[1]...tbl[n]
    explicit Bit(int n):size(static_cast<unsigned int>(n+1)){//1-indexed
        tbl.resize(size+10,0);
    }
    void add(int a,ll w){//tbl[a]+=w , 1-indexed , 1-indexed!!!!!!!!!!!!!!!
        for(int i=a;i<=size;i+=i&-i)tbl[i]+=w;
    }
    ll sum(int a){//v[1]+...+v[a] , 1-indexed ,1-indexed!!!!!!!!!!!!!
        ll ret=0;
        for(int i=a;i>0;i-=i&-i){
            ret+=tbl[i];
        }
        return ret;
    }
    int lower_bound(ll w){
        if(w<=0)return 0;
        int x=0;
        int k=1;
        while(true){
            if(k*2>size){
                break;
            }
            k*=2;
        }
        for(k;k>0;k/=2){
            if(x+k<=size && tbl[x+k]<w){
                w-=tbl[x+k];
                x+=k;
            }
        }
        return x+1;//1-indexed , 1-indexed!!!!!!!!!!!!
    }
private:
    unsigned int size;
    vector<ll> tbl;
};
//END CUT HERE

//AOJ->library->Range Query->RSQ
int main(){
    int n,q;
    cin>>n>>q;
    Bit bit(n);
    for(int i=0;i<q;i++){
        int a,b,c;cin>>a>>b>>c;
        if(a==0){
            bit.add(b,c);
        }else{
            cout<<bit.sum(c)-bit.sum(b-1)<<endl;
        }
    }
}
