#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#include<iostream>
#include<cmath>
#include<map>
#include<set>
#include<climits>
using namespace std;
typedef vector<string>vs;
typedef vector<int>vi;
typedef vector<vi>vvi;
typedef vector<double>vd;
typedef pair<int,int>pii;
typedef long long ll;
typedef pair<ll,ll>pll;
typedef vector<ll>vl;
#define rrep(i,x,n) for(int i=(x);i<(n);++i)
#define rep(i,x) rrep(i,0,(x))
#define fi first
#define se second
#define each(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();++i)
#define all(c) (c).begin(),(c).end()
#define rall(c) (c).rbegin(),(c).rend()
#define pb push_back
#define maxs(a,b) (a)=max(a,b)
#define mins(a,b) (a)=min(a,b)

struct BIT{
    int N;
    vi dat;
    void init(int _N){
        N=_N;
        dat=vi(N+1,0);
    }
    void add(int k,int val){
        k++;
        while(k<=N){
            dat[k]+=val;
            k+=k&-k;
        }
    }
    int getSum(int k){
        k++;
        int ret=0;
        while(k){
            ret+=dat[k];
            k-=k&-k;
        }
        return ret;
    }
};

int main(){
    int N,Q;
    scanf("%d%d",&N,&Q);
    BIT bit;
    bit.init(N);
    while(Q--){
        int t,x,y;
        scanf("%d%d%d",&t,&x,&y);
        if(t){
            printf("%d\n",bit.getSum(y-1)-bit.getSum(x-2));
        }
        else{
            bit.add(x-1,y);
        }
    }

    return 0;
}