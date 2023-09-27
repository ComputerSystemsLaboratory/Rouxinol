#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

//BEGIN CUT HERE
//Binary Indexed Tree
//0-indexed
class Bit{
public:
    explicit Bit(int n):size(static_cast<unsigned int>(n)){
        tbl.resize(size,0);
    }
    void add(int a,ll w){//tbl[a]+=w
        for(int i=a;i<size;i|=i+1)tbl[i]+=w;
    }
    ll sum(int a){//v[0]+...+v[a]
        ll ret=0;
        for(int i=a;i>=0;i=(i&(i+1))-1){
            ret+=tbl[i];
        }
        return ret;
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
            b--;
            bit.add(b,c);
        }else{
            b--;c--;
            cout<<bit.sum(c)-bit.sum(b-1)<<endl;
        }
    }
}
