#include<bits/stdc++.h>
#define LL long long
#define rep(i,n) for(int i=0;i<n;++i)
#define FOR(i,a,b) for(int i=a;i<=b;++i)
using namespace std;
static const LL INF = 1LL<<61LL;
static const int MAX_N = 1<<18;
typedef pair<int,int> PII;

LL S[MAX_N+1],n,m;
LL ans;

class BIT{
    public:
        int N;
        void init(int _N){
            N=_N;
            rep(i,N+1)S[i]=0;
        }

        LL getSum(int i){
            LL s=0;
            while(i){
                s+=S[i];
                i-=i&-i;
            }
            return s;
        }

        void add(int i,int x){
            while(i<=N){
                S[i]+=x;
                i+=i&-i;
            }
        }
};

int main(){
    while(1){
        BIT bit;
        int t=0;
        cin>>n>>m;
        if(n==0&&m==0)break;
        bit.init(n);
        FOR(i,1,n){
            int x;
            cin>>x;
            bit.add(i,x);
        }
        FOR(i,m,n){
            LL query=bit.getSum(i)-bit.getSum(t);
            ans=max(query,ans);
            t++;
        }
        cout<<ans<<endl;
        ans=0;
    }
    return 0;
}