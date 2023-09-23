#include<bits/stdc++.h>
using namespace std;

#define int long long

typedef pair<int,int>pint;
typedef vector<int>vint;
typedef vector<pint>vpint;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
#define each(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)
template<class T,class U>void chmin(T &t,U f){if(t>f)t=f;}
template<class T,class U>void chmax(T &t,U f){if(t<f)t=f;}

int N;
int A[111];

signed main(){
    scanf("%lld",&N);
    rep(i,N)scanf("%lld",&A[i]);

    rep(i,N){
        int cur=i;
        while(cur>0&&A[cur-1]>A[cur]){
            swap(A[cur],A[cur-1]);
            cur--;
        }
        rep(j,N){
            if(j)printf(" ");
            printf("%lld",A[j]);
        }
        puts("");
    }
    return 0;
}