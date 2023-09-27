#include "bits/stdc++.h"
using namespace std;
#define CK(N, A, B) (A <= N && N < B)
#define REP(i, a, b) for (ll i = a; i < b; i++)
#define RREP(i, a, b) for (ll i = (b - 1); a <= i; i--)
#define F first
#define S second
typedef long long ll;

const int INF = 1e9 + 7;
const long long LLINF = 1e18;

// 42~
ll n;
ll field[501][501];
int main() {
    while(cin>>n, n){
        REP(i, 0, 501) REP(j, 0, 501) field[i][j]=-1;
        field[250][250]=0;

        REP(k, 0, n-1){
            ll num, d;
            cin>>num>>d;

            REP(i, 0, 501){
                bool flag=false;
                REP(j, 0, 501){
                    if(field[i][j]==num){
                        if(d==0) field[i][j-1]=k+1;
                        else if (d==1) field[i-1][j]=k+1;
                        else if(d==2) field[i][j+1]=k+1;
                        else field[i+1][j]=k+1;
                        flag=true;

                        break;
                    }
                }
                if(flag) break;
            }
        }

        ll mnx=1000, mxx=0, mny=1000, mxy=0;
        REP(i, 0, 501){
            REP(j, 0, 501){
                if(field[i][j]!=-1){
                    mnx=min(mnx, j);
                    mxx=max(mxx, j);
                    mny=min(mny, i);
                    mxy=max(mxy, i);
                }
            }
        }
        mxx++;
        mxy++;
        cout<<mxx-mnx<<" "<<mxy-mny<<endl;
    }
    return 0;
}
