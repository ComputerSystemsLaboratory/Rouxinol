#include<bits/stdc++.h>
#define LL long long
#define rep(i,n) for(int i=0;i<n;++i)
#define FOR(i,a,b) for(int i=a;i<=b;++i)
using namespace std;
static const LL INF = 1LL<<61LL;
static const int MAX_N = 1<<18;
typedef pair<int,int> PII;

LL bit[MAX_N+1],n,q;

class BIT{
    public:
        int N;
        void init(int _N){
            N=_N;
            rep(i,N+1)bit[i]=0;
        }

        int getSum(int i){
            int s=0;
            while(i){
                s+=bit[i];
                i-=i&-i;
            }
            return s;
        }

        void add(int i,int x){
            while(i<=N){
                bit[i]+=x;
                i+=i&-i;
            }
        }
};

int main(){
    BIT bit;
    cin>>n>>q;
    bit.init(n);
    rep(i,q){
        int com,x,y;
        cin>>com>>x>>y;
        if(!com)bit.add(x,y);
        else cout<<bit.getSum(y)-bit.getSum(x-1)<<endl;
    }
    return 0;
}