#include "bits/stdc++.h"

using namespace std;

using ll = long long;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define ALL(x) x.begin(),x.end()
#define REPR(i,n) for(ll i=(n)-1;i>=0;i--)
#define FOR(i,m,n) for(ll i=(m);i<(n);i++)
#define int long long

int H;
int A[20][10];
void solve() {
    int H;cin>>H;
    int W = 5;
    if(H==0)exit(0);
    REP(i,H){
        REP(j,5){
            cin>>A[i][j];
        }
    }
    bool found = true;
    int ans = 0;
    while(found){
        found = false;
        REP(i,H){
            REP(l,W){
                int r = l;
                if(A[i][l]==-1)continue;
                while(A[i][r]==A[i][l]){
                    r++;
                    if(r==W)break;
                }
                if(r-l>=3){
                    found = true;
                    FOR(j,l,r){
                        ans+=A[i][j];
                        A[i][j]=-1;
                    }
                }
            }
        }
        REP(_,H+1){
            REPR(i,H-1){
                REP(j,W){
                    if(A[i+1][j]==-1){
                        A[i+1][j]=A[i][j];
                        A[i][j]=-1;
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
}

signed main() {
	while (true)solve();
}
