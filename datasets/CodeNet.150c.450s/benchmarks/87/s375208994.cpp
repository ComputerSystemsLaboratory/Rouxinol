#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;

#define rep(i,N) for(int i=0;i<(int)(N);++i)
#define rrep(i,N) for(int i=(int)(N)-1;i>=0;--i)
#define debug(x) cout<<#x<<"="<<x<<endl;
constexpr ll MOD=1000000007;
constexpr ll INF=1LL<<60;
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
template<typename T> void fail(T v){cout << v << endl;exit(0);}
//template end

void solve(){
    int H;
    while((cin>>H,H)){
        int A[10][5];
        rep(i,H)rep(j,5)cin>>A[i][j];
        bool update=1;
        int res=0;
        while(update){
            update=0;
            bool rm[10][5];rep(i,10)rep(j,5)rm[i][j]=0;
            rep(i,H){
                int ct=1;
                for(int j=1;j<5;j++)
                    if(A[i][j]==A[i][j-1])ct++;
                    else{
                        if(ct>2){
                            for(int k=j-ct;k<j;k++){rm[i][k]=1;update|=A[i][k]>0;res+=A[i][k];A[i][k]=0;}
                        }
                        ct=1;
                    }
                if(ct>2){
                            for(int k=5-ct;k<5;k++){rm[i][k]=1;update|=A[i][k]>0;res+=A[i][k];A[i][k]=0;}
                }
            }
            rep(i,5){
                int now=H-1,id=H-1;
                while(id>=0){
                    while(id>=0&&rm[id][i])id--;

                    if(id>=0)
                        {swap(A[now][i],A[id][i]);now--;id--;}
                }
            }
        }
        cout<<res<<endl;
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(20);
    solve();
    return 0;
}
