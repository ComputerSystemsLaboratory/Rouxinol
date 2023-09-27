#include <bits/stdc++.h>
using namespace std;
#define BIT_SIZE 1000000
typedef int BITTYPE;
BITTYPE _prepared_bit_table[BIT_SIZE];
//[1,n],0?????±?????????!
template <typename T>class BIT{
private:
	T* bit;int n;
public:
	BIT(int _n){bit=_prepared_bit_table;fill(bit,bit+BIT_SIZE,0);n=_n;}
	BIT(T* _table,int _sz,int _n){bit=_table;fill(bit,bit+_sz,0);n=_n;}
	int sum(int i){int s=0;while(i>0){s+=bit[i];i-=i&-i;}return s;}
	int sum(int lb,int ub){return sum(ub)-sum(lb-1);}
	void add(int i,int x){while(i<=n){bit[i]+=x;i+=i&-i;}}
	//v[1]+v[2]+...+v[x]>=w??¨??????????°????x????±???????
	int lowerbound(int w){if(w<=0)return 0;int x=0;for(int k = (1<<(31-__builtin_clz(n))); k >0 ; k>>=1)if(x+k<=n&&bit[x+k]<w){w-=bit[x+k];x+=k;}return x+1;}
};
struct INIT{INIT(){ios::sync_with_stdio(false);cin.tie(0);}}init;

int main() {
    int n,q;cin>>n>>q;
    BIT<int> bit(n);
    for(int i = 0; i < q; i++){
        int t,x,y;cin>>t>>x>>y;
        if(t==0)bit.add(x,y);
        else cout<<bit.sum(x,y)<<endl;
    }
    return 0;
}